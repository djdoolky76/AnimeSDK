#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class BoomRobotGameplayEnterBoomCam; }
namespace RPG::GameCore { class TaskContext; }

#define LIHPODFBEOC_CTOR_OFFSET UNITYSDK_OFFSET(0xB6CBBD0)
#define LIHPODFBEOC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB6CBC00)

inline static constexpr unsigned int LIHPODFBEOC_TypeDefinitionIndex = 52545;

	class LIHPODFBEOC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BoomRobotGameplayEnterBoomCam* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BoomRobotGameplayEnterBoomCam*))((::PBYTE)hIl2Cpp + LIHPODFBEOC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIHPODFBEOC_ONTASKBEGIN_OFFSET))(this);
		}

	};
