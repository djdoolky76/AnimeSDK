#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OLEGBMMJKNB;
namespace System { class String; }

#define OLEGBMMJKNB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBF028E0)
#define OLEGBMMJKNB_CTOR_OFFSET UNITYSDK_OFFSET(0xBF02970)
#define OLEGBMMJKNB_OKPLPEELPBC_OFFSET UNITYSDK_OFFSET(0xBF029A0)

	class OLEGBMMJKNB : public ::System::Object
	{
	public:
		::System::UInt32 CACOADGJKLA; // 0x10
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OLEGBMMJKNB_CTOR_OFFSET))(this, a1);
		}

		static ::OLEGBMMJKNB* BPLPBPMEODA(::System::String* a1)
		{
			return ((::OLEGBMMJKNB*(*)(::System::String*))((::PBYTE)hIl2Cpp + OLEGBMMJKNB_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Boolean OKPLPEELPBC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OLEGBMMJKNB_OKPLPEELPBC_OFFSET))(this);
		}

	};
