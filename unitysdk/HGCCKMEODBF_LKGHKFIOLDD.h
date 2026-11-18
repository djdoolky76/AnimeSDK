#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define HGCCKMEODBF_LKGHKFIOLDD_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x15DA6AF0)
#define HGCCKMEODBF_LKGHKFIOLDD__CTOR_OFFSET UNITYSDK_OFFSET(0x15DA6AE0)

inline static constexpr unsigned int HGCCKMEODBF_LKGHKFIOLDD_TypeDefinitionIndex = 78499;

class HGCCKMEODBF_LKGHKFIOLDD : public ::System::Object
{
public:
	::HOCDHMEPPEG DJPMNKCDAFL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGCCKMEODBF_LKGHKFIOLDD__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGCCKMEODBF_LKGHKFIOLDD_LIDNPLMPHAL_OFFSET))(this);
	}
};
