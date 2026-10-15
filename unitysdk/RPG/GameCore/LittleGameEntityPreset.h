#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameEntityType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameComponentConfig; }
namespace RPG::GameCore { class LittleGameEntityPreset; }
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMEENTITYPRESET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B42C0)
#define RPG_GAMECORE_LITTLEGAMEENTITYPRESET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7B4090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameEntityPreset_TypeDefinitionIndex = 18922;

	class LittleGameEntityPreset : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LittleGameComponentConfig*>* Components; // 0x10
		::Il2CppArray<::RPG::GameCore::LittleGameComponentConfig*>* FixedComponents; // 0x18
		::System::String* Name; // 0x20
		::RPG::GameCore::LittleGameEntityType Type; // 0x28
		::System::Boolean IsSupportBrush; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEENTITYPRESET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameEntityPreset* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameEntityPreset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEENTITYPRESET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
