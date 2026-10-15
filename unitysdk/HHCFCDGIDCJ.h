#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdventurePauseTeamDataRefresh; }
namespace RPG::GameCore { class TaskContext; }

#define HHCFCDGIDCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15CA7C60)
#define HHCFCDGIDCJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15CA7C90)

inline static constexpr unsigned int HHCFCDGIDCJ_TypeDefinitionIndex = 57908;

	class HHCFCDGIDCJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventurePauseTeamDataRefresh* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventurePauseTeamDataRefresh*))((::PBYTE)hIl2Cpp + HHCFCDGIDCJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCFCDGIDCJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
