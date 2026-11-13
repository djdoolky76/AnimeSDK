#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PlanetFesLandType.h"
#include "unitysdk/RPG/GameCore/PlanetFesStandType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesBigInt; }
namespace RPG::GameCore { class PlanetFesLandRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PLANETFESLANDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE67E80)
#define RPG_GAMECORE_PLANETFESLANDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE67AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesLandRow_TypeDefinitionIndex = 12244;

	class PlanetFesLandRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* UnlockIDList; // 0x10
		::RPG::GameCore::PlanetFesBigInt* PriceNum; // 0x18
		::System::String* Pic; // 0x20
		::System::String* CargoIcon; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* GrantItemList; // 0x30
		::RPG::Client::TextID Description; // 0x38
		::RPG::Client::TextID Name; // 0x48
		::RPG::GameCore::PlanetFesLandType LandType; // 0x58
		::RPG::GameCore::PlanetFesStandType PlanetType; // 0x5C
		::System::UInt32 ID; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLANDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlanetFesLandRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlanetFesLandRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLANDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
