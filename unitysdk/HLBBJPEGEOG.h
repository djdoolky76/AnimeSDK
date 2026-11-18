#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FLHDAPBHPML_DNMGKFJBLPE.h"
#include "unitysdk/System/Object.h"

class HHEOPMJNFGA;
class NMMADKKDPBH;

#define HLBBJPEGEOG_BMGCEOBPCGC_OFFSET UNITYSDK_OFFSET(0x14707C00)
#define HLBBJPEGEOG_CFIAHAGBFOF_OFFSET UNITYSDK_OFFSET(0x14707820)
#define HLBBJPEGEOG_CFNOBCEEANO_OFFSET UNITYSDK_OFFSET(0x14707CE0)
#define HLBBJPEGEOG_NMDALPOJCJB_OFFSET UNITYSDK_OFFSET(0x14707CD0)
#define HLBBJPEGEOG_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x147079F0)
#define HLBBJPEGEOG_OAJEIDFGCII_OFFSET UNITYSDK_OFFSET(0x14707CF0)
#define HLBBJPEGEOG__CTOR_OFFSET UNITYSDK_OFFSET(0x14707930)

inline static constexpr unsigned int HLBBJPEGEOG_TypeDefinitionIndex = 80920;

class HLBBJPEGEOG : public ::System::Object
{
public:
	::NMMADKKDPBH* EGHMHOBFIHG; // 0x10
	::FLHDAPBHPML_DNMGKFJBLPE EPOGMONGMFK; // 0x18
	::System::Byte _padding0[0x4];
	::System::Int64 _CFFLFLHMKEH_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBBJPEGEOG__CTOR_OFFSET))(this);
	}

	::System::Void CFIAHAGBFOF(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HLBBJPEGEOG_CFIAHAGBFOF_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBBJPEGEOG_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void BMGCEOBPCGC(::HHEOPMJNFGA* HACJFKBLODH)
	{
		return ((::System::Void(*)(::PVOID, ::HHEOPMJNFGA*))((::PBYTE)hIl2Cpp + HLBBJPEGEOG_BMGCEOBPCGC_OFFSET))(this, HACJFKBLODH);
	}

	::System::Int64 NMDALPOJCJB()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBBJPEGEOG_NMDALPOJCJB_OFFSET))(this);
	}

	::System::Void CFNOBCEEANO(::System::Int64 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + HLBBJPEGEOG_CFNOBCEEANO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean OAJEIDFGCII()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBBJPEGEOG_OAJEIDFGCII_OFFSET))(this);
	}
};
