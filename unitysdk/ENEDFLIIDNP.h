#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ENEDFLIIDNP_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4F6CC0)

inline static constexpr unsigned int ENEDFLIIDNP_TypeDefinitionIndex = 43315;

	class ENEDFLIIDNP : public ::System::Object
	{
	public:
		::System::Boolean CJLDFMAFFBI; // 0x10
		::System::Boolean ABKBOGIGAEH; // 0x11
		::System::Byte _padding0[0x2];
		::System::Single ELFMCDEAGAM; // 0x14
		::System::Single GNJEMNHOPGJ; // 0x18
		::System::Single FIJLEDEKBJP; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEDFLIIDNP_CTOR_OFFSET))(this);
		}

	};
