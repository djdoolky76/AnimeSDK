#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FDICDBOLAPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C2027E0)

inline static constexpr unsigned int FDICDBOLAPC_TypeDefinitionIndex = 44774;

	class FDICDBOLAPC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDICDBOLAPC_CTOR_OFFSET))(this);
		}

	};
