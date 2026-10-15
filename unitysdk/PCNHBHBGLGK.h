#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJNBODHINDM;
namespace System { class Object; }

#define PCNHBHBGLGK_AKJABINEGDJ_OFFSET UNITYSDK_OFFSET(0xC008B00)
#define PCNHBHBGLGK_CTOR_OFFSET UNITYSDK_OFFSET(0xC008D60)

	class PCNHBHBGLGK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCNHBHBGLGK_CTOR_OFFSET))(this);
		}

		::System::Void AKJABINEGDJ(::FJNBODHINDM* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FJNBODHINDM*, ::System::Object*))((::PBYTE)hIl2Cpp + PCNHBHBGLGK_AKJABINEGDJ_OFFSET))(this, a1, a2);
		}

	};
