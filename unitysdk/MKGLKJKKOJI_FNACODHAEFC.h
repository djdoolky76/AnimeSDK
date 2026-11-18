#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define MKGLKJKKOJI_FNACODHAEFC_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x14DEF670)
#define MKGLKJKKOJI_FNACODHAEFC__CTOR_OFFSET UNITYSDK_OFFSET(0x14DEF660)

inline static constexpr unsigned int MKGLKJKKOJI_FNACODHAEFC_TypeDefinitionIndex = 56801;

class MKGLKJKKOJI_FNACODHAEFC : public ::System::Object
{
public:
	::HOCDHMEPPEG PABLEDCGDGM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGLKJKKOJI_FNACODHAEFC__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGLKJKKOJI_FNACODHAEFC_LIDNPLMPHAL_OFFSET))(this);
	}
};
