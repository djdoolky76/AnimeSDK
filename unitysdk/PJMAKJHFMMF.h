#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDENDNDOFLF.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/UnityEngine/Vector3.h"
class NAGAOPOFKDI;
namespace RPG::GameCore { class AdventureHitConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define PJMAKJHFMMF_CTOR_OFFSET UNITYSDK_OFFSET(0xC292760)
#define PJMAKJHFMMF_GET_FLAG_OFFSET UNITYSDK_OFFSET(0xC293250)
#define PJMAKJHFMMF_IEHGJKIODLM_OFFSET UNITYSDK_OFFSET(0xC2927A0)
#define PJMAKJHFMMF_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xC292C30)

inline static constexpr unsigned int PJMAKJHFMMF_TypeDefinitionIndex = 57040;

	class PJMAKJHFMMF : public ::BDENDNDOFLF
	{
	public:
		::NAGAOPOFKDI* GKPNBPIGELD; // 0x68
		::RPG::GameCore::AdventureHitConfig* PKDMMBCHHIG; // 0x70
		::RPG::GameCore::GameEntity* KKFCJOJLGCO; // 0x78
		::UnityEngine::Transform* AFIBNIPMICJ; // 0x80
		::System::Single AOEKHGBJIFP; // 0x88
		::System::Single BFGGMAHHOLF; // 0x8C
		::System::Boolean EHJOLABCMOD; // 0x90
		::System::Byte _padding0[0x3];
		::System::Single AEBJKGGCGDG; // 0x94
		::System::Single BGKNMHEKMIA; // 0x98
		::UnityEngine::Vector3 BJNKIKNBFOJ; // 0x9C
		::System::Single HIHIBOIKOOM; // 0xA8
		::System::Single DEEBMCJELGL; // 0xAC
		::System::Single JFJOLFHJKNF; // 0xB0
		::UnityEngine::Vector3 EKKPMIOJMGM; // 0xB4
		::System::Single JALGFHMPGMO; // 0xC0
		::System::Single FAPCGFINDFF; // 0xC4
		::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0xC8
		::System::Single NMMAFJCIBHG; // 0xCC
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
