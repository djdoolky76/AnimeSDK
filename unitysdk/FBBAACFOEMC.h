#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetReportCustomValue; }
namespace RPG::GameCore { class TaskContext; }

#define FBBAACFOEMC_CTOR_OFFSET UNITYSDK_OFFSET(0x156884C0)
#define FBBAACFOEMC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x156884F0)

inline static constexpr unsigned int FBBAACFOEMC_TypeDefinitionIndex = 55559;

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
