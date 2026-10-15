#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class WaitForWithDuration; }

#define RPG_GAMECORE_WAITFORWITHDURATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6B670)
#define RPG_GAMECORE_WAITFORWITHDURATION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC6B6D0)
#define RPG_GAMECORE_WAITFORWITHDURATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC6B5F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitForWithDuration_TypeDefinitionIndex = 23793;

	class WaitForWithDuration : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PredicateConfig* Predicate; // 0x18
		::RPG::GameCore::DynamicFloat* Duration; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFORWITHDURATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitForWithDuration* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitForWithDuration*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFORWITHDURATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitForWithDuration* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitForWithDuration*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFORWITHDURATION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
