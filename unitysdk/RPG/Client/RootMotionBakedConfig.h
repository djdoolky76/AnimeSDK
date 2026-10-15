#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BodySize.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/IMOHEHDKGPK.h"
#include "unitysdk/RPG/Client/MovementStoppedRootMotionBakedData_RootMotionCurve.h"
namespace RPG::Client { class AvatarRootMotionBakedData; }
namespace RPG::Client { class CharacterRootMotionBakedData; }
namespace RPG::Client { class MovementStoppedRootMotionBakedData_OAKCINDCPAJ; }
namespace RPG::Client { class NPCRootMotionBakedData; }
namespace RPG::GameCore { class AdventureCharacterConfig; }

#define RPG_CLIENT_ROOTMOTIONBAKEDCONFIG_AWAKE_OFFSET UNITYSDK_OFFSET(0xE062C70)
#define RPG_CLIENT_ROOTMOTIONBAKEDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xE063040)
#define RPG_CLIENT_ROOTMOTIONBAKEDCONFIG_GHLDPGKBCOC_OFFSET UNITYSDK_OFFSET(0xE062D50)
#define RPG_CLIENT_ROOTMOTIONBAKEDCONFIG_OCIOOOKIBIC_OFFSET UNITYSDK_OFFSET(0xE062E40)

namespace RPG::Client
{
	inline static constexpr unsigned int RootMotionBakedConfig_TypeDefinitionIndex = 60060;

	class RootMotionBakedConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::Il2CppArray<::RPG::Client::AvatarRootMotionBakedData*>* AvatarDataArray; // 0x18
		::Il2CppArray<::RPG::Client::NPCRootMotionBakedData*>* NPCDataArray; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROOTMOTIONBAKEDCONFIG_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROOTMOTIONBAKEDCONFIG_AWAKE_OFFSET))(this);
		}

		::RPG::Client::CharacterRootMotionBakedData* GHLDPGKBCOC(::RPG::GameCore::BodySize a1, ::RPG::GameCore::NPCBodySize a2)
		{
			return ((::RPG::Client::CharacterRootMotionBakedData*(*)(::PVOID, ::RPG::GameCore::BodySize, ::RPG::GameCore::NPCBodySize))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROOTMOTIONBAKEDCONFIG_GHLDPGKBCOC_OFFSET))(this, a1, a2);
		}

		::System::Boolean OCIOOOKIBIC(::RPG::GameCore::AdventureCharacterConfig* a1, ::IMOHEHDKGPK a2, ::System::Single a3, ::RPG::GameCore::CharacterMotionFlag a4, ::System::Single a5, ::RPG::Client::MovementStoppedRootMotionBakedData_OAKCINDCPAJ* a6, ::RPG::Client::MovementStoppedRootMotionBakedData_RootMotionCurve a7)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureCharacterConfig*, ::IMOHEHDKGPK, ::System::Single, ::RPG::GameCore::CharacterMotionFlag, ::System::Single, ::RPG::Client::MovementStoppedRootMotionBakedData_OAKCINDCPAJ*, ::RPG::Client::MovementStoppedRootMotionBakedData_RootMotionCurve))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROOTMOTIONBAKEDCONFIG_OCIOOOKIBIC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

	};
}
