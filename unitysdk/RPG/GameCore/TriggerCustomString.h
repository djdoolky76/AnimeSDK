#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TriggerCustomString; }

#define RPG_GAMECORE_TRIGGERCUSTOMSTRING_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC180C0)
#define RPG_GAMECORE_TRIGGERCUSTOMSTRING_GET_ISCLIENTONLY_OFFSET UNITYSDK_OFFSET(0x1DC182E0)
#define RPG_GAMECORE_TRIGGERCUSTOMSTRING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC180D0)
#define RPG_GAMECORE_TRIGGERCUSTOMSTRING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC17F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerCustomString_TypeDefinitionIndex = 23789;

	class TriggerCustomString : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* CustomString; // 0x18
		// static const ::System::String* NORMAL_END_STORY_SIGNAL; // 0x0
		// static const ::System::String* FORCE_END_STORY_SIGNAL; // 0x0
		// static const ::System::String* EARLY_OPEN_ENDMASK; // 0x0
		// static const ::System::String* PERFORMANCE_REPLAY_END; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERCUSTOMSTRING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerCustomString* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerCustomString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERCUSTOMSTRING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerCustomString* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerCustomString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERCUSTOMSTRING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Boolean get_IsClientOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERCUSTOMSTRING_GET_ISCLIENTONLY_OFFSET))(this);
		}

	};
}
