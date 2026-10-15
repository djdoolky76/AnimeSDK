#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/CommandRobotPuzzleBlockType.h"

#define DAFINEMBGOK_GLHAHCOFNEO_OFFSET UNITYSDK_OFFSET(0xF1550)
#define DAFINEMBGOK_LOKOABBPHMP_OFFSET UNITYSDK_OFFSET(0xF14D0)
#define DAFINEMBGOK_OGHIELPGHBC_OFFSET UNITYSDK_OFFSET(0xF14E0)

inline static constexpr unsigned int DAFINEMBGOK_TypeDefinitionIndex = 78513;

	struct alignas(4) DAFINEMBGOK
	{
		::RPG::Client::Prop::CommandRobotPuzzleBlockType CFGEJHAOKED; // 0x10
		::System::Int32 CGDPPGNJFGC; // 0x14
		::System::Boolean KPJGDHLENIP; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 CMFODKOCKEF; // 0x1C
		::System::Void LOKOABBPHMP(::RPG::Client::Prop::CommandRobotPuzzleBlockType a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::CommandRobotPuzzleBlockType, ::System::Int32))((::PBYTE)hIl2Cpp + DAFINEMBGOK_LOKOABBPHMP_OFFSET))(this, a1, a2);
		}

		::System::Boolean OGHIELPGHBC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DAFINEMBGOK_OGHIELPGHBC_OFFSET))(this);
		}

		::System::Void GLHAHCOFNEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAFINEMBGOK_GLHAHCOFNEO_OFFSET))(this);
		}

	};
