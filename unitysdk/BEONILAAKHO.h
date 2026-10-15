#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::Client { class MemberData; }
namespace RPG::GameCore { class AdventureModifyTeamPlayerHP; }
namespace RPG::GameCore { class TaskContext; }

#define BEONILAAKHO_CDJLECPHMPB_OFFSET UNITYSDK_OFFSET(0xB15BE70)
#define BEONILAAKHO_CTOR_OFFSET UNITYSDK_OFFSET(0xB15B820)
#define BEONILAAKHO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB15B850)

inline static constexpr unsigned int BEONILAAKHO_TypeDefinitionIndex = 57904;

	class BEONILAAKHO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureModifyTeamPlayerHP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureModifyTeamPlayerHP*))((::PBYTE)hIl2Cpp + BEONILAAKHO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEONILAAKHO_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint CDJLECPHMPB(::RPG::Client::MemberData* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::Client::MemberData*))((::PBYTE)hIl2Cpp + BEONILAAKHO_CDJLECPHMPB_OFFSET))(this, a1);
		}

	};
