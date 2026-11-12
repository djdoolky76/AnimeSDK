#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MFLOFDFNJLN_RtBattleActionType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"
class CMJBLLIHDKP;
class ENLBMCKHJOG;
class KADNINAMKGA;
class MFLOFDFNJLN_OOLKEAAFFAK;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtAttackData; }
namespace RPG::GameCore { class RtBattleMode; }
namespace System { class String; }

#define MFLOFDFNJLN_OOLKEAAFFAK_BCCFPKLOPDG_OFFSET UNITYSDK_OFFSET(0xC1BBE90)
#define MFLOFDFNJLN_OOLKEAAFFAK_BJEIAKBOFIK_OFFSET UNITYSDK_OFFSET(0xC1BC0B0)
#define MFLOFDFNJLN_OOLKEAAFFAK_BLFIKAFOBAE_OFFSET UNITYSDK_OFFSET(0xC1BCF10)
#define MFLOFDFNJLN_OOLKEAAFFAK_CTOR_OFFSET UNITYSDK_OFFSET(0xC1B9590)
#define MFLOFDFNJLN_OOLKEAAFFAK_HMBBJGDLAGK_OFFSET UNITYSDK_OFFSET(0xC1BDD80)
#define MFLOFDFNJLN_OOLKEAAFFAK_NJCMLGIINEO_OFFSET UNITYSDK_OFFSET(0xC1BDE20)
#define MFLOFDFNJLN_OOLKEAAFFAK_PPAKDDBDDFC_OFFSET UNITYSDK_OFFSET(0xC1BDEC0)

inline static constexpr unsigned int MFLOFDFNJLN_OOLKEAAFFAK_TypeDefinitionIndex = 55421;

	class MFLOFDFNJLN_OOLKEAAFFAK : public ::System::Object
	{
	public:
		::System::String* HCJJMPFAMPG; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* NCJEDLGIKID; // 0x18
		::System::String* OOKIKHKPMDB; // 0x20
		::System::String* FCCIKPPNBIB; // 0x28
		::System::String* MGNNLEMDOEP; // 0x30
		::Il2CppArray<::RPG::GameCore::FixPoint>* LFJADFGHCAG; // 0x38
		::System::String* EIPCCBAIILO; // 0x40
		::ENLBMCKHJOG* JDMIDPLGJHB; // 0x48
		::System::String* CIDCEJCGOGB; // 0x50
		::KADNINAMKGA* DKLIOLLHPCD; // 0x58
		::System::String* CIFMMNHCFPP; // 0x60
		::System::String* KBKOGLCAEKG; // 0x68
		::System::String* JJIGHCMEIOG; // 0x70
		::System::String* CMBEAABNPNF; // 0x78
		::RPG::GameCore::RtAttackData* GGEEAPOJKGA; // 0x80
		::System::String* BIHJOMFOPEF; // 0x88
		::RPG::GameCore::FixPoint KNGKLAIMGMP; // 0x90
		::RPG::GameCore::FixPoint FGJJDAGBAIK; // 0x98
		::RPG::GameCore::TeamType LHKHAOBIADO; // 0xA0
		::System::UInt32 BOKJJKFCFME; // 0xA4
		::RPG::GameCore::FixPoint OAAPECJINEB; // 0xA8
		::RPG::GameCore::FixPoint MDFKCMGPPDM; // 0xB0
		::RPG::GameCore::FixPoint AADEILGEDJN; // 0xB8
		::RPG::GameCore::SkillType JBCBONFABOM; // 0xC0
		::System::UInt32 EPPHNPFFPOE; // 0xC4
		::RPG::GameCore::FixPoint GKLLOMFGMBI; // 0xC8
		::RPG::GameCore::FixPoint CBBGLNDJEEE; // 0xD0
		::RPG::GameCore::FixPoint GAFENHHEBPG; // 0xD8
		::RPG::GameCore::FixPoint FAICKBGJPNF; // 0xE0
		::RPG::GameCore::FixPoint KFDBCMOPLKC; // 0xE8
		::System::UInt32 CPDPJFEEHHG; // 0xF0
		::System::Boolean DFBLNFEGBFP; // 0xF4
		::System::Byte _padding0[0x3];
		::RPG::GameCore::FixPoint BAPDOJKCNNJ; // 0xF8
		::RPG::GameCore::TeamType IBGEPEHFBOF; // 0x100
		::RPG::GameCore::AttackType BCGMMBMLAAC; // 0x104
		::MFLOFDFNJLN_RtBattleActionType GMPGDEINODK; // 0x108
		::System::Byte _padding1[0x4];
		::RPG::GameCore::FixPoint PMEGJKPHDMH; // 0x110
		::RPG::GameCore::FixPoint MMBEINNANKF; // 0x118
		::System::Void _ctor(::RPG::GameCore::RtBattleMode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtBattleMode*))((::PBYTE)hIl2Cpp + MFLOFDFNJLN_OOLKEAAFFAK_CTOR_OFFSET))(this, a1);
		}

		::MFLOFDFNJLN_OOLKEAAFFAK* BLFIKAFOBAE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::MFLOFDFNJLN_OOLKEAAFFAK*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MFLOFDFNJLN_OOLKEAAFFAK_BLFIKAFOBAE_OFFSET))(this, a1);
		}

		::MFLOFDFNJLN_OOLKEAAFFAK* BCCFPKLOPDG(::RPG::GameCore::GameEntity* a1)
		{
			return ((::MFLOFDFNJLN_OOLKEAAFFAK*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MFLOFDFNJLN_OOLKEAAFFAK_BCCFPKLOPDG_OFFSET))(this, a1);
		}

		::MFLOFDFNJLN_OOLKEAAFFAK* BJEIAKBOFIK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::MFLOFDFNJLN_OOLKEAAFFAK*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MFLOFDFNJLN_OOLKEAAFFAK_BJEIAKBOFIK_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* HMBBJGDLAGK(::CMJBLLIHDKP* a1)
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::CMJBLLIHDKP*))((::PBYTE)hIl2Cpp + MFLOFDFNJLN_OOLKEAAFFAK_HMBBJGDLAGK_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* NJCMLGIINEO(::CMJBLLIHDKP* a1)
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::CMJBLLIHDKP*))((::PBYTE)hIl2Cpp + MFLOFDFNJLN_OOLKEAAFFAK_NJCMLGIINEO_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* PPAKDDBDDFC(::Il2CppArray<::RPG::GameCore::RtAbilityProperty>* a1, ::CMJBLLIHDKP* a2)
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::RtAbilityProperty>*, ::CMJBLLIHDKP*))((::PBYTE)hIl2Cpp + MFLOFDFNJLN_OOLKEAAFFAK_PPAKDDBDDFC_OFFSET))(this, a1, a2);
		}

	};
