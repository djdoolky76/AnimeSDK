#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMagicConstDynamicValueKeys; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUEMAGICCONSTDYNAMICVALUEKEYS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A6300)
#define RPG_GAMECORE_ROGUEMAGICCONSTDYNAMICVALUEKEYS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9A6160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicConstDynamicValueKeys_TypeDefinitionIndex = 17129;

	class RogueMagicConstDynamicValueKeys : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* ScepterID; // 0x10
		::System::String* ScepterActiveUnitTriggerCount; // 0x18
		::System::String* MagicUnitLevel; // 0x20
		::System::String* MagicUnitIndex; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONSTDYNAMICVALUEKEYS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMagicConstDynamicValueKeys* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMagicConstDynamicValueKeys*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONSTDYNAMICVALUEKEYS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
