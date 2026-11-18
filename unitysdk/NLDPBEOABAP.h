#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/LDDHJLCEFOJ.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class EIMHGJELHGN;
class NLNIIPDCABP;
namespace MoleMole { class ComprehensiveAttack_ForceExitSettingData; }
namespace MoleMole { class ComprehensiveAttack_SuccessExitSettingData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NLDPBEOABAP_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x16B86C20)
#define NLDPBEOABAP_EMCPPBMEKKK_OFFSET UNITYSDK_OFFSET(0x16B86950)
#define NLDPBEOABAP_EONIEINOJAK_OFFSET UNITYSDK_OFFSET(0x16B867B0)
#define NLDPBEOABAP_LJNFANAEHHA_OFFSET UNITYSDK_OFFSET(0x16B86B90)
#define NLDPBEOABAP_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x16B861A0)
#define NLDPBEOABAP__CTOR_OFFSET UNITYSDK_OFFSET(0x16B86AD0)

inline static constexpr unsigned int NLDPBEOABAP_TypeDefinitionIndex = 54918;

class NLDPBEOABAP : public ::LDDHJLCEFOJ
{
public:
	::NLNIIPDCABP* LJIGGKABNDM; // 0x28
	::Il2CppArray<::System::Int32>* FOICELMMOAP; // 0x30
	::MoleMole::ComprehensiveAttack_ForceExitSettingData* LAIBMEJNNBC; // 0x38
	::MoleMole::ComprehensiveAttack_SuccessExitSettingData* NKPMOCFJLHN; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* MDKDBDACDAH; // 0x48
	::System::Int32 DLELAEJGBPP; // 0x50
	::System::Boolean IAOBAIOGDEB; // 0x54
	::System::Boolean JGNGCOIECNM; // 0x55
	::System::Boolean DMOMGPEBEFO; // 0x56
	::System::Byte _padding0[0x1];
	::System::Int32 LGMFHLBIDLI; // 0x58
	::System::Single HBHJKJHINMD; // 0x5C
	::System::Single EJIJOKBKOFC; // 0x60
	::System::Single BDOLCKHJFHI; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLDPBEOABAP__CTOR_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLDPBEOABAP_PLPONJAKNEB_OFFSET))(this);
	}

	::System::Void EMCPPBMEKKK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLDPBEOABAP_EMCPPBMEKKK_OFFSET))(this);
	}

	::BehaviorDesigner::Runtime::Tasks::TaskStatus EONIEINOJAK(::UnityEngine::AnimatorStateInfo ANOHIDIPEMN, ::System::Int32 KFALFFIPOGN, ::System::Int32 KMOHKCADPNA)
	{
		return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NLDPBEOABAP_EONIEINOJAK_OFFSET))(this, ANOHIDIPEMN, KFALFFIPOGN, KMOHKCADPNA);
	}

	::System::Void LJNFANAEHHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLDPBEOABAP_LJNFANAEHHA_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::NLNIIPDCABP* FNFNDIBMPDE, ::EIMHGJELHGN* GFPINKJPPBC)
	{
		return ((::System::Void(*)(::PVOID, ::NLNIIPDCABP*, ::EIMHGJELHGN*))((::PBYTE)hIl2Cpp + NLDPBEOABAP_BBOMJDBNHIC_OFFSET))(this, FNFNDIBMPDE, GFPINKJPPBC);
	}
};
