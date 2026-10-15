#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MKJKKHFPANJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C92C980)

	class MKJKKHFPANJ : public ::System::Object
	{
	public:
		::System::Boolean JDOIKJBEBFF; // 0x10
		::System::Boolean PPBNDHEGCNK; // 0x11
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKJKKHFPANJ_CTOR_OFFSET))(this);
		}

	};
