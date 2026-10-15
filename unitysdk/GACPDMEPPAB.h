#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCCEKONOPCK;

#define GACPDMEPPAB_CTOR_OFFSET UNITYSDK_OFFSET(0x15936A80)

	class GACPDMEPPAB : public ::System::Object
	{
	public:
		::DCCEKONOPCK* HNEOOKPBCNK; // 0x10
		::System::Void _ctor(::DCCEKONOPCK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DCCEKONOPCK*))((::PBYTE)hIl2Cpp + GACPDMEPPAB_CTOR_OFFSET))(this, a1);
		}

	};
