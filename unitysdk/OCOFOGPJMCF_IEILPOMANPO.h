#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define OCOFOGPJMCF_IEILPOMANPO_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x12921260)
#define OCOFOGPJMCF_IEILPOMANPO__CTOR_OFFSET UNITYSDK_OFFSET(0x12921250)

inline static constexpr unsigned int OCOFOGPJMCF_IEILPOMANPO_TypeDefinitionIndex = 42384;

class OCOFOGPJMCF_IEILPOMANPO : public ::System::Object
{
public:
	::HOCDHMEPPEG DJPMNKCDAFL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOFOGPJMCF_IEILPOMANPO__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOFOGPJMCF_IEILPOMANPO_LIDNPLMPHAL_OFFSET))(this);
	}
};
