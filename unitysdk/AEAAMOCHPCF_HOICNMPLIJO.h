#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

class AEAAMOCHPCF;

#define AEAAMOCHPCF_HOICNMPLIJO_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x1646A500)
#define AEAAMOCHPCF_HOICNMPLIJO__CTOR_OFFSET UNITYSDK_OFFSET(0x1646A4F0)

inline static constexpr unsigned int AEAAMOCHPCF_HOICNMPLIJO_TypeDefinitionIndex = 44408;

class AEAAMOCHPCF_HOICNMPLIJO : public ::System::Object
{
public:
	::AEAAMOCHPCF* KLHPEBKNIFB; // 0x10
	::HOCDHMEPPEG IJIJLOMMDHD; // 0x18
	::HOCDHMEPPEG ECLGGGCDNKC; // 0x48
	::System::Int32 MHMIBPMIGLG; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEAAMOCHPCF_HOICNMPLIJO__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL(::System::Boolean CAAFEGLOALC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AEAAMOCHPCF_HOICNMPLIJO_LIDNPLMPHAL_OFFSET))(this, CAAFEGLOALC);
	}
};
