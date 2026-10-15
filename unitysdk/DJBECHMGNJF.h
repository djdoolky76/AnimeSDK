#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define DJBECHMGNJF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA2AAD0)

	class DJBECHMGNJF : public ::System::Object
	{
	public:
		::System::String* OLOIFNNLKJP; // 0x10
		::System::Boolean ENMACFIKFIM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJBECHMGNJF_CTOR_OFFSET))(this);
		}

	};
