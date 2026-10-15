#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvForceHideBillboard; }
namespace RPG::GameCore { class TaskContext; }

#define FIHAGHDNPLM_CTOR_OFFSET UNITYSDK_OFFSET(0x1579A6D0)
#define FIHAGHDNPLM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1579A700)

inline static constexpr unsigned int FIHAGHDNPLM_TypeDefinitionIndex = 52375;

	class FIHAGHDNPLM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvForceHideBillboard* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvForceHideBillboard*))((::PBYTE)hIl2Cpp + FIHAGHDNPLM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHAGHDNPLM_ONTASKBEGIN_OFFSET))(this);
		}

	};
