#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerGroupEventOnDialogEnd; }

#define DDLEIIEKIEE_CTOR_OFFSET UNITYSDK_OFFSET(0xE4E58D0)
#define DDLEIIEKIEE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE4E5900)

inline static constexpr unsigned int DDLEIIEKIEE_TypeDefinitionIndex = 53449;

	class DDLEIIEKIEE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerGroupEventOnDialogEnd* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerGroupEventOnDialogEnd*))((::PBYTE)hIl2Cpp + DDLEIIEKIEE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLEIIEKIEE_ONTASKBEGIN_OFFSET))(this);
		}

	};
