#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropertyFormationValue; }
namespace System { class String; }

#define RPG_GAMECORE_PROPERTYFORMATIONVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D95CA00)
#define RPG_GAMECORE_PROPERTYFORMATIONVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D95C8C0)

namespace RPG::GameCore
{
	class PropertyFormationValue : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* ValueName; // 0x10
		::RPG::GameCore::AbilityProperty Property; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPERTYFORMATIONVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropertyFormationValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropertyFormationValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPERTYFORMATIONVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
