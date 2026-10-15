#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RemoveChallengeBossInfoPanelState; }
namespace RPG::GameCore { class TaskContext; }

#define DBPKGNEFIPD_CTOR_OFFSET UNITYSDK_OFFSET(0xE235460)
#define DBPKGNEFIPD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE235490)

inline static constexpr unsigned int DBPKGNEFIPD_TypeDefinitionIndex = 55680;

	class DBPKGNEFIPD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveChallengeBossInfoPanelState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveChallengeBossInfoPanelState*))((::PBYTE)hIl2Cpp + DBPKGNEFIPD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBPKGNEFIPD_ONTASKBEGIN_OFFSET))(this);
		}

	};
