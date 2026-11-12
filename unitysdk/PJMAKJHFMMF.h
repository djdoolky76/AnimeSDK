#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDENDNDOFLF.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/UnityEngine/Vector3.h"
class NAGAOPOFKDI;
namespace RPG::GameCore { class AdventureHitConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define PJMAKJHFMMF_CTOR_OFFSET UNITYSDK_OFFSET(0xCBC4AB0)
#define PJMAKJHFMMF_GET_FLAG_OFFSET UNITYSDK_OFFSET(0xCBC55B0)
#define PJMAKJHFMMF_IEHGJKIODLM_OFFSET UNITYSDK_OFFSET(0xCBC4AF0)
#define PJMAKJHFMMF_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xCBC4F90)

inline static constexpr unsigned int PJMAKJHFMMF_TypeDefinitionIndex = 58267;

	class PJMAKJHFMMF : public ::BDENDNDOFLF
	{
	public:
		::RPG::GameCore::GameEntity* KKFCJOJLGCO; // 0x68
		::NAGAOPOFKDI* GKPNBPIGELD; // 0x70
		::RPG::GameCore::AdventureHitConfig* PKDMMBCHHIG; // 0x78
		::UnityEngine::Transform* AFIBNIPMICJ; // 0x80
		::System::Single DEEBMCJELGL; // 0x88
		::System::Single BGKNMHEKMIA; // 0x8C
		::System::Single AEBJKGGCGDG; // 0x90
		::UnityEngine::Vector3 EKKPMIOJMGM; // 0x94
		::System::Single BFGGMAHHOLF; // 0xA0
		::System::Single NMMAFJCIBHG; // 0xA4
		::System::Single FAPCGFINDFF; // 0xA8
		::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0xAC
		::System::Single HIHIBOIKOOM; // 0xB0
		::System::Single AOEKHGBJIFP; // 0xB4
		::System::Single JALGFHMPGMO; // 0xB8
		::System::Single JFJOLFHJKNF; // 0xBC
		::System::Boolean EHJOLABCMOD; // 0xC0
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 BJNKIKNBFOJ; // 0xC4
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
