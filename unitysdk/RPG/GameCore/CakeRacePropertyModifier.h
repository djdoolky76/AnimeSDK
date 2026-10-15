#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceProperty.h"
#include "unitysdk/RPG/GameCore/CakeRacePropertyOperation.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRacePropertyModifier; }

#define RPG_GAMECORE_CAKERACEPROPERTYMODIFIER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D552560)
#define RPG_GAMECORE_CAKERACEPROPERTYMODIFIER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5523E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRacePropertyModifier_TypeDefinitionIndex = 18329;

	class CakeRacePropertyModifier : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::CakeRaceProperty Property; // 0x10
		::RPG::GameCore::CakeRacePropertyOperation Operation; // 0x14
		::System::Int32 Value; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEPROPERTYMODIFIER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRacePropertyModifier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRacePropertyModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEPROPERTYMODIFIER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
