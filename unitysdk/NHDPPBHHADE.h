#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IEJHOJBLOHI.h"

class OFLPOCHHHLC;
class PMLCKJBHLLB;

#define NHDPPBHHADE_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x1D6B2DE0)
#define NHDPPBHHADE_KHGPLGMDOFC_OFFSET UNITYSDK_OFFSET(0x1D6B2B50)
#define NHDPPBHHADE_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x1D6B2D50)
#define NHDPPBHHADE_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x1D6B2C50)
#define NHDPPBHHADE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B2CD0)

inline static constexpr unsigned int NHDPPBHHADE_TypeDefinitionIndex = 94154;

class NHDPPBHHADE : public ::IEJHOJBLOHI
{
public:
	::PMLCKJBHLLB* DAAAEJDBNFI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDPPBHHADE__CTOR_OFFSET))(this);
	}

	::System::Void KHGPLGMDOFC(::OFLPOCHHHLC* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::OFLPOCHHHLC*))((::PBYTE)hIl2Cpp + NHDPPBHHADE_KHGPLGMDOFC_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NHDPPBHHADE_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void MNEFKNFOABP(::OFLPOCHHHLC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::OFLPOCHHHLC*))((::PBYTE)hIl2Cpp + NHDPPBHHADE_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void CMFOMGGDPPA(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NHDPPBHHADE_CMFOMGGDPPA_OFFSET))(this, MIALFKCCCPI);
	}
};
