#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetReportCustomValue; }
namespace RPG::GameCore { class TaskContext; }

#define FBBAACFOEMC_CTOR_OFFSET UNITYSDK_OFFSET(0x156942E0)
#define FBBAACFOEMC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15694310)

	class FBBAACFOEMC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetReportCustomValue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetReportCustomValue*))((::PBYTE)hIl2Cpp + FBBAACFOEMC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBAACFOEMC_ONTASKBEGIN_OFFSET))(this);
		}

	};
