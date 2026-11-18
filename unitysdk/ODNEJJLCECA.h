#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IEJHOJBLOHI.h"

class OFLPOCHHHLC;

#define ODNEJJLCECA_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x1CCC9360)
#define ODNEJJLCECA_KHGPLGMDOFC_OFFSET UNITYSDK_OFFSET(0x1CCC9170)
#define ODNEJJLCECA_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x1CCC92D0)
#define ODNEJJLCECA_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x1CCC91F0)
#define ODNEJJLCECA__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCC9250)

inline static constexpr unsigned int ODNEJJLCECA_TypeDefinitionIndex = 93947;

class ODNEJJLCECA : public ::IEJHOJBLOHI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODNEJJLCECA__CTOR_OFFSET))(this);
	}

	::System::Void KHGPLGMDOFC(::OFLPOCHHHLC* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::OFLPOCHHHLC*))((::PBYTE)hIl2Cpp + ODNEJJLCECA_KHGPLGMDOFC_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ODNEJJLCECA_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void MNEFKNFOABP(::OFLPOCHHHLC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::OFLPOCHHHLC*))((::PBYTE)hIl2Cpp + ODNEJJLCECA_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void CMFOMGGDPPA(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ODNEJJLCECA_CMFOMGGDPPA_OFFSET))(this, MIALFKCCCPI);
	}
};
