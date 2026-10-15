#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ResetAbilityStartTimeStamp; }

#define RPG_GAMECORE_RESETABILITYSTARTTIMESTAMP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D95C190)
#define RPG_GAMECORE_RESETABILITYSTARTTIMESTAMP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D95C1A0)
#define RPG_GAMECORE_RESETABILITYSTARTTIMESTAMP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D95C160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetAbilityStartTimeStamp_TypeDefinitionIndex = 22693;

	class ResetAbilityStartTimeStamp : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ResetTo; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETABILITYSTARTTIMESTAMP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResetAbilityStartTimeStamp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResetAbilityStartTimeStamp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETABILITYSTARTTIMESTAMP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResetAbilityStartTimeStamp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResetAbilityStartTimeStamp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETABILITYSTARTTIMESTAMP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
