#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJDFGMMMCMI.h"
#include "unitysdk/RPG/Client/GridFightUpdateSummarizer.h"
class AOFOEOIJEHF;
class FLGMGNEOFBH;
namespace RPG::Client { class GridFightBonusConsumableItemData; }
namespace RPG::Client { class GridFightTraitAstropolisEffect; }

#define RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISEFFECT_GRIDFIGHTTRAITASTROPOLISREWARDSUMMARIZER_CTOR_OFFSET UNITYSDK_OFFSET(0xDCC4E90)
#define RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISEFFECT_GRIDFIGHTTRAITASTROPOLISREWARDSUMMARIZER_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0xDCC4F40)
#define RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISEFFECT_GRIDFIGHTTRAITASTROPOLISREWARDSUMMARIZER_UPDATEADDITEM_OFFSET UNITYSDK_OFFSET(0xDCC4F90)
#define RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISEFFECT_GRIDFIGHTTRAITASTROPOLISREWARDSUMMARIZER__CREATEBONUSDATA_OFFSET UNITYSDK_OFFSET(0xDCC51C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitAstropolisEffect_GridFightTraitAstropolisRewardSummarizer_TypeDefinitionIndex = 67229;

	class GridFightTraitAstropolisEffect_GridFightTraitAstropolisRewardSummarizer : public ::RPG::Client::GridFightUpdateSummarizer
	{
	public:
		::RPG::Client::GridFightTraitAstropolisEffect* _TraitEffect; // 0x10
		::System::Void _ctor(::RPG::Client::GridFightTraitAstropolisEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitAstropolisEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISEFFECT_GRIDFIGHTTRAITASTROPOLISREWARDSUMMARIZER_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISEFFECT_GRIDFIGHTTRAITASTROPOLISREWARDSUMMARIZER_ISCONCERNEDWITH_OFFSET))(this, a1);
		}

		::System::Void UpdateAddItem(::AOFOEOIJEHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFOEOIJEHF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISEFFECT_GRIDFIGHTTRAITASTROPOLISREWARDSUMMARIZER_UPDATEADDITEM_OFFSET))(this, a1);
		}

		static ::RPG::Client::GridFightBonusConsumableItemData* _CreateBonusData(::FLGMGNEOFBH* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::GridFightBonusConsumableItemData*(*)(::FLGMGNEOFBH*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISEFFECT_GRIDFIGHTTRAITASTROPOLISREWARDSUMMARIZER__CREATEBONUSDATA_OFFSET))(a1, a2, a3);
		}

	};
}
