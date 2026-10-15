#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GILFCOGNOCB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA7D630)

inline static constexpr unsigned int GILFCOGNOCB_TypeDefinitionIndex = 42904;

	class GILFCOGNOCB : public ::System::Object
	{
	public:
		::System::Int32 MBFDHICHMJC; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GILFCOGNOCB_CTOR_OFFSET))(this);
		}

	};
