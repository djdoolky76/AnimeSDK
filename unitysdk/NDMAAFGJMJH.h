#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define NDMAAFGJMJH_CTOR_OFFSET UNITYSDK_OFFSET(0xAF40)
#define NDMAAFGJMJH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FEB0)

inline static constexpr unsigned int NDMAAFGJMJH_TypeDefinitionIndex = 67215;

	struct alignas(4) NDMAAFGJMJH
	{
		::System::UInt32 MNGBKJEBIGB; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDMAAFGJMJH_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMAAFGJMJH_TOSTRING_OFFSET))(this);
		}

	};
