#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByRogueLayer; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUELAYER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA7C4D0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUELAYER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA7C4E0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUELAYER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA7C4A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueLayer_TypeDefinitionIndex = 21789;

	class SetDynamicValueByRogueLayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUELAYER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRogueLayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRogueLayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUELAYER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRogueLayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRogueLayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUELAYER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
