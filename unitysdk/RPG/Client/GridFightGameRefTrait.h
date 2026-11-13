#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightTrailLayerQuality.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightGameRefData; }
namespace RPG::Client { class GridFightTraitAstropolisInfo; }
namespace RPG::Client { class GridFightTraitConfigBase; }
namespace RPG::Client { class GridFightTraitLayerConfig; }
namespace RPG::GameCore { class GridFightTraitOldLayerConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD49E00)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_GET_ACTIVATEDLAYERCONFIG_OFFSET UNITYSDK_OFFSET(0x1CD57D10)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_GET_ACTIVATEDLAYER_OFFSET UNITYSDK_OFFSET(0x1CD57B70)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_GET_ASTROPOLISINFO_OFFSET UNITYSDK_OFFSET(0x1CD57C30)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1CD57B50)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_GET_EXPIREDACTIVATEDLAYERCONFIG_OFFSET UNITYSDK_OFFSET(0x1CD57D30)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_GET_EXPIREDACTIVATEDLAYER_OFFSET UNITYSDK_OFFSET(0x1CD57CF0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_GET_EXPIREDLAYER_OFFSET UNITYSDK_OFFSET(0x1CD4A030)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_GET_ID_OFFSET UNITYSDK_OFFSET(0x1CD4CDB0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_GET_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0x1CD45DA0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_GET_ISCHANGED_OFFSET UNITYSDK_OFFSET(0x1CD57D50)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x1CD4EB90)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_GET_LAYER_OFFSET UNITYSDK_OFFSET(0x1CD475B0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_GET_QUALITY_OFFSET UNITYSDK_OFFSET(0x1CD57B90)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_SETGAMEREFPARENT_OFFSET UNITYSDK_OFFSET(0x1CD49F20)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_SET_ACTIVATEDLAYERCONFIG_OFFSET UNITYSDK_OFFSET(0x1CD57D20)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_SET_ACTIVATEDLAYER_OFFSET UNITYSDK_OFFSET(0x1CD57B80)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1CD57B60)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_SET_EXPIREDACTIVATEDLAYERCONFIG_OFFSET UNITYSDK_OFFSET(0x1CD57D40)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_SET_EXPIREDACTIVATEDLAYER_OFFSET UNITYSDK_OFFSET(0x1CD57D00)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_SET_EXPIREDLAYER_OFFSET UNITYSDK_OFFSET(0x1CD4A070)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_SET_LAYER_OFFSET UNITYSDK_OFFSET(0x1CD49F70)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT__INITEXPIREDLAYERCONFIGS_OFFSET UNITYSDK_OFFSET(0x1CD57DA0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT__SET_EXPIREDLAYER_B__9_0_OFFSET UNITYSDK_OFFSET(0x1CD57FD0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT__SET_EXPIREDLAYER_B__9_1_OFFSET UNITYSDK_OFFSET(0x1CD57FF0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefTrait_TypeDefinitionIndex = 66357;

	class GridFightGameRefTrait : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightTraitOldLayerConfigRow* _ExpiredActivatedLayerConfig_k__BackingField; // 0x10
		::RPG::Client::GridFightTraitConfigBase* _Config_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::GridFightTraitOldLayerConfigRow*>* _ExpiredLayerConfigs; // 0x20
		::RPG::Client::GridFightTraitLayerConfig* _ActivatedLayerConfig_k__BackingField; // 0x28
		::RPG::Client::GridFightGameRefData* _Parent; // 0x30
		::System::UInt32 _ExpiredActivatedLayer_k__BackingField; // 0x38
		::System::UInt32 _ActivatedLayer_k__BackingField; // 0x3C
		::System::UInt32 _Layer; // 0x40
		::System::UInt32 _ExpiredLayer; // 0x44
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTraitConfigBase* get_Config()
		{
			return ((::RPG::Client::GridFightTraitConfigBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::Client::GridFightTraitConfigBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitConfigBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_SET_CONFIG_OFFSET))(this, a1);
		}

		::System::UInt32 get_Layer()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_GET_LAYER_OFFSET))(this);
		}

		::System::Void set_Layer(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_SET_LAYER_OFFSET))(this, a1);
		}

		::System::UInt32 get_ExpiredLayer()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_GET_EXPIREDLAYER_OFFSET))(this);
		}

		::System::Void set_ExpiredLayer(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_SET_EXPIREDLAYER_OFFSET))(this, a1);
		}

		::System::UInt32 get_ActivatedLayer()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_GET_ACTIVATEDLAYER_OFFSET))(this);
		}

		::System::Void set_ActivatedLayer(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_SET_ACTIVATEDLAYER_OFFSET))(this, a1);
		}

		::RPG::GameCore::GridFightTrailLayerQuality get_Quality()
		{
			return ((::RPG::GameCore::GridFightTrailLayerQuality(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_GET_QUALITY_OFFSET))(this);
		}

		::RPG::Client::GridFightTraitAstropolisInfo* get_AstropolisInfo()
		{
			return ((::RPG::Client::GridFightTraitAstropolisInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_GET_ASTROPOLISINFO_OFFSET))(this);
		}

		::System::UInt32 get_ExpiredActivatedLayer()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_GET_EXPIREDACTIVATEDLAYER_OFFSET))(this);
		}

		::System::Void set_ExpiredActivatedLayer(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_SET_EXPIREDACTIVATEDLAYER_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTraitLayerConfig* get_ActivatedLayerConfig()
		{
			return ((::RPG::Client::GridFightTraitLayerConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_GET_ACTIVATEDLAYERCONFIG_OFFSET))(this);
		}

		::System::Void set_ActivatedLayerConfig(::RPG::Client::GridFightTraitLayerConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitLayerConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_SET_ACTIVATEDLAYERCONFIG_OFFSET))(this, a1);
		}

		::RPG::GameCore::GridFightTraitOldLayerConfigRow* get_ExpiredActivatedLayerConfig()
		{
			return ((::RPG::GameCore::GridFightTraitOldLayerConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_GET_EXPIREDACTIVATEDLAYERCONFIG_OFFSET))(this);
		}

		::System::Void set_ExpiredActivatedLayerConfig(::RPG::GameCore::GridFightTraitOldLayerConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightTraitOldLayerConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_SET_EXPIREDACTIVATEDLAYERCONFIG_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_GET_ID_OFFSET))(this);
		}

		::System::Boolean get_IsActivated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_GET_ISACTIVATED_OFFSET))(this);
		}

		::System::Boolean get_IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_GET_ISEXPIRED_OFFSET))(this);
		}

		::System::Boolean get_IsChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_GET_ISCHANGED_OFFSET))(this);
		}

		::System::Void SetGameRefParent(::RPG::Client::GridFightGameRefData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_SETGAMEREFPARENT_OFFSET))(this, a1);
		}

		::System::Void _InitExpiredLayerConfigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT__INITEXPIREDLAYERCONFIGS_OFFSET))(this);
		}

		::System::Boolean _set_ExpiredLayer_b__9_0(::RPG::GameCore::GridFightTraitOldLayerConfigRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightTraitOldLayerConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT__SET_EXPIREDLAYER_B__9_0_OFFSET))(this, a1);
		}

		::System::Boolean _set_ExpiredLayer_b__9_1(::RPG::GameCore::GridFightTraitOldLayerConfigRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightTraitOldLayerConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT__SET_EXPIREDLAYER_B__9_1_OFFSET))(this, a1);
		}

	};
}
