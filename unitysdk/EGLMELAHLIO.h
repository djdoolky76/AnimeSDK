#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EGLMELAHLIO__CTOR_OFFSET UNITYSDK_OFFSET(0x161402D0)

inline static constexpr unsigned int EGLMELAHLIO_TypeDefinitionIndex = 91322;

class EGLMELAHLIO : public ::System::Object
{
public:
	::System::String* MGEDBKBHJPM; // 0x10
	::System::Int32 APKIKLPPHEA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLMELAHLIO__CTOR_OFFSET))(this);
	}
};
