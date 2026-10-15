#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace BansheeGz::BGSpline::Curve { class BGCurve; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDTARGETINGCURVE_CTOR_OFFSET UNITYSDK_OFFSET(0xCFC3810)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDTARGETINGCURVE_EFDEJIIMPHJ_OFFSET UNITYSDK_OFFSET(0xCFC2FC0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDTARGETINGCURVE_SETPOINTS_OFFSET UNITYSDK_OFFSET(0xCFBD370)

namespace RPG::Client::FateRin::View::Battle
{
	class FateRinBattleHudTargetingCurve : public ::UnityEngine::MonoBehaviour
	{
	public:
		::BansheeGz::BGSpline::Curve::BGCurve* _Curve; // 0x18
		::System::Single _DesignDistance; // 0x20
		::System::Byte _padding0[0x4];
		::Il2CppArray<::UnityEngine::Vector3>* _DesignControlFirst; // 0x28
		::Il2CppArray<::UnityEngine::Vector3>* _DesignControlSecond; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDTARGETINGCURVE_CTOR_OFFSET))(this);
		}

		::System::Void SetPoints(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDTARGETINGCURVE_SETPOINTS_OFFSET))(this, a1, a2);
		}

		::System::Void EFDEJIIMPHJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDTARGETINGCURVE_EFDEJIIMPHJ_OFFSET))(this);
		}

	};
}
