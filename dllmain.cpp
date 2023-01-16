//just c&p the code

if (Settings::MemoryAim and targetpawn and (safe_call(GetAsyncKeyState)(VK_RBUTTON)))
{
		Vector3 headtarget = targetpawn->GetBone(68);
    Vector2 headtarget_w2s = PlayerCameraManager->ProjectWorldLocationToScreen(width, height, headtarget);
		auto camloc = PlayerCameraManager->GetCameraLocation();
		auto NewRotation = galgan(camloc, headtarget);
		PlayerController->ClientSetRotation(NewRotation, false);
}
