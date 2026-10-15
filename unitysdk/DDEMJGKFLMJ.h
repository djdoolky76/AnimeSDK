#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define DDEMJGKFLMJ_CTOR_OFFSET UNITYSDK_OFFSET(0xE260940)

inline static constexpr unsigned int DDEMJGKFLMJ_TypeDefinitionIndex = 48933;

	class DDEMJGKFLMJ : public ::System::Object
	{
	public:
		::System::String* Label; // 0x10
		::System::String* CliSlug; // 0x18
		::System::String* Id; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDEMJGKFLMJ_CTOR_OFFSET))(this);
		}

	};
