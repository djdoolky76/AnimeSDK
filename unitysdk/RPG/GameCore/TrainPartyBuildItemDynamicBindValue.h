#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyBuildItemDynamicBindValue; }

#define RPG_GAMECORE_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC2E270)
#define RPG_GAMECORE_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC2E280)
#define RPG_GAMECORE_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC2DF10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyBuildItemDynamicBindValue_TypeDefinitionIndex = 16266;

	class TrainPartyBuildItemDynamicBindValue : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyBuildItemDynamicBindValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyBuildItemDynamicBindValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyBuildItemDynamicBindValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyBuildItemDynamicBindValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
