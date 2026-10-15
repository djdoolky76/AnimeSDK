#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"
class CENEJCKEFHJ;
class IOMECEHLPMF;
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitResultRelicInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IOMECEHLPMF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x16512160)
#define IOMECEHLPMF_CTOR_OFFSET UNITYSDK_OFFSET(0x165121D0)
#define IOMECEHLPMF_EPJAEILEOGN_OFFSET UNITYSDK_OFFSET(0x16512300)
#define IOMECEHLPMF_GCKBLOBMHMG_OFFSET UNITYSDK_OFFSET(0x165121E0)

inline static constexpr unsigned int IOMECEHLPMF_TypeDefinitionIndex = 74435;

	class IOMECEHLPMF : public ::System::Object
	{
	public:
		::CENEJCKEFHJ* GANLOCFFMEF; // 0x10
		::System::Void _ctor(::CENEJCKEFHJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CENEJCKEFHJ*))((::PBYTE)hIl2Cpp + IOMECEHLPMF_CTOR_OFFSET))(this, a1);
		}

		static ::IOMECEHLPMF* BPLPBPMEODA(::CENEJCKEFHJ* a1)
		{
			return ((::IOMECEHLPMF*(*)(::CENEJCKEFHJ*))((::PBYTE)hIl2Cpp + IOMECEHLPMF_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>* GCKBLOBMHMG(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a1, ::RPG::GameCore::RelicType a2, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* a3)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*, ::RPG::GameCore::RelicType, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + IOMECEHLPMF_GCKBLOBMHMG_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>* EPJAEILEOGN(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a1, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + IOMECEHLPMF_EPJAEILEOGN_OFFSET))(this, a1, a2);
		}

	};
