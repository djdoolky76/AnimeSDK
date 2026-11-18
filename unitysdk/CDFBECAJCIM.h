#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IEJHOJBLOHI.h"
#include "unitysdk/HAOLMOEKIAJ.h"

class KJPPKOPJJCJ;
class OFLPOCHHHLC;
class OKAICNPAJLA;

#define CDFBECAJCIM_CCLABMDMNBL_OFFSET UNITYSDK_OFFSET(0x1EFA9910)
#define CDFBECAJCIM_CCPOEFDMJEP_OFFSET UNITYSDK_OFFSET(0x1EFA9820)
#define CDFBECAJCIM_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x1EFA9780)
#define CDFBECAJCIM_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x1EFA9440)
#define CDFBECAJCIM_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x1EFA96F0)
#define CDFBECAJCIM_MMLDAHIDCEP_OFFSET UNITYSDK_OFFSET(0x1EFA9300)
#define CDFBECAJCIM_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x1EFA94B0)
#define CDFBECAJCIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFA9670)

inline static constexpr unsigned int CDFBECAJCIM_TypeDefinitionIndex = 94979;

class CDFBECAJCIM : public ::IEJHOJBLOHI
{
public:
	// static const ::System::String* PLBAHJBJCEB; // 0x0
	// static const ::System::String* EFFLNLHGBPI; // 0x0
	// static const ::System::String* GCNCFMLNHCD; // 0x0
	// static const ::System::String* LCNFOKHJKAJ; // 0x0
	::KJPPKOPJJCJ* HMPEEAAAGHE; // 0x28
	::OKAICNPAJLA* OLFJDNDAEFB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDFBECAJCIM__CTOR_OFFSET))(this);
	}

	::System::Void MMLDAHIDCEP(::OFLPOCHHHLC* HMPEEAAAGHE)
	{
		return ((::System::Void(*)(::PVOID, ::OFLPOCHHHLC*))((::PBYTE)hIl2Cpp + CDFBECAJCIM_MMLDAHIDCEP_OFFSET))(this, HMPEEAAAGHE);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDFBECAJCIM_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CDFBECAJCIM_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDFBECAJCIM_IFHNMAGGFAE_OFFSET))(this);
	}

	::System::Void CMFOMGGDPPA(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CDFBECAJCIM_CMFOMGGDPPA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void CCPOEFDMJEP(::HAOLMOEKIAJ BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::HAOLMOEKIAJ))((::PBYTE)hIl2Cpp + CDFBECAJCIM_CCPOEFDMJEP_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void CCLABMDMNBL(::OFLPOCHHHLC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::OFLPOCHHHLC*))((::PBYTE)hIl2Cpp + CDFBECAJCIM_CCLABMDMNBL_OFFSET))(this, MIALFKCCCPI);
	}
};
