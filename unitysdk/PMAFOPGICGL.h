#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerPropEventInBattle; }

#define PMAFOPGICGL_CTOR_OFFSET UNITYSDK_OFFSET(0xC311A10)
#define PMAFOPGICGL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC311A40)

inline static constexpr unsigned int PMAFOPGICGL_TypeDefinitionIndex = 55763;

	class PMAFOPGICGL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerPropEventInBattle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerPropEventInBattle*))((::PBYTE)hIl2Cpp + PMAFOPGICGL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMAFOPGICGL_ONTASKBEGIN_OFFSET))(this);
		}

	};
