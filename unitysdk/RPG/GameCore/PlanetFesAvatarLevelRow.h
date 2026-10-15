#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesAvatarLevelRow; }
namespace RPG::GameCore { class PlanetFesBigInt; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PLANETFESAVATARLEVELROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D921530)
#define RPG_GAMECORE_PLANETFESAVATARLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9213A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesAvatarLevelRow_TypeDefinitionIndex = 12193;

	class PlanetFesAvatarLevelRow : public ::System::Object
	{
	public:
		::RPG::GameCore::PlanetFesBigInt* CostNum; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* GrantItemList; // 0x18
		::RPG::GameCore::PlanetFesBigInt* IncomeNum; // 0x20
		::System::UInt32 Level; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARLEVELROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlanetFesAvatarLevelRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlanetFesAvatarLevelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARLEVELROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
