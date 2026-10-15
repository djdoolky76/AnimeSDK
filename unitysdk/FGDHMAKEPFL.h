#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/RankType.h"
#include "unitysdk/System/Object.h"
class FGDHMAKEPFL;
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }
namespace RPG::GameCore { class AvatarRelicRecommendRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FGDHMAKEPFL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15757970)
#define FGDHMAKEPFL_CTOR_OFFSET UNITYSDK_OFFSET(0x15757A00)
#define FGDHMAKEPFL_GEDHPMBLANO_OFFSET UNITYSDK_OFFSET(0x15757DA0)
#define FGDHMAKEPFL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15757A10)
#define FGDHMAKEPFL_NOKCDLMPKBF_OFFSET UNITYSDK_OFFSET(0x15757AF0)
#define FGDHMAKEPFL_PAMCFLCNAPG_OFFSET UNITYSDK_OFFSET(0x15757B60)

inline static constexpr unsigned int FGDHMAKEPFL_TypeDefinitionIndex = 74429;

	class FGDHMAKEPFL : public ::System::Object
	{
	public:
		::RPG::GameCore::AvatarRelicRecommendRow* AAGOPEHGBIN; // 0x10
		// static const ::System::Object CANCFJBPFLI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGDHMAKEPFL_CTOR_OFFSET))(this);
		}

		static ::FGDHMAKEPFL* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::FGDHMAKEPFL*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FGDHMAKEPFL_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void KPJGDHLENIP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FGDHMAKEPFL_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Boolean NOKCDLMPKBF(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FGDHMAKEPFL_NOKCDLMPKBF_OFFSET))(this, a1);
		}

		::RPG::Client::RelicSmartSuit::RankType PAMCFLCNAPG(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* a1)
		{
			return ((::RPG::Client::RelicSmartSuit::RankType(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + FGDHMAKEPFL_PAMCFLCNAPG_OFFSET))(this, a1);
		}

		::System::Single GEDHPMBLANO(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + FGDHMAKEPFL_GEDHPMBLANO_OFFSET))(this, a1);
		}

	};
