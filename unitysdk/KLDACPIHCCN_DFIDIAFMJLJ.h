#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KLDACPIHCCN_BattleActionType.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"
class CLHNNJKABAO;
class KLDACPIHCCN_DFIDIAFMJLJ;
class NCJILFFNINI;
namespace RPG::GameCore { class AttackData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class String; }

#define KLDACPIHCCN_DFIDIAFMJLJ_BCCFPKLOPDG_OFFSET UNITYSDK_OFFSET(0xB4E5ED0)
#define KLDACPIHCCN_DFIDIAFMJLJ_BJEIAKBOFIK_OFFSET UNITYSDK_OFFSET(0xB4E6130)
#define KLDACPIHCCN_DFIDIAFMJLJ_BLFIKAFOBAE_OFFSET UNITYSDK_OFFSET(0xB4E8DC0)
#define KLDACPIHCCN_DFIDIAFMJLJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB4E2870)
#define KLDACPIHCCN_DFIDIAFMJLJ_HMBBJGDLAGK_OFFSET UNITYSDK_OFFSET(0xB4ECBF0)
#define KLDACPIHCCN_DFIDIAFMJLJ_NJCMLGIINEO_OFFSET UNITYSDK_OFFSET(0xB4ECC70)
#define KLDACPIHCCN_DFIDIAFMJLJ_PPAKDDBDDFC_OFFSET UNITYSDK_OFFSET(0xB4ECCF0)

	class KLDACPIHCCN_DFIDIAFMJLJ : public ::System::Object
	{
	public:
		::System::String* CIFMMNHCFPP; // 0x10
		::CLHNNJKABAO* JDMIDPLGJHB; // 0x18
		::System::String* HCJJMPFAMPG; // 0x20
		::System::String* BIHJOMFOPEF; // 0x28
		::System::String* CIDCEJCGOGB; // 0x30
		::Il2CppArray<::RPG::GameCore::FixPoint>* NCJEDLGIKID; // 0x38
		::System::String* KBKOGLCAEKG; // 0x40
		::System::String* OOKIKHKPMDB; // 0x48
		::Il2CppArray<::RPG::GameCore::FixPoint>* LFJADFGHCAG; // 0x50
		::NCJILFFNINI* DKLIOLLHPCD; // 0x58
		::System::String* CMBEAABNPNF; // 0x60
		::System::String* EIPCCBAIILO; // 0x68
		::System::String* MGNNLEMDOEP; // 0x70
		::RPG::GameCore::AttackData* GGEEAPOJKGA; // 0x78
		::System::String* FCCIKPPNBIB; // 0x80
		::System::String* JJIGHCMEIOG; // 0x88
		::RPG::GameCore::FixPoint EOMBCKAJDAK; // 0x90
		::RPG::GameCore::FixPoint GKLLOMFGMBI; // 0x98
		::RPG::GameCore::FixPoint ACBENJHBMFE; // 0xA0
		::RPG::GameCore::FixPoint MDFKCMGPPDM; // 0xA8
		::System::Int32 FGIGJGGFIOP; // 0xB0
		::KLDACPIHCCN_BattleActionType GMPGDEINODK; // 0xB4
		::RPG::GameCore::FixPoint HAIMFCEPABC; // 0xB8
		::RPG::GameCore::FixPoint FGJJDAGBAIK; // 0xC0
		::RPG::GameCore::FixPoint NDABIMGKOMC; // 0xC8
		::RPG::GameCore::FixPoint MMBEINNANKF; // 0xD0
		::RPG::GameCore::SkillType JBCBONFABOM; // 0xD8
		::System::UInt32 BOKJJKFCFME; // 0xDC
		::System::Boolean KNDCAHDDHCO; // 0xE0
		::System::Boolean DFBLNFEGBFP; // 0xE1
		::System::Byte _padding0[0x2];
		::RPG::GameCore::TeamType IBGEPEHFBOF; // 0xE4
		::RPG::GameCore::FixPoint DPCJEJNLPAL; // 0xE8
		::RPG::GameCore::FixPoint GICPKLPMOHL; // 0xF0
		::RPG::GameCore::FixPoint MDCBJNEONIJ; // 0xF8
		::RPG::GameCore::FixPoint KNGKLAIMGMP; // 0x100
		::RPG::GameCore::FixPoint LLEEFHICECO; // 0x108
		::RPG::GameCore::FixPoint AADEILGEDJN; // 0x110
		::System::UInt32 CPDPJFEEHHG; // 0x118
		::System::UInt32 EPPHNPFFPOE; // 0x11C
		::RPG::GameCore::FixPoint PMEGJKPHDMH; // 0x120
		::RPG::GameCore::FixPoint KFDBCMOPLKC; // 0x128
		::RPG::GameCore::FixPoint CBBGLNDJEEE; // 0x130
		::System::Single GAFENHHEBPG; // 0x138
		::RPG::GameCore::AttackType BCGMMBMLAAC; // 0x13C
		::RPG::GameCore::TeamType LHKHAOBIADO; // 0x140
		::System::Int32 FAICKBGJPNF; // 0x144
		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + KLDACPIHCCN_DFIDIAFMJLJ_CTOR_OFFSET))(this, a1);
		}

		::KLDACPIHCCN_DFIDIAFMJLJ* BLFIKAFOBAE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::KLDACPIHCCN_DFIDIAFMJLJ*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KLDACPIHCCN_DFIDIAFMJLJ_BLFIKAFOBAE_OFFSET))(this, a1);
		}

		::KLDACPIHCCN_DFIDIAFMJLJ* BCCFPKLOPDG(::RPG::GameCore::GameEntity* a1)
		{
			return ((::KLDACPIHCCN_DFIDIAFMJLJ*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KLDACPIHCCN_DFIDIAFMJLJ_BCCFPKLOPDG_OFFSET))(this, a1);
		}

		::KLDACPIHCCN_DFIDIAFMJLJ* BJEIAKBOFIK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::KLDACPIHCCN_DFIDIAFMJLJ*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KLDACPIHCCN_DFIDIAFMJLJ_BJEIAKBOFIK_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* HMBBJGDLAGK(::RPG::GameCore::TurnBasedAbilityComponent* a1)
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + KLDACPIHCCN_DFIDIAFMJLJ_HMBBJGDLAGK_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* NJCMLGIINEO(::RPG::GameCore::TurnBasedAbilityComponent* a1)
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + KLDACPIHCCN_DFIDIAFMJLJ_NJCMLGIINEO_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* PPAKDDBDDFC(::Il2CppArray<::RPG::GameCore::AbilityProperty>* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2)
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AbilityProperty>*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + KLDACPIHCCN_DFIDIAFMJLJ_PPAKDDBDDFC_OFFSET))(this, a1, a2);
		}

	};
