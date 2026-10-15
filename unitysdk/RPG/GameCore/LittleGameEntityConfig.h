#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameEntityType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameComponentConfig; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMEENTITYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7E1600)
#define RPG_GAMECORE_LITTLEGAMEENTITYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7E1450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameEntityConfig_TypeDefinitionIndex = 18839;

	class LittleGameEntityConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LittleGameComponentConfig*>* Components; // 0x10
		::System::String* Name; // 0x18
		::RPG::GameCore::LittleGameEntityType Type; // 0x20
		::System::UInt32 EntityID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEENTITYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameEntityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEENTITYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
