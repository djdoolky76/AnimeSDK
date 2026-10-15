#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class OpenTrainPartyBuildUI; }
namespace RPG::GameCore { class TaskContext; }

#define LCMKGMNPOMB_CTOR_OFFSET UNITYSDK_OFFSET(0xB612D90)
#define LCMKGMNPOMB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB612DC0)

inline static constexpr unsigned int LCMKGMNPOMB_TypeDefinitionIndex = 53416;

	class LCMKGMNPOMB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpenTrainPartyBuildUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpenTrainPartyBuildUI*))((::PBYTE)hIl2Cpp + LCMKGMNPOMB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCMKGMNPOMB_ONTASKBEGIN_OFFSET))(this);
		}

	};
