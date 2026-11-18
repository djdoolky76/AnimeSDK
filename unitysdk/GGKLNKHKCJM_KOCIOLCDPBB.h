#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define GGKLNKHKCJM_KOCIOLCDPBB_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x10EF1DE0)
#define GGKLNKHKCJM_KOCIOLCDPBB__CTOR_OFFSET UNITYSDK_OFFSET(0x10EF1DD0)

inline static constexpr unsigned int GGKLNKHKCJM_KOCIOLCDPBB_TypeDefinitionIndex = 51055;

class GGKLNKHKCJM_KOCIOLCDPBB : public ::System::Object
{
public:
	::HOCDHMEPPEG DJPMNKCDAFL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGKLNKHKCJM_KOCIOLCDPBB__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGKLNKHKCJM_KOCIOLCDPBB_LIDNPLMPHAL_OFFSET))(this);
	}
};
