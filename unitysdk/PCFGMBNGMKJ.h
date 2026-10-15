#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RemoveAirline; }
namespace RPG::GameCore { class TaskContext; }

#define PCFGMBNGMKJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBFF7800)
#define PCFGMBNGMKJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFF7830)

inline static constexpr unsigned int PCFGMBNGMKJ_TypeDefinitionIndex = 58384;

	class PCFGMBNGMKJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveAirline* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveAirline*))((::PBYTE)hIl2Cpp + PCFGMBNGMKJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCFGMBNGMKJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
