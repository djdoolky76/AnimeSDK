#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class String; }

#define PKBDIJBDBOO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2C9870)

inline static constexpr unsigned int PKBDIJBDBOO_TypeDefinitionIndex = 25019;

	class PKBDIJBDBOO : public ::System::Attribute
	{
	public:
		::System::String* LFCMNBJMEPP; // 0x10
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PKBDIJBDBOO_CTOR_OFFSET))(this, a1);
		}

	};
