#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FDEMOJNIGMG_CTOR_OFFSET UNITYSDK_OFFSET(0x156C9550)

inline static constexpr unsigned int FDEMOJNIGMG_TypeDefinitionIndex = 72030;

	class FDEMOJNIGMG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDEMOJNIGMG_CTOR_OFFSET))(this);
		}

	};
