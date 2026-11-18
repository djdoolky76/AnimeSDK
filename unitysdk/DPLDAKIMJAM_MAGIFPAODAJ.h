#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DPHPCHPDJPB;

#define DPLDAKIMJAM_MAGIFPAODAJ_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x148C08E0)
#define DPLDAKIMJAM_MAGIFPAODAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x148C08D0)

inline static constexpr unsigned int DPLDAKIMJAM_MAGIFPAODAJ_TypeDefinitionIndex = 38395;

class DPLDAKIMJAM_MAGIFPAODAJ : public ::System::Object
{
public:
	::DPHPCHPDJPB* MINGNPLFJBJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPLDAKIMJAM_MAGIFPAODAJ__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPLDAKIMJAM_MAGIFPAODAJ_LIDNPLMPHAL_OFFSET))(this);
	}
};
