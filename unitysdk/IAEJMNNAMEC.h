#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IAEJMNNAMEC;
namespace System { class String; }

#define IAEJMNNAMEC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15E025B0)
#define IAEJMNNAMEC_CTOR_OFFSET UNITYSDK_OFFSET(0x15E02620)
#define IAEJMNNAMEC_OKPLPEELPBC_OFFSET UNITYSDK_OFFSET(0x15E02630)

	class IAEJMNNAMEC : public ::System::Object
	{
	public:
		::System::String* JHLIDACEDBD; // 0x10
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IAEJMNNAMEC_CTOR_OFFSET))(this, a1);
		}

		static ::IAEJMNNAMEC* BPLPBPMEODA(::System::String* a1)
		{
			return ((::IAEJMNNAMEC*(*)(::System::String*))((::PBYTE)hIl2Cpp + IAEJMNNAMEC_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Boolean OKPLPEELPBC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IAEJMNNAMEC_OKPLPEELPBC_OFFSET))(this);
		}

	};
