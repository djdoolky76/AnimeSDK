#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FILDABOALBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x166CEA00)

inline static constexpr unsigned int FILDABOALBJ_TypeDefinitionIndex = 84058;

	class FILDABOALBJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FILDABOALBJ_CTOR_OFFSET))(this);
		}

	};
