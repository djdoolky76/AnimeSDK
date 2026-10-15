#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesUnitType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesBigInt; }

#define RPG_GAMECORE_PLANETFESBIGINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D923BA0)
#define RPG_GAMECORE_PLANETFESBIGINT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D921540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesBigInt_TypeDefinitionIndex = 12179;

	class PlanetFesBigInt : public ::System::Object
	{
	public:
		::RPG::GameCore::PlanetFesUnitType unit; // 0x10
		::System::UInt32 base_value; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESBIGINT_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlanetFesBigInt* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlanetFesBigInt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESBIGINT_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
