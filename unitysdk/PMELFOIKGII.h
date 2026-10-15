#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvLogisticsRobotDoorOpen; }
namespace RPG::GameCore { class TaskContext; }

#define PMELFOIKGII_CTOR_OFFSET UNITYSDK_OFFSET(0xC319450)
#define PMELFOIKGII_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC319480)

inline static constexpr unsigned int PMELFOIKGII_TypeDefinitionIndex = 52393;

	class PMELFOIKGII
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvLogisticsRobotDoorOpen* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvLogisticsRobotDoorOpen*))((::PBYTE)hIl2Cpp + PMELFOIKGII_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMELFOIKGII_ONTASKBEGIN_OFFSET))(this);
		}

	};
