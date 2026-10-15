#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define GOIJJIEHEOF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAB56D0)

inline static constexpr unsigned int GOIJJIEHEOF_TypeDefinitionIndex = 42164;

	class GOIJJIEHEOF : public ::System::Object
	{
	public:
		::System::String* CEFDDDAIMMD; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOIJJIEHEOF_CTOR_OFFSET))(this);
		}

	};
