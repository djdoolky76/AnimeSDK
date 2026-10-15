#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameLevelVarBindingType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LGameEntityRef; }
namespace RPG::GameCore { class LevelEntityRef; }
namespace RPG::GameCore { class LittleGameLevelVarBinding; }
namespace RPG::GameCore { class LittleGameLevelVarBindingExtraInfo; }
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMELEVELVARBINDING_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B65C0)
#define RPG_GAMECORE_LITTLEGAMELEVELVARBINDING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7B6390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameLevelVarBinding_TypeDefinitionIndex = 18894;

	class LittleGameLevelVarBinding : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* LevelVarName; // 0x10
		::RPG::GameCore::LittleGameLevelVarBindingType BindingType; // 0x18
		::System::Int16 ShortValue; // 0x1C
		::System::Byte _padding0[0x2];
		::RPG::GameCore::LGameEntityRef* EntityRefValue; // 0x20
		::RPG::GameCore::LevelEntityRef* LevelEntityRefValue; // 0x28
		::System::String* GroupPropertyName; // 0x30
		::RPG::GameCore::LittleGameLevelVarBindingExtraInfo* ExtraInfo; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARBINDING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameLevelVarBinding* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameLevelVarBinding*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARBINDING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
