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

#define KLDACPIHCCN_DFIDIAFMJLJ_BCCFPKLOPDG_OFFSET UNITYSDK_OFFSET(0x1736C4C0)
#define KLDACPIHCCN_DFIDIAFMJLJ_BJEIAKBOFIK_OFFSET UNITYSDK_OFFSET(0x1736C720)
#define KLDACPIHCCN_DFIDIAFMJLJ_BLFIKAFOBAE_OFFSET UNITYSDK_OFFSET(0x1736FC30)
#define KLDACPIHCCN_DFIDIAFMJLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x17368C80)
#define KLDACPIHCCN_DFIDIAFMJLJ_HMBBJGDLAGK_OFFSET UNITYSDK_OFFSET(0x17373A70)
#define KLDACPIHCCN_DFIDIAFMJLJ_NJCMLGIINEO_OFFSET UNITYSDK_OFFSET(0x17373AF0)
#define KLDACPIHCCN_DFIDIAFMJLJ_PPAKDDBDDFC_OFFSET UNITYSDK_OFFSET(0x17373B70)

inline static constexpr unsigned int KLDACPIHCCN_DFIDIAFMJLJ_TypeDefinitionIndex = 57421;

	class KLDACPIHCCN_DFIDIAFMJLJ : public ::System::Object
	{
	public:
		::CLHNNJKABAO* JDMIDPLGJHB; // 0x10
		::System::String* OOKIKHKPMDB; // 0x18
		::RPG::GameCore::AttackData* GGEEAPOJKGA; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* LFJADFGHCAG; // 0x28
		::System::String* JJIGHCMEIOG; // 0x30
		::System::String* BIHJOMFOPEF; // 0x38
		::System::String* MGNNLEMDOEP; // 0x40
		::System::String* EIPCCBAIILO; // 0x48
		::System::String* CIFMMNHCFPP; // 0x50
		::System::String* FCCIKPPNBIB; // 0x58
		::NCJILFFNINI* DKLIOLLHPCD; // 0x60
		::System::String* KBKOGLCAEKG; // 0x68
		::System::String* CIDCEJCGOGB; // 0x70
		::System::String* CMBEAABNPNF; // 0x78
		::Il2CppArray<::RPG::GameCore::FixPoint>* NCJEDLGIKID; // 0x80
		::System::String* HCJJMPFAMPG; // 0x88
		::RPG::GameCore::FixPoint PMEGJKPHDMH; // 0x90
		::RPG::GameCore::FixPoint EOMBCKAJDAK; // 0x98
		::RPG::GameCore::FixPoint GKLLOMFGMBI; // 0xA0
		::RPG::GameCore::TeamType IBGEPEHFBOF; // 0xA8
		::System::Int32 FAICKBGJPNF; // 0xAC
		::RPG::GameCore::FixPoint MDCBJNEONIJ; // 0xB0
		::RPG::GameCore::FixPoint KFDBCMOPLKC; // 0xB8
		::RPG::GameCore::FixPoint GICPKLPMOHL; // 0xC0
		::RPG::GameCore::SkillType JBCBONFABOM; // 0xC8
		::System::Int32 FGIGJGGFIOP; // 0xCC
		::System::UInt32 EPPHNPFFPOE; // 0xD0
		::System::Single GAFENHHEBPG; // 0xD4
		::RPG::GameCore::FixPoint AADEILGEDJN; // 0xD8
		::RPG::GameCore::FixPoint FGJJDAGBAIK; // 0xE0
		::KLDACPIHCCN_BattleActionType GMPGDEINODK; // 0xE8
		::System::Boolean KNDCAHDDHCO; // 0xEC
		::System::Boolean DFBLNFEGBFP; // 0xED
		::System::Byte _padding0[0x2];
		::RPG::GameCore::FixPoint MDFKCMGPPDM; // 0xF0
		::System::UInt32 BOKJJKFCFME; // 0xF8
		::RPG::GameCore::AttackType BCGMMBMLAAC; // 0xFC
		::RPG::GameCore::FixPoint MMBEINNANKF; // 0x100
		::RPG::GameCore::FixPoint KNGKLAIMGMP; // 0x108
		::RPG::GameCore::FixPoint DPCJEJNLPAL; // 0x110
		::RPG::GameCore::FixPoint NDABIMGKOMC; // 0x118
		::System::UInt32 CPDPJFEEHHG; // 0x120
		::RPG::GameCore::TeamType LHKHAOBIADO; // 0x124
		::RPG::GameCore::FixPoint ACBENJHBMFE; // 0x128
		::RPG::GameCore::FixPoint LLEEFHICECO; // 0x130
		::RPG::GameCore::FixPoint CBBGLNDJEEE; // 0x138
		::RPG::GameCore::FixPoint HAIMFCEPABC; // 0x140
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
