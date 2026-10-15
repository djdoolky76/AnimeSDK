#pragma once
#include "unitysdk/unitysdk.h"

#define JKMCJGPMHKA_LEVELCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x111F0)
#define JKMCJGPMHKA_LEVELCONFIG_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0xB220700)

inline static constexpr unsigned int JKMCJGPMHKA_LevelConfig_TypeDefinitionIndex = 51809;

	struct alignas(4) JKMCJGPMHKA_LevelConfig
	{
		::System::Int32 level1TriggerInterval; // 0x10
		::System::Int32 level2TriggerInterval; // 0x14
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + JKMCJGPMHKA_LEVELCONFIG_CTOR_OFFSET))(this, a1, a2);
		}

		/*
		static ::JKMCJGPMHKA_LevelConfig get_Default()
		{
			return ((::JKMCJGPMHKA_LevelConfig(*)())((::PBYTE)hIl2Cpp + JKMCJGPMHKA_LEVELCONFIG_GET_DEFAULT_OFFSET))();
		}
		*/

	};
