#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OMCOBKDLALA_CTOR_OFFSET UNITYSDK_OFFSET(0xBF19E80)

inline static constexpr unsigned int OMCOBKDLALA_TypeDefinitionIndex = 48907;

	class OMCOBKDLALA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMCOBKDLALA_CTOR_OFFSET))(this);
		}

	};
