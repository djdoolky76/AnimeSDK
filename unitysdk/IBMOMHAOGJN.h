#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetSummonUnitTriggerEnable; }
namespace RPG::GameCore { class TaskContext; }

#define IBMOMHAOGJN_CTOR_OFFSET UNITYSDK_OFFSET(0x15E42BF0)
#define IBMOMHAOGJN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E42C20)
#define IBMOMHAOGJN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E42C60)

	class IBMOMHAOGJN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetSummonUnitTriggerEnable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetSummonUnitTriggerEnable*))((::PBYTE)hIl2Cpp + IBMOMHAOGJN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBMOMHAOGJN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBMOMHAOGJN_ONTASKBEGIN_OFFSET))(this);
		}

	};
