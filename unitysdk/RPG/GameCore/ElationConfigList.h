#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElationCharacterUIConfig; }
namespace RPG::GameCore { class ElationConfig; }
namespace RPG::GameCore { class ElationConfigList; }

#define RPG_GAMECORE_ELATIONCONFIGLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D604D40)
#define RPG_GAMECORE_ELATIONCONFIGLIST_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D604C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElationConfigList_TypeDefinitionIndex = 16543;

	class ElationConfigList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ElationConfig*>* ConfigList; // 0x10
		::RPG::GameCore::ElationCharacterUIConfig* UIConfig; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONCONFIGLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElationConfigList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElationConfigList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONCONFIGLIST_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
