#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightTraitEffectType.h"
#include "unitysdk/RPG/GameCore/GridFightTraitRemarkPosition.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class GridFightTraitLayerConfig; }
namespace RPG::Client { class GridFightTraitRemarkLineConfig; }
namespace RPG::GameCore { class GridFightTraitRemarkRow; }
namespace RPG::GameCore { class GridFightTraitVideoConfigRow; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE_CONTAINSEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x1D3F3B30)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F2B00)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE_GETACTIVATEDLAYER_OFFSET UNITYSDK_OFFSET(0x1D3F35F0)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE_GETACTIVETEDLAYERCONFIG_OFFSET UNITYSDK_OFFSET(0x1D3DF6F0)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE_GETLAYERCONFIG_OFFSET UNITYSDK_OFFSET(0x1D3F34F0)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE_GETLAYERS_OFFSET UNITYSDK_OFFSET(0x1D3DB3F0)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE_GETTRAITBACKREMARKLINECONFIGS_OFFSET UNITYSDK_OFFSET(0x1D3F3690)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE_GETTRAITFRONTREMARKLINECONFIGS_OFFSET UNITYSDK_OFFSET(0x1D3F3AE0)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE_GETTRAITREMARKLINECONFIGROWS_OFFSET UNITYSDK_OFFSET(0x1D3F3D00)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE_GET_LAYERCONFIGS_OFFSET UNITYSDK_OFFSET(0x1D3D3240)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE_GET_VIDEODESC_OFFSET UNITYSDK_OFFSET(0x1D3F4130)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE_GET_VIDEOID_OFFSET UNITYSDK_OFFSET(0x1D3F4000)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE_GET__VIDEOROW_OFFSET UNITYSDK_OFFSET(0x1D3F4060)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE__GETTRAITREMARKLINECONFIGS_OFFSET UNITYSDK_OFFSET(0x1D3F36E0)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE__INITSHAREDLAYERS_OFFSET UNITYSDK_OFFSET(0x1D3F3270)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitConfigBase_TypeDefinitionIndex = 67343;

	class GridFightTraitConfigBase : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitLayerConfig*>* _layerConfigs; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE_CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::GridFightTraitLayerConfig*>* get_LayerConfigs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::GridFightTraitLayerConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE_GET_LAYERCONFIGS_OFFSET))(this);
		}

		::System::Void _InitSharedLayers(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE__INITSHAREDLAYERS_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTraitLayerConfig* GetLayerConfig(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightTraitLayerConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE_GETLAYERCONFIG_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetLayers()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE_GETLAYERS_OFFSET))(this);
		}

		::RPG::Client::GridFightTraitLayerConfig* GetActivetedLayerConfig(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightTraitLayerConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE_GETACTIVETEDLAYERCONFIG_OFFSET))(this, a1);
		}

		::System::UInt32 GetActivatedLayer(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE_GETACTIVATEDLAYER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitRemarkLineConfig*>* GetTraitBackRemarkLineConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitRemarkLineConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE_GETTRAITBACKREMARKLINECONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitRemarkLineConfig*>* GetTraitFrontRemarkLineConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitRemarkLineConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE_GETTRAITFRONTREMARKLINECONFIGS_OFFSET))(this);
		}

		::System::Boolean ContainsEffectType(::RPG::GameCore::GridFightTraitEffectType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightTraitEffectType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE_CONTAINSEFFECTTYPE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitRemarkLineConfig*>* _GetTraitRemarkLineConfigs(::RPG::GameCore::GridFightTraitRemarkPosition a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitRemarkLineConfig*>*(*)(::PVOID, ::RPG::GameCore::GridFightTraitRemarkPosition))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE__GETTRAITREMARKLINECONFIGS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GridFightTraitRemarkRow*>* GetTraitRemarkLineConfigRows(::RPG::GameCore::GridFightTraitRemarkPosition a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GridFightTraitRemarkRow*>*(*)(::PVOID, ::RPG::GameCore::GridFightTraitRemarkPosition))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE_GETTRAITREMARKLINECONFIGROWS_OFFSET))(this, a1);
		}

		::System::UInt32 get_VideoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE_GET_VIDEOID_OFFSET))(this);
		}

		::RPG::Client::TextID get_VideoDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE_GET_VIDEODESC_OFFSET))(this);
		}

		::RPG::GameCore::GridFightTraitVideoConfigRow* get__VideoRow()
		{
			return ((::RPG::GameCore::GridFightTraitVideoConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE_GET__VIDEOROW_OFFSET))(this);
		}

	};
}
