#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ResetCharacterCustomTeamFormation; }
namespace RPG::GameCore { class TaskContext; }

#define AHNOBAFJJBH_CTOR_OFFSET UNITYSDK_OFFSET(0x19B298F0)
#define AHNOBAFJJBH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19B29920)

inline static constexpr unsigned int AHNOBAFJJBH_TypeDefinitionIndex = 56498;

	class AHNOBAFJJBH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetCharacterCustomTeamFormation* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetCharacterCustomTeamFormation*))((::PBYTE)hIl2Cpp + AHNOBAFJJBH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHNOBAFJJBH_ONTASKBEGIN_OFFSET))(this);
		}

	};
