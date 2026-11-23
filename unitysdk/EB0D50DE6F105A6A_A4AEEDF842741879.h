#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EB0D50DE6F105A6A_A4AEEDF842741879__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EB0D50DE6F105A6A_A4AEEDF842741879_TypeDefinitionIndex = 15641;

class EB0D50DE6F105A6A_A4AEEDF842741879 : public ::System::Object
{
public:
	::System::String* F0EB409B547AD905; // 0x10
	::System::String* EA799DC4CDFAA0E0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EB0D50DE6F105A6A_A4AEEDF842741879__CTOR_OFFSET))(this);
	}
};
