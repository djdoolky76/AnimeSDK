#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define JIPJIAJGJIJ_CTOR_OFFSET UNITYSDK_OFFSET(0xAF40)
#define JIPJIAJGJIJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x10CA0)

inline static constexpr unsigned int JIPJIAJGJIJ_TypeDefinitionIndex = 67264;

	struct alignas(4) JIPJIAJGJIJ
	{
		::System::UInt32 JPPGBFHNLPE; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JIPJIAJGJIJ_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIPJIAJGJIJ_TOSTRING_OFFSET))(this);
		}

	};
