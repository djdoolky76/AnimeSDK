#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
namespace System { class Exception; }
namespace System { class String; }

#define HCPOGOIJDHI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x15C2F640)
#define HCPOGOIJDHI_CTOR_OFFSET UNITYSDK_OFFSET(0x15C2F5E0)

	class HCPOGOIJDHI : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HCPOGOIJDHI_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::Exception* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + HCPOGOIJDHI_CTOR_1_OFFSET))(this, a1, a2);
		}

	};
