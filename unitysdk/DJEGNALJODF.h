#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KOENIOPIGHK;
class NHPAANINLPK;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class RecommendRelicGrowthGuideItem; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitPlanData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DJEGNALJODF_CTOR_OFFSET UNITYSDK_OFFSET(0xF22A070)
#define DJEGNALJODF_DCFAKMPMNFJ_OFFSET UNITYSDK_OFFSET(0xF22A2E0)
#define DJEGNALJODF_FPGFDAOLNOC_OFFSET UNITYSDK_OFFSET(0xF22AAA0)
#define DJEGNALJODF_PENLOOKMGKI_OFFSET UNITYSDK_OFFSET(0xF22A6B0)
#define DJEGNALJODF_PPGMAACEAPL_OFFSET UNITYSDK_OFFSET(0xF22ACA0)

inline static constexpr unsigned int DJEGNALJODF_TypeDefinitionIndex = 65583;

	class DJEGNALJODF : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::KOENIOPIGHK*>* OOPCLGFHEJF; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJEGNALJODF_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::NHPAANINLPK*>* DCFAKMPMNFJ(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Collections::Generic::List_1<::NHPAANINLPK*>*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + DJEGNALJODF_DCFAKMPMNFJ_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::NHPAANINLPK*>* PENLOOKMGKI(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Collections::Generic::List_1<::NHPAANINLPK*>*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + DJEGNALJODF_PENLOOKMGKI_OFFSET))(this, a1);
		}

		::RPG::Client::RecommendRelicGrowthGuideItem* PPGMAACEAPL(::RPG::AvatarSystem::IAvatar* a1, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* a2)
		{
			return ((::RPG::Client::RecommendRelicGrowthGuideItem*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*))((::PBYTE)hIl2Cpp + DJEGNALJODF_PPGMAACEAPL_OFFSET))(this, a1, a2);
		}

		::RPG::Client::RecommendRelicGrowthGuideItem* FPGFDAOLNOC(::RPG::AvatarSystem::IAvatar* a1, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* a2)
		{
			return ((::RPG::Client::RecommendRelicGrowthGuideItem*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*))((::PBYTE)hIl2Cpp + DJEGNALJODF_FPGFDAOLNOC_OFFSET))(this, a1, a2);
		}

	};
