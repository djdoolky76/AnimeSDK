#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class BGCurveExtention;
namespace RPG::Client::ParkourGame { class MonoParkourCurveMoveItem; }

#define RPG_CLIENT_PARKOURGAME_MONOPARKOURCURVEMOVE_CTOR_OFFSET UNITYSDK_OFFSET(0xDA74900)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURCURVEMOVE_HAOBJNHJFGM_OFFSET UNITYSDK_OFFSET(0xDA744D0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURCURVEMOVE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xDA74430)

namespace RPG::Client::ParkourGame
{
	class MonoParkourCurveMove : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::RPG::Client::ParkourGame::MonoParkourCurveMoveItem*>* Items; // 0x18
		::BGCurveExtention* Curve; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURCURVEMOVE_CTOR_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURCURVEMOVE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void HAOBJNHJFGM(::RPG::Client::ParkourGame::MonoParkourCurveMoveItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourCurveMoveItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURCURVEMOVE_HAOBJNHJFGM_OFFSET))(this, a1);
		}

	};
}
