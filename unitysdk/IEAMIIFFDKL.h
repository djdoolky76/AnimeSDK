#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class Type; }

#define IEAMIIFFDKL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEE7C60)

	class IEAMIIFFDKL : public ::System::Attribute
	{
	public:
		::System::Type* GMPGDEINODK; // 0x10
		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + IEAMIIFFDKL_CTOR_OFFSET))(this, a1);
		}

	};
