#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BoolEx.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/NumBarSubType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class NumBarTypeConfig; }
namespace System { class String; }

#define RPG_GAMECORE_NUMBARTYPECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8B0B20)
#define RPG_GAMECORE_NUMBARTYPECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8B09B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NumBarTypeConfig_TypeDefinitionIndex = 22736;

	class NumBarTypeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::GameCore::BoolEx ShowIcon; // 0x18
		::RPG::GameCore::NumBarSubType SubType; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NUMBARTYPECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::NumBarTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NumBarTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NUMBARTYPECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
