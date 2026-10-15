#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvSetNpcAlertConfig; }
namespace RPG::GameCore { class TaskContext; }

#define LAJGEFDLJLM_CTOR_OFFSET UNITYSDK_OFFSET(0xB5E5640)
#define LAJGEFDLJLM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB5E5670)

	class LAJGEFDLJLM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetNpcAlertConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetNpcAlertConfig*))((::PBYTE)hIl2Cpp + LAJGEFDLJLM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJGEFDLJLM_ONTASKBEGIN_OFFSET))(this);
		}

	};
