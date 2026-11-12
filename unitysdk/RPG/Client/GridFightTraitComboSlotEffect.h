#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitEffectBase.h"
namespace RPG::Client { class GridFightTrait; }
namespace RPG::GameCore { class GridFightTraitSPBattleAreaRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITCOMBOSLOTEFFECT_CHECKSLOTISEFFECTED_OFFSET UNITYSDK_OFFSET(0xDCCF510)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMBOSLOTEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0xDCCF1D0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMBOSLOTEFFECT_GETSPECIALSLOTLIST_OFFSET UNITYSDK_OFFSET(0xDCCF460)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMBOSLOTEFFECT_GET_EFFECTSLOTLIST_OFFSET UNITYSDK_OFFSET(0xDCCF630)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMBOSLOTEFFECT_GET__AREACONFIG_OFFSET UNITYSDK_OFFSET(0xDCCF680)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMBOSLOTEFFECT_ONTRAITCHANGE_OFFSET UNITYSDK_OFFSET(0xDCCF2D0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMBOSLOTEFFECT_SET__AREACONFIG_OFFSET UNITYSDK_OFFSET(0xDCCF690)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitComboSlotEffect_TypeDefinitionIndex = 67234;

	class GridFightTraitComboSlotEffect : public ::RPG::Client::GridFightTraitEffectBase
	{
	public:
		::RPG::GameCore::GridFightTraitSPBattleAreaRow* __AreaConfig_k__BackingField; // 0x30
		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::GridFightTrait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMBOSLOTEFFECT_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTraitChange(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMBOSLOTEFFECT_ONTRAITCHANGE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetSpecialSlotList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMBOSLOTEFFECT_GETSPECIALSLOTLIST_OFFSET))(this);
		}

		::System::Boolean CheckSlotIsEffected(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMBOSLOTEFFECT_CHECKSLOTISEFFECTED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_EffectSlotList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMBOSLOTEFFECT_GET_EFFECTSLOTLIST_OFFSET))(this);
		}

		::RPG::GameCore::GridFightTraitSPBattleAreaRow* get__AreaConfig()
		{
			return ((::RPG::GameCore::GridFightTraitSPBattleAreaRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMBOSLOTEFFECT_GET__AREACONFIG_OFFSET))(this);
		}

		::System::Void set__AreaConfig(::RPG::GameCore::GridFightTraitSPBattleAreaRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightTraitSPBattleAreaRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMBOSLOTEFFECT_SET__AREACONFIG_OFFSET))(this, a1);
		}

	};
}
