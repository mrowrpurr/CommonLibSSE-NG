#include "RE/P/PlayerCamera.h"

namespace RE
{
	PlayerCamera* PlayerCamera::GetSingleton()
	{
		REL::Relocation<PlayerCamera**> singleton{ Offset::PlayerCamera::Singleton };
		return *singleton;
	}

	void PlayerCamera::ForceFirstPerson()
	{
		using func_t = decltype(&PlayerCamera::ForceFirstPerson);
		REL::Relocation<func_t> func{ RELOCATION_ID(49858, 50790) };
		return func(this);
	}

	void PlayerCamera::ForceThirdPerson()
	{
		using func_t = decltype(&PlayerCamera::ForceThirdPerson);
		REL::Relocation<func_t> func{ RELOCATION_ID(49863, 50796) };
		return func(this);
	}

	void PlayerCamera::ToggleFreeCameraMode(bool a_freezeTime)
	{
		using func_t = decltype(&ToggleFreeCameraMode);
		REL::Relocation<func_t> func{ RELOCATION_ID(49876, 50809) };
		return func(this, a_freezeTime);
	}

	void PlayerCamera::UpdateThirdPerson(bool a_weaponDrawn)
	{
		using func_t = decltype(&PlayerCamera::UpdateThirdPerson);
		REL::Relocation<func_t> func{ Offset::PlayerCamera::UpdateThirdPerson };
		return func(this, a_weaponDrawn);
	}
}
