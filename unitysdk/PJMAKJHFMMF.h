#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDENDNDOFLF.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/UnityEngine/Vector3.h"
class NAGAOPOFKDI;
namespace RPG::GameCore { class AdventureHitConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define PJMAKJHFMMF_CTOR_OFFSET UNITYSDK_OFFSET(0x1479D970)
#define PJMAKJHFMMF_GET_FLAG_OFFSET UNITYSDK_OFFSET(0x1479E480)
#define PJMAKJHFMMF_IEHGJKIODLM_OFFSET UNITYSDK_OFFSET(0x1479D9B0)
#define PJMAKJHFMMF_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1479DE60)

inline static constexpr unsigned int PJMAKJHFMMF_TypeDefinitionIndex = 58267;

	class PJMAKJHFMMF : public ::BDENDNDOFLF
	{
	public:
		::RPG::GameCore::GameEntity* KKFCJOJLGCO; // 0x68
		::RPG::GameCore::AdventureHitConfig* PKDMMBCHHIG; // 0x70
		::NAGAOPOFKDI* GKPNBPIGELD; // 0x78
		::UnityEngine::Transform* AFIBNIPMICJ; // 0x80
		::System::Single BGKNMHEKMIA; // 0x88
		::UnityEngine::Vector3 BJNKIKNBFOJ; // 0x8C
		::System::Single BFGGMAHHOLF; // 0x98
		::System::Single JFJOLFHJKNF; // 0x9C
		::System::Single DEEBMCJELGL; // 0xA0
		::System::Single JALGFHMPGMO; // 0xA4
		::System::Single AEBJKGGCGDG; // 0xA8
		::System::Single HIHIBOIKOOM; // 0xAC
		::UnityEngine::Vector3 EKKPMIOJMGM; // 0xB0
		::System::Single AOEKHGBJIFP; // 0xBC
		::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0xC0
		::System::Single NMMAFJCIBHG; // 0xC4
		::System::Single FAPCGFINDFF; // 0xC8
		::System::Boolean EHJOLABCMOD; // 0xCC
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PJMAKJHFMMF_CTOR_OFFSET))(this, a1);
		}

		::System::Void IEHGJKIODLM(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PJMAKJHFMMF_IEHGJKIODLM_OFFSET))(this, a1, a2);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PJMAKJHFMMF_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::RPG::GameCore::AdventureModifierBehaviorFlag get_Flag()
		{
			return ((::RPG::GameCore::AdventureModifierBehaviorFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMAKJHFMMF_GET_FLAG_OFFSET))(this);
		}

	};
