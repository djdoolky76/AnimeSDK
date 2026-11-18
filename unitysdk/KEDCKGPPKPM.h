#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IEJHOJBLOHI.h"

class AGLNNPIHIEG;
class KBDGKAJPALP;
class OFLPOCHHHLC;
class PMLCKJBHLLB;
namespace System { template <typename T> class Action_1; }

#define KEDCKGPPKPM_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x1D6A1990)
#define KEDCKGPPKPM_KHGPLGMDOFC_OFFSET UNITYSDK_OFFSET(0x1D6A1660)
#define KEDCKGPPKPM_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x1D6A1C00)
#define KEDCKGPPKPM_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x1D6A1870)
#define KEDCKGPPKPM_PIBMPOIAFEO_OFFSET UNITYSDK_OFFSET(0x1D6A1A30)
#define KEDCKGPPKPM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A1910)

inline static constexpr unsigned int KEDCKGPPKPM_TypeDefinitionIndex = 93841;

class KEDCKGPPKPM : public ::IEJHOJBLOHI
{
public:
	::PMLCKJBHLLB* DAAAEJDBNFI; // 0x28
	::System::Action_1<::AGLNNPIHIEG*>* HCEFLICAFJI; // 0x30
	::KBDGKAJPALP* NAEFJGAOJCB; // 0x38
	::System::Single KJHHMLJPDJO; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEDCKGPPKPM__CTOR_OFFSET))(this);
	}

	::System::Void KHGPLGMDOFC(::OFLPOCHHHLC* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::OFLPOCHHHLC*))((::PBYTE)hIl2Cpp + KEDCKGPPKPM_KHGPLGMDOFC_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KEDCKGPPKPM_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void CMFOMGGDPPA(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KEDCKGPPKPM_CMFOMGGDPPA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void PIBMPOIAFEO(::AGLNNPIHIEG* BENKBKODFEK)
	{
		return ((::System::Void(*)(::PVOID, ::AGLNNPIHIEG*))((::PBYTE)hIl2Cpp + KEDCKGPPKPM_PIBMPOIAFEO_OFFSET))(this, BENKBKODFEK);
	}

	::System::Void MNEFKNFOABP(::OFLPOCHHHLC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::OFLPOCHHHLC*))((::PBYTE)hIl2Cpp + KEDCKGPPKPM_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}
};
