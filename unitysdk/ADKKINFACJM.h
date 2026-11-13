#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetupPropAnchorInRadius; }
namespace RPG::GameCore { class TaskContext; }

#define ADKKINFACJM_CTOR_OFFSET UNITYSDK_OFFSET(0x182B14C0)
#define ADKKINFACJM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x182B14F0)

inline static constexpr unsigned int ADKKINFACJM_TypeDefinitionIndex = 59862;

	class ADKKINFACJM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetupPropAnchorInRadius* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetupPropAnchorInRadius*))((::PBYTE)hIl2Cpp + ADKKINFACJM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKKINFACJM_ONTASKBEGIN_OFFSET))(this);
		}

	};
