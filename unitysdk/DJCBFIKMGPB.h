#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define DJCBFIKMGPB_CTOR_OFFSET UNITYSDK_OFFSET(0xF22C4C0)
#define DJCBFIKMGPB_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0xF22C440)

	class DJCBFIKMGPB : public ::System::Object
	{
	public:
		::System::String* LLKGDLAFODJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJCBFIKMGPB_CTOR_OFFSET))(this);
		}

		::System::Object* GetContext(::System::Type* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + DJCBFIKMGPB_GETCONTEXT_OFFSET))(this, a1);
		}

	};
