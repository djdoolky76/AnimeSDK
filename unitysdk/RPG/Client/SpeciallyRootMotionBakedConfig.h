#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/IMOHEHDKGPK.h"
#include "unitysdk/RPG/Client/MovementStoppedRootMotionBakedData_RootMotionCurve.h"
namespace RPG::Client { class CharacterRootMotionBakedData; }
namespace RPG::Client { class MovementStoppedRootMotionBakedData_OAKCINDCPAJ; }

#define RPG_CLIENT_SPECIALLYROOTMOTIONBAKEDCONFIG_AWAKE_OFFSET UNITYSDK_OFFSET(0xE1018A0)
#define RPG_CLIENT_SPECIALLYROOTMOTIONBAKEDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xE101B00)
#define RPG_CLIENT_SPECIALLYROOTMOTIONBAKEDCONFIG_OCIOOOKIBIC_OFFSET UNITYSDK_OFFSET(0xE101960)

namespace RPG::Client
{
	class SpeciallyRootMotionBakedConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::RPG::Client::CharacterRootMotionBakedData* CharacterData; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPECIALLYROOTMOTIONBAKEDCONFIG_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPECIALLYROOTMOTIONBAKEDCONFIG_AWAKE_OFFSET))(this);
		}

		::System::Boolean OCIOOOKIBIC(::IMOHEHDKGPK a1, ::System::Single a2, ::RPG::GameCore::CharacterMotionFlag a3, ::System::Single a4, ::RPG::Client::MovementStoppedRootMotionBakedData_OAKCINDCPAJ* a5, ::RPG::Client::MovementStoppedRootMotionBakedData_RootMotionCurve a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::IMOHEHDKGPK, ::System::Single, ::RPG::GameCore::CharacterMotionFlag, ::System::Single, ::RPG::Client::MovementStoppedRootMotionBakedData_OAKCINDCPAJ*, ::RPG::Client::MovementStoppedRootMotionBakedData_RootMotionCurve))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPECIALLYROOTMOTIONBAKEDCONFIG_OCIOOOKIBIC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

	};
}
