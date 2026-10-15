#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RandomSelectFloorValue; }
namespace RPG::GameCore { class TaskContext; }

#define HCNDDFJJOPK_CTOR_OFFSET UNITYSDK_OFFSET(0x15C29600)
#define HCNDDFJJOPK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C29630)

	class HCNDDFJJOPK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RandomSelectFloorValue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RandomSelectFloorValue*))((::PBYTE)hIl2Cpp + HCNDDFJJOPK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNDDFJJOPK_ONTASKBEGIN_OFFSET))(this);
		}

	};
