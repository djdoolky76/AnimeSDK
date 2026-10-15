#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class OpticalIllusionSwitchCamera; }
namespace RPG::GameCore { class TaskContext; }

#define LGAFPGHEPPP_CTOR_OFFSET UNITYSDK_OFFSET(0xB68BCC0)
#define LGAFPGHEPPP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB68BCF0)

inline static constexpr unsigned int LGAFPGHEPPP_TypeDefinitionIndex = 53045;

	class LGAFPGHEPPP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpticalIllusionSwitchCamera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpticalIllusionSwitchCamera*))((::PBYTE)hIl2Cpp + LGAFPGHEPPP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGAFPGHEPPP_ONTASKBEGIN_OFFSET))(this);
		}

	};
