#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CAIMDDBJPGC__CTOR_OFFSET UNITYSDK_OFFSET(0x16A098A0)

inline static constexpr unsigned int CAIMDDBJPGC_TypeDefinitionIndex = 88256;

class CAIMDDBJPGC : public ::System::Object
{
public:
	// static const ::System::Int32 LACNNKHOFGG = 0x1; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAIMDDBJPGC__CTOR_OFFSET))(this);
	}
};
