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

#define MFLOFDFNJLN_OOLKEAAFFAK_BCCFPKLOPDG_OFFSET UNITYSDK_OFFSET(0xB909B40)
#define MFLOFDFNJLN_OOLKEAAFFAK_BJEIAKBOFIK_OFFSET UNITYSDK_OFFSET(0xB909D60)
#define MFLOFDFNJLN_OOLKEAAFFAK_BLFIKAFOBAE_OFFSET UNITYSDK_OFFSET(0xB90ABC0)
#define MFLOFDFNJLN_OOLKEAAFFAK_CTOR_OFFSET UNITYSDK_OFFSET(0xB907210)
#define MFLOFDFNJLN_OOLKEAAFFAK_HMBBJGDLAGK_OFFSET UNITYSDK_OFFSET(0xB90BA30)
#define MFLOFDFNJLN_OOLKEAAFFAK_NJCMLGIINEO_OFFSET UNITYSDK_OFFSET(0xB90BAD0)
#define MFLOFDFNJLN_OOLKEAAFFAK_PPAKDDBDDFC_OFFSET UNITYSDK_OFFSET(0xB90BB70)

inline static constexpr unsigned int MFLOFDFNJLN_OOLKEAAFFAK_TypeDefinitionIndex = 54257;

	class MFLOFDFNJLN_OOLKEAAFFAK : public ::System::Object
	{
	public:
		::System::String* MGNNLEMDOEP; // 0x10
		::ENLBMCKHJOG* JDMIDPLGJHB; // 0x18
		::System::String* BIHJOMFOPEF; // 0x20
		::System::String* HCJJMPFAMPG; // 0x28
		::Il2CppArray<::RPG::GameCore::FixPoint>* NCJEDLGIKID; // 0x30
		::Il2CppArray<::RPG::GameCore::FixPoint>* LFJADFGHCAG; // 0x38
		::System::String* CMBEAABNPNF; // 0x40
		::System::String* CIDCEJCGOGB; // 0x48
		::KADNINAMKGA* DKLIOLLHPCD; // 0x50
		::System::String* KBKOGLCAEKG; // 0x58
		::System::String* FCCIKPPNBIB; // 0x60
		::RPG::GameCore::RtAttackData* GGEEAPOJKGA; // 0x68
		::System::String* OOKIKHKPMDB; // 0x70
		::System::String* CIFMMNHCFPP; // 0x78
		::System::String* JJIGHCMEIOG; // 0x80
		::System::String* EIPCCBAIILO; // 0x88
		::System::UInt32 EPPHNPFFPOE; // 0x90
		::System::Boolean DFBLNFEGBFP; // 0x94
		::System::Byte _padding0[0x3];
		::System::UInt32 CPDPJFEEHHG; // 0x98
		::RPG::GameCore::SkillType JBCBONFABOM; // 0x9C
		::RPG::GameCore::FixPoint FGJJDAGBAIK; // 0xA0
		::RPG::GameCore::FixPoint GAFENHHEBPG; // 0xA8
		::RPG::GameCore::FixPoint PMEGJKPHDMH; // 0xB0
		::RPG::GameCore::FixPoint KFDBCMOPLKC; // 0xB8
		::RPG::GameCore::FixPoint AADEILGEDJN; // 0xC0
		::MFLOFDFNJLN_RtBattleActionType GMPGDEINODK; // 0xC8
		::RPG::GameCore::TeamType IBGEPEHFBOF; // 0xCC
		::RPG::GameCore::AttackType BCGMMBMLAAC; // 0xD0
		::System::Byte _padding1[0x4];
		::RPG::GameCore::FixPoint MDFKCMGPPDM; // 0xD8
		::RPG::GameCore::FixPoint GKLLOMFGMBI; // 0xE0
		::RPG::GameCore::FixPoint MMBEINNANKF; // 0xE8
		::System::UInt32 BOKJJKFCFME; // 0xF0
		::RPG::GameCore::TeamType LHKHAOBIADO; // 0xF4
		::RPG::GameCore::FixPoint KNGKLAIMGMP; // 0xF8
		::RPG::GameCore::FixPoint CBBGLNDJEEE; // 0x100
		::RPG::GameCore::FixPoint FAICKBGJPNF; // 0x108
		::RPG::GameCore::FixPoint BAPDOJKCNNJ; // 0x110
		::RPG::GameCore::FixPoint OAAPECJINEB; // 0x118
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
