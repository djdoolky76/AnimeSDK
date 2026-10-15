#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetupModifierExtraMaxLayer; }
namespace RPG::GameCore { class TaskContext; }

#define DMCNOBBBFID_CTOR_OFFSET UNITYSDK_OFFSET(0xFEB8FC0)
#define DMCNOBBBFID_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xFEB8FF0)

inline static constexpr unsigned int DMCNOBBBFID_TypeDefinitionIndex = 55601;

	class DMCNOBBBFID
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetupModifierExtraMaxLayer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetupModifierExtraMaxLayer*))((::PBYTE)hIl2Cpp + DMCNOBBBFID_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMCNOBBBFID_ONTASKBEGIN_OFFSET))(this);
		}

	};
