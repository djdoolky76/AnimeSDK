#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KCLIKAPODAD;

#define DNMOMHFDFGI_CTOR_OFFSET UNITYSDK_OFFSET(0x11FD54B0)
#define DNMOMHFDFGI_JKIBFIBAMKB_OFFSET UNITYSDK_OFFSET(0x11FD54C0)

inline static constexpr unsigned int DNMOMHFDFGI_TypeDefinitionIndex = 62861;

	class DNMOMHFDFGI : public ::System::Object
	{
	public:
		::KCLIKAPODAD* OAFFBGGLGEJ; // 0x10
		::System::Void _ctor(::KCLIKAPODAD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCLIKAPODAD*))((::PBYTE)hIl2Cpp + DNMOMHFDFGI_CTOR_OFFSET))(this, a1);
		}

		::KCLIKAPODAD* JKIBFIBAMKB()
		{
			return ((::KCLIKAPODAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNMOMHFDFGI_JKIBFIBAMKB_OFFSET))(this);
		}

	};
