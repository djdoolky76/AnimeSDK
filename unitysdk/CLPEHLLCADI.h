#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Random; }

#define CLPEHLLCADI_DNKOOLHAHEA_OFFSET UNITYSDK_OFFSET(0x13E12DC0)
#define CLPEHLLCADI_FLMJPHHNOIL_OFFSET UNITYSDK_OFFSET(0x13E12F40)
#define CLPEHLLCADI_FMKGALCEKEH_OFFSET UNITYSDK_OFFSET(0x13E12F30)
#define CLPEHLLCADI_KEKLOPKLAIM_1_OFFSET UNITYSDK_OFFSET(0x13E12E20)
#define CLPEHLLCADI_KEKLOPKLAIM_2_OFFSET UNITYSDK_OFFSET(0x13E12F50)
#define CLPEHLLCADI_KEKLOPKLAIM_OFFSET UNITYSDK_OFFSET(0x13E12D50)
#define CLPEHLLCADI_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x13E12FB0)
#define CLPEHLLCADI__CTOR_1_OFFSET UNITYSDK_OFFSET(0x13E12D00)
#define CLPEHLLCADI__CTOR_OFFSET UNITYSDK_OFFSET(0x13E12CB0)

inline static constexpr unsigned int CLPEHLLCADI_TypeDefinitionIndex = 62196;

class CLPEHLLCADI : public ::System::Object
{
public:
	::System::Random* AAIMPPBEKPF; // 0x10
	::System::Int32 _IBBBPFNDIAC_k__BackingField; // 0x18

	::System::Void _ctor(::System::Int32 GONODCOMIAA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLPEHLLCADI__CTOR_OFFSET))(this, GONODCOMIAA);
	}

	::System::Void _ctor_1(::System::UInt32 GONODCOMIAA)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLPEHLLCADI__CTOR_1_OFFSET))(this, GONODCOMIAA);
	}

	::System::Int32 KEKLOPKLAIM(::System::Int32 FBCNNPLFAAG, ::System::Int32 GOKEGHENOGP)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLPEHLLCADI_KEKLOPKLAIM_OFFSET))(this, FBCNNPLFAAG, GOKEGHENOGP);
	}

	::System::Double DNKOOLHAHEA()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLPEHLLCADI_DNKOOLHAHEA_OFFSET))(this);
	}

	::System::Single KEKLOPKLAIM_1(::System::Single FBCNNPLFAAG, ::System::Single GOKEGHENOGP)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLPEHLLCADI_KEKLOPKLAIM_1_OFFSET))(this, FBCNNPLFAAG, GOKEGHENOGP);
	}

	::System::Void FMKGALCEKEH(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLPEHLLCADI_FMKGALCEKEH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 FLMJPHHNOIL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLPEHLLCADI_FLMJPHHNOIL_OFFSET))(this);
	}

	::System::Int32 KEKLOPKLAIM_2(::System::Int32 GOKEGHENOGP)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLPEHLLCADI_KEKLOPKLAIM_2_OFFSET))(this, GOKEGHENOGP);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLPEHLLCADI_NPOLNFDBOOD_OFFSET))(this);
	}
};
