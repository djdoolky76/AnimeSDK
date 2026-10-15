#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MHALMEEDBAO_CTOR_OFFSET UNITYSDK_OFFSET(0xB92F6E0)

inline static constexpr unsigned int MHALMEEDBAO_TypeDefinitionIndex = 77616;

	class MHALMEEDBAO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHALMEEDBAO_CTOR_OFFSET))(this);
		}

	};
