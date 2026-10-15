#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvPlayerEnterAlertDeviceTrigger; }
namespace RPG::GameCore { class TaskContext; }

#define GMIMODOENIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15AD2BC0)
#define GMIMODOENIJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15AD2BF0)

inline static constexpr unsigned int GMIMODOENIJ_TypeDefinitionIndex = 52468;

	class GMIMODOENIJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvPlayerEnterAlertDeviceTrigger* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvPlayerEnterAlertDeviceTrigger*))((::PBYTE)hIl2Cpp + GMIMODOENIJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIMODOENIJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
