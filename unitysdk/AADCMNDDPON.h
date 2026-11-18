#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HAPOADBOJLK.h"

class ALAGDAJALHD;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AADCMNDDPON_CBJAEOKBGBE_OFFSET UNITYSDK_OFFSET(0x12CCFA10)
#define AADCMNDDPON_CHCGMACMJLD_OFFSET UNITYSDK_OFFSET(0x12CCF800)
#define AADCMNDDPON_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x12CCFAA0)
#define AADCMNDDPON_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0x12CCF5A0)
#define AADCMNDDPON_LDAAGJIGMLH_OFFSET UNITYSDK_OFFSET(0x12CCF2C0)
#define AADCMNDDPON_MLOKEBDBDCN_OFFSET UNITYSDK_OFFSET(0x12CCF430)
#define AADCMNDDPON_PBGJKMAEINN_OFFSET UNITYSDK_OFFSET(0x12CCF970)
#define AADCMNDDPON__CTOR_OFFSET UNITYSDK_OFFSET(0x12CCF2D0)

inline static constexpr unsigned int AADCMNDDPON_TypeDefinitionIndex = 88582;

class AADCMNDDPON : public ::HAPOADBOJLK
{
public:
	::System::Collections::Generic::List_1<::System::Double>* EOICNEFOFGM; // 0x48

	::System::Void _ctor(::ALAGDAJALHD* FCPGJNLBFMO)
	{
		return ((::System::Void(*)(::PVOID, ::ALAGDAJALHD*))((::PBYTE)hIl2Cpp + AADCMNDDPON__CTOR_OFFSET))(this, FCPGJNLBFMO);
	}

	::System::Boolean LDAAGJIGMLH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AADCMNDDPON_LDAAGJIGMLH_OFFSET))(this);
	}

	::System::Void MLOKEBDBDCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AADCMNDDPON_MLOKEBDBDCN_OFFSET))(this);
	}

	::System::Void DFJPMOOOLHM(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AADCMNDDPON_DFJPMOOOLHM_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void CHCGMACMJLD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AADCMNDDPON_CHCGMACMJLD_OFFSET))(this);
	}

	::System::Void PBGJKMAEINN(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AADCMNDDPON_PBGJKMAEINN_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void CBJAEOKBGBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AADCMNDDPON_CBJAEOKBGBE_OFFSET))(this);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AADCMNDDPON_CNIKAMOAANF_OFFSET))(this);
	}
};
