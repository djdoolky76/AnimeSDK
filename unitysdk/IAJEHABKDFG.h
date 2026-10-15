#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

#define IAJEHABKDFG_CTOR_OFFSET UNITYSDK_OFFSET(0x15E10680)

inline static constexpr unsigned int IAJEHABKDFG_TypeDefinitionIndex = 58024;

	class IAJEHABKDFG : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJEHABKDFG_CTOR_OFFSET))(this);
		}

	};
