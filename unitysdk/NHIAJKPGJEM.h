#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OLHFONBEAAN.h"

#define NHIAJKPGJEM_DGANINHHGPB_OFFSET UNITYSDK_OFFSET(0x12FEA920)
#define NHIAJKPGJEM_KEFOMPECDCL_OFFSET UNITYSDK_OFFSET(0x12FEA930)
#define NHIAJKPGJEM_NEKANOEOOAE_OFFSET UNITYSDK_OFFSET(0x12FEA8C0)
#define NHIAJKPGJEM_OEIIGFCGPOE_OFFSET UNITYSDK_OFFSET(0x12FEA7C0)
#define NHIAJKPGJEM_OHDPCOIOMGF_OFFSET UNITYSDK_OFFSET(0x12FEA7B0)
#define NHIAJKPGJEM__CTOR_OFFSET UNITYSDK_OFFSET(0x12FEA770)

inline static constexpr unsigned int NHIAJKPGJEM_TypeDefinitionIndex = 51115;

class NHIAJKPGJEM : public ::OLHFONBEAAN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHIAJKPGJEM__CTOR_OFFSET))(this);
	}

	::System::Boolean OHDPCOIOMGF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NHIAJKPGJEM_OHDPCOIOMGF_OFFSET))(this);
	}

	::System::Boolean OEIIGFCGPOE(::System::Int32 HAAEBCOBKFF, ::System::Int32 BFMMEICFNCD)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NHIAJKPGJEM_OEIIGFCGPOE_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}

	::System::Void NEKANOEOOAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHIAJKPGJEM_NEKANOEOOAE_OFFSET))(this);
	}

	::System::Void DGANINHHGPB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHIAJKPGJEM_DGANINHHGPB_OFFSET))(this);
	}

	::System::Boolean KEFOMPECDCL(::System::Int32 MIALFKCCCPI, ::System::Int32 KMGKAIDEIBA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NHIAJKPGJEM_KEFOMPECDCL_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
