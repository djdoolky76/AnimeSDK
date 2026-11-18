#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HJFKHEKOPBD.h"

class ANAPNFPOMNG;

#define ABMOFFMCEDJ_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x11B8D910)
#define ABMOFFMCEDJ_BAEOMKCHECF_OFFSET UNITYSDK_OFFSET(0x11B8D4C0)
#define ABMOFFMCEDJ_BENKILMNHMH_OFFSET UNITYSDK_OFFSET(0x11B8DA30)
#define ABMOFFMCEDJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11B8D880)
#define ABMOFFMCEDJ_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x11B8D790)
#define ABMOFFMCEDJ_IFACMGGOOOC_OFFSET UNITYSDK_OFFSET(0x11B8D750)
#define ABMOFFMCEDJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11B8D420)
#define ABMOFFMCEDJ_OMEIBIPJGDH_OFFSET UNITYSDK_OFFSET(0x11B8D9A0)
#define ABMOFFMCEDJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x11B8D870)
#define ABMOFFMCEDJ__CTOR_OFFSET UNITYSDK_OFFSET(0x11B8D860)

inline static constexpr unsigned int ABMOFFMCEDJ_TypeDefinitionIndex = 93113;

class ABMOFFMCEDJ : public ::HJFKHEKOPBD
{
public:
	static ::System::Int32* StaticGet_ACGLPJMGOLJ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ABMOFFMCEDJ_TypeDefinitionIndex)->GetStaticField(0xECF0);
	}
	// static const ::System::Int32 MFDHMEJEBBH = 0x1; // 0x0
	// static const ::System::Single PADCOIODMEE; // 0x0
	::System::Int32 MEJJHHCPHHN; // 0x60
	::System::Single AGOOOMPNPGL; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABMOFFMCEDJ__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABMOFFMCEDJ__CCTOR_OFFSET))();
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABMOFFMCEDJ_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void BAEOMKCHECF(::ANAPNFPOMNG* DACKALLJNNF)
	{
		return ((::System::Void(*)(::PVOID, ::ANAPNFPOMNG*))((::PBYTE)hIl2Cpp + ABMOFFMCEDJ_BAEOMKCHECF_OFFSET))(this, DACKALLJNNF);
	}

	::System::Void IFACMGGOOOC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABMOFFMCEDJ_IFACMGGOOOC_OFFSET))(this);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABMOFFMCEDJ_FCMNHLDLJCI_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABMOFFMCEDJ_ECNOGHHOPPF_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABMOFFMCEDJ_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void OMEIBIPJGDH(::ANAPNFPOMNG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::ANAPNFPOMNG*))((::PBYTE)hIl2Cpp + ABMOFFMCEDJ_OMEIBIPJGDH_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void BENKILMNHMH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABMOFFMCEDJ_BENKILMNHMH_OFFSET))(this);
	}
};
