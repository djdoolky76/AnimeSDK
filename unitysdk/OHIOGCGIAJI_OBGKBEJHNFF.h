#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define OHIOGCGIAJI_OBGKBEJHNFF_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x13A623B0)
#define OHIOGCGIAJI_OBGKBEJHNFF__CTOR_OFFSET UNITYSDK_OFFSET(0x13A623A0)

inline static constexpr unsigned int OHIOGCGIAJI_OBGKBEJHNFF_TypeDefinitionIndex = 44684;

class OHIOGCGIAJI_OBGKBEJHNFF : public ::System::Object
{
public:
	::HOCDHMEPPEG KCNAHGEIAPN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHIOGCGIAJI_OBGKBEJHNFF__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHIOGCGIAJI_OBGKBEJHNFF_LIDNPLMPHAL_OFFSET))(this);
	}
};
