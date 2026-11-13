#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EDAACJOHDHH_CTOR_OFFSET UNITYSDK_OFFSET(0x186B1E90)

inline static constexpr unsigned int EDAACJOHDHH_TypeDefinitionIndex = 57185;

	class EDAACJOHDHH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDAACJOHDHH_CTOR_OFFSET))(this);
		}

	};
