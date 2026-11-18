#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EAOMOBJEOEG__CTOR_OFFSET UNITYSDK_OFFSET(0xF9B3210)

inline static constexpr unsigned int EAOMOBJEOEG_TypeDefinitionIndex = 56360;

class EAOMOBJEOEG : public ::System::Object
{
public:
	::System::String* ILMDHBIAAME; // 0x10
	::System::Boolean HPJPKJGHCMO; // 0x18
	::System::Byte _padding0[0x3];
	::System::UInt32 GPJKCJGJFKB; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAOMOBJEOEG__CTOR_OFFSET))(this);
	}
};
