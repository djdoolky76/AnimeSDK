#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define LLMJFDMECHH_JLEIKGPGJIE_CTOR_OFFSET UNITYSDK_OFFSET(0xAF40)
#define LLMJFDMECHH_JLEIKGPGJIE_EQUALS_OFFSET UNITYSDK_OFFSET(0xAF50)
#define LLMJFDMECHH_JLEIKGPGJIE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE620)
#define LLMJFDMECHH_JLEIKGPGJIE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C36440)

inline static constexpr unsigned int LLMJFDMECHH_JLEIKGPGJIE_TypeDefinitionIndex = 13396;

	struct alignas(4) LLMJFDMECHH_JLEIKGPGJIE
	{
		::System::UInt32 PHFMCACHFIJ; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LLMJFDMECHH_JLEIKGPGJIE_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLMJFDMECHH_JLEIKGPGJIE_TOSTRING_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::LLMJFDMECHH_JLEIKGPGJIE a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LLMJFDMECHH_JLEIKGPGJIE))((::PBYTE)hIl2Cpp + LLMJFDMECHH_JLEIKGPGJIE_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLMJFDMECHH_JLEIKGPGJIE_GETHASHCODE_OFFSET))(this);
		}

	};
