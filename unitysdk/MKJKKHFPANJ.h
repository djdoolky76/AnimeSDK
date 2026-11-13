#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MKJKKHFPANJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C2636E0)

inline static constexpr unsigned int MKJKKHFPANJ_TypeDefinitionIndex = 43974;

	class MKJKKHFPANJ : public ::System::Object
	{
	public:
		::System::Boolean PPBNDHEGCNK; // 0x10
		::System::Boolean JDOIKJBEBFF; // 0x11
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKJKKHFPANJ_CTOR_OFFSET))(this);
		}

	};
