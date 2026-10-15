#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JAFEKIICGHB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB5C740)

inline static constexpr unsigned int JAFEKIICGHB_TypeDefinitionIndex = 42366;

	class JAFEKIICGHB : public ::System::Object
	{
	public:
		::System::Single EBJKJAGJGPK; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAFEKIICGHB_CTOR_OFFSET))(this);
		}

	};
