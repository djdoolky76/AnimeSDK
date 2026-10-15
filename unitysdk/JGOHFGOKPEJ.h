#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LIICPMNHBPP.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
class FHPMJLMOMFL;
class GEMBPMMMGBP;
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitPlanData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JGOHFGOKPEJ_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB1A68D0)
#define JGOHFGOKPEJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB1A6950)
#define JGOHFGOKPEJ_GET__MAX_DFS_COUNT_OFFSET UNITYSDK_OFFSET(0xB1A6840)
#define JGOHFGOKPEJ_HGFMHGPIJFJ_OFFSET UNITYSDK_OFFSET(0xB1A6AA0)
#define JGOHFGOKPEJ_HHCLAKMGAIC_OFFSET UNITYSDK_OFFSET(0xB1A7130)
#define JGOHFGOKPEJ_NCGCEKIGKBD_OFFSET UNITYSDK_OFFSET(0xB1A6D30)
#define JGOHFGOKPEJ_NHDKBBPMAPK_OFFSET UNITYSDK_OFFSET(0xB1A6850)

	class JGOHFGOKPEJ : public ::LIICPMNHBPP
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RelicType, ::System::UInt32>* HDNODHCJDAM; // 0x38
		::System::UInt32 __MAX_DFS_COUNT_k__BackingField; // 0x40
		::System::Void _ctor(::FHPMJLMOMFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHPMJLMOMFL*))((::PBYTE)hIl2Cpp + JGOHFGOKPEJ_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get__MAX_DFS_COUNT()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGOHFGOKPEJ_GET__MAX_DFS_COUNT_OFFSET))(this);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* NHDKBBPMAPK()
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGOHFGOKPEJ_NHDKBBPMAPK_OFFSET))(this);
		}

		static ::GEMBPMMMGBP* BPLPBPMEODA(::FHPMJLMOMFL* a1)
		{
			return ((::GEMBPMMMGBP*(*)(::FHPMJLMOMFL*))((::PBYTE)hIl2Cpp + JGOHFGOKPEJ_BPLPBPMEODA_OFFSET))(a1);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* HGFMHGPIJFJ()
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGOHFGOKPEJ_HGFMHGPIJFJ_OFFSET))(this);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* NCGCEKIGKBD(::RPG::GameCore::RelicType a1, ::RPG::GameCore::RelicType a2)
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*(*)(::PVOID, ::RPG::GameCore::RelicType, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + JGOHFGOKPEJ_NCGCEKIGKBD_OFFSET))(this, a1, a2);
		}

		::System::Boolean HHCLAKMGAIC(::RPG::Client::RelicItemData* a1, ::RPG::GameCore::RelicType a2, ::RPG::GameCore::RelicType a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*, ::RPG::GameCore::RelicType, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + JGOHFGOKPEJ_HHCLAKMGAIC_OFFSET))(this, a1, a2, a3);
		}

	};
