#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameWorld_LevelCellTrigger.h"
#include "unitysdk/System/Object.h"

#define JLMJJOCGACJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD71280)

inline static constexpr unsigned int JLMJJOCGACJ_TypeDefinitionIndex = 43481;

	class JLMJJOCGACJ : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellTrigger EABKOHGCHFP; // 0x10
		::System::Boolean INNLLCMIDFK; // 0x30
		::System::Boolean CAGCHKJHMPD; // 0x31
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLMJJOCGACJ_CTOR_OFFSET))(this);
		}

	};
