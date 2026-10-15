#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SimpleTalkListConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client { class LimaoNewsDutyCheckGreetingBranch; }

#define RPG_CLIENT_LIMAONEWSDUTYCHECKGREETINGBRANCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D31FC60)
#define RPG_CLIENT_LIMAONEWSDUTYCHECKGREETINGBRANCH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D31FC70)
#define RPG_CLIENT_LIMAONEWSDUTYCHECKGREETINGBRANCH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D31FC30)

namespace RPG::Client
{
	inline static constexpr unsigned int LimaoNewsDutyCheckGreetingBranch_TypeDefinitionIndex = 10245;

	class LimaoNewsDutyCheckGreetingBranch : public ::RPG::GameCore::SimpleTalkListConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWSDUTYCHECKGREETINGBRANCH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::LimaoNewsDutyCheckGreetingBranch* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LimaoNewsDutyCheckGreetingBranch*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWSDUTYCHECKGREETINGBRANCH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::LimaoNewsDutyCheckGreetingBranch* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LimaoNewsDutyCheckGreetingBranch*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWSDUTYCHECKGREETINGBRANCH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
