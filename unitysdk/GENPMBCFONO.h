#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define GENPMBCFONO_CTOR_OFFSET UNITYSDK_OFFSET(0x159E4CB0)
#define GENPMBCFONO_FORMAT_OFFSET UNITYSDK_OFFSET(0x159E4800)
#define GENPMBCFONO_GETFORMAT_OFFSET UNITYSDK_OFFSET(0x159E4780)

	class GENPMBCFONO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GENPMBCFONO_CTOR_OFFSET))(this);
		}

		::System::Object* GetFormat(::System::Type* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + GENPMBCFONO_GETFORMAT_OFFSET))(this, a1);
		}

		::System::String* Format(::System::String* a1, ::System::Object* a2, ::System::IFormatProvider* a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Object*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + GENPMBCFONO_FORMAT_OFFSET))(this, a1, a2, a3);
		}

	};
