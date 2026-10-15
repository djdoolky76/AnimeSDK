#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerEntityEventV2; }

#define MIJNKDCGPGO_CTOR_OFFSET UNITYSDK_OFFSET(0xB954640)
#define MIJNKDCGPGO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB954670)

inline static constexpr unsigned int MIJNKDCGPGO_TypeDefinitionIndex = 52525;

	class MIJNKDCGPGO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerEntityEventV2* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerEntityEventV2*))((::PBYTE)hIl2Cpp + MIJNKDCGPGO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIJNKDCGPGO_ONTASKBEGIN_OFFSET))(this);
		}

	};
