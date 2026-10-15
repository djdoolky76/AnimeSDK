#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGamePropertyEntityVarBindingMap; }

#define RPG_GAMECORE_LITTLEGAMEPROPERTYENTITYVARBINDINGMAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7E58C0)
#define RPG_GAMECORE_LITTLEGAMEPROPERTYENTITYVARBINDINGMAP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7E5880)

namespace RPG::GameCore
{
	class LittleGamePropertyEntityVarBindingMap : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEPROPERTYENTITYVARBINDINGMAP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGamePropertyEntityVarBindingMap* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGamePropertyEntityVarBindingMap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEPROPERTYENTITYVARBINDINGMAP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
