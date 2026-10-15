#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define JENIFGNJEPE_CTOR_OFFSET UNITYSDK_OFFSET(0x16641C00)

	class JENIFGNJEPE : public ::System::Object
	{
	public:
		// static const ::System::Object ANFEEMABALK; // 0x0
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JENIFGNJEPE_CTOR_OFFSET))(this, a1);
		}

	};
