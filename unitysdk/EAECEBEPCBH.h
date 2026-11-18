#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BGLPBMBBODA.h"
#include "unitysdk/DHLCPINOFBO.h"
#include "unitysdk/IEJHOJBLOHI.h"
#include "unitysdk/EMBALMJDGNC_2.h"

class EAIOHODECAO;
class KFIEJHHKEOL;
class OFLPOCHHHLC;
class PNHPELCKOHH;
namespace MoleMole::Arcade::CompanionProject { class CpSkillEffectData; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EAECEBEPCBH_CCLABMDMNBL_OFFSET UNITYSDK_OFFSET(0x1EEAADE0)
#define EAECEBEPCBH_GHNHNGFIPLC_OFFSET UNITYSDK_OFFSET(0x1EEAAE70)
#define EAECEBEPCBH_INEGOEGIOKM_OFFSET UNITYSDK_OFFSET(0x1EEAACB0)
#define EAECEBEPCBH_KHGPLGMDOFC_OFFSET UNITYSDK_OFFSET(0x1EEAA510)
#define EAECEBEPCBH_MMLDAHIDCEP_OFFSET UNITYSDK_OFFSET(0x1EEAA5F0)
#define EAECEBEPCBH_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x1EEAAD50)
#define EAECEBEPCBH_OJFBBOMGIEN_OFFSET UNITYSDK_OFFSET(0x1EEAA700)
#define EAECEBEPCBH__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEAAB60)

inline static constexpr unsigned int EAECEBEPCBH_TypeDefinitionIndex = 94677;

class EAECEBEPCBH : public ::IEJHOJBLOHI
{
public:
	::System::Collections::Generic::Dictionary_2<::DHLCPINOFBO, ::System::Func_4<::EAIOHODECAO*, ::MoleMole::Arcade::CompanionProject::CpSkillEffectData*, ::BGLPBMBBODA, ::KFIEJHHKEOL*>*>* IMIMJILBINO; // 0x28
	::System::Collections::Generic::List_1<::KFIEJHHKEOL*>* LKMDPCBOOJM; // 0x30
	::PNHPELCKOHH* GEEHGDABNJF; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAECEBEPCBH__CTOR_OFFSET))(this);
	}

	::System::Void KHGPLGMDOFC(::OFLPOCHHHLC* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::OFLPOCHHHLC*))((::PBYTE)hIl2Cpp + EAECEBEPCBH_KHGPLGMDOFC_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void MMLDAHIDCEP(::OFLPOCHHHLC* HMPEEAAAGHE)
	{
		return ((::System::Void(*)(::PVOID, ::OFLPOCHHHLC*))((::PBYTE)hIl2Cpp + EAECEBEPCBH_MMLDAHIDCEP_OFFSET))(this, HMPEEAAAGHE);
	}

	::System::Void OJFBBOMGIEN(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EAECEBEPCBH_OJFBBOMGIEN_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void INEGOEGIOKM(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EAECEBEPCBH_INEGOEGIOKM_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void MNEFKNFOABP(::OFLPOCHHHLC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::OFLPOCHHHLC*))((::PBYTE)hIl2Cpp + EAECEBEPCBH_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void CCLABMDMNBL(::OFLPOCHHHLC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::OFLPOCHHHLC*))((::PBYTE)hIl2Cpp + EAECEBEPCBH_CCLABMDMNBL_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GHNHNGFIPLC(::EMBALMJDGNC_2<::MoleMole::Arcade::CompanionProject::CpSkillEffectData*, ::BGLPBMBBODA> HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::EMBALMJDGNC_2<::MoleMole::Arcade::CompanionProject::CpSkillEffectData*, ::BGLPBMBBODA>))((::PBYTE)hIl2Cpp + EAECEBEPCBH_GHNHNGFIPLC_OFFSET))(this, HMMMOCJAEOA);
	}
};
