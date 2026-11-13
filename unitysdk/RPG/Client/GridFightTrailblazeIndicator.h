#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPreparationTraitEffectIndicator.h"
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrailblazeEffect; }
namespace RPG::Client { class GridFightTrait; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEINDICATOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3D50D0)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEINDICATOR_GETBGPATH_OFFSET UNITYSDK_OFFSET(0x1D3D8390)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEINDICATOR_GETEFFECT_OFFSET UNITYSDK_OFFSET(0x1D3D8570)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEINDICATOR_GETICONPATH_OFFSET UNITYSDK_OFFSET(0x1D3D82C0)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEINDICATOR_GETSTATEDESC_OFFSET UNITYSDK_OFFSET(0x1D3D8470)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEINDICATOR_GET_CANBUYANYTHING_OFFSET UNITYSDK_OFFSET(0x1D3D8600)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEINDICATOR_GET_EFFECTID_OFFSET UNITYSDK_OFFSET(0x1D3D8260)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEINDICATOR_GET_PANELSCRIPTPATH_OFFSET UNITYSDK_OFFSET(0x1D3D82B0)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEINDICATOR_GET_SORTORDER_OFFSET UNITYSDK_OFFSET(0x1D3D85B0)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEINDICATOR_GET_TRAITID_OFFSET UNITYSDK_OFFSET(0x1D3D8210)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEINDICATOR_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0x1D3D8500)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEINDICATOR_ONUNLOCKPAMKING_OFFSET UNITYSDK_OFFSET(0x1D3D8820)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEINDICATOR_UPDATESTATE_OFFSET UNITYSDK_OFFSET(0x1D3D64F0)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEINDICATOR__CANBUYANYTHING_OFFSET UNITYSDK_OFFSET(0x1D3D8660)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTrailblazeIndicator_TypeDefinitionIndex = 67290;

	class GridFightTrailblazeIndicator : public ::RPG::Client::GridFightPreparationTraitEffectIndicator
	{
	public:
		::RPG::Client::GridFightTrailblazeEffect* _Effect; // 0x18
		::System::String* _PanelScriptPath_k__BackingField; // 0x20
		::RPG::Client::GridFightTrait* _Trait; // 0x28
		::System::Void _ctor(::RPG::Client::GridFightTrait* a1, ::RPG::Client::GridFightTrailblazeEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTrait*, ::RPG::Client::GridFightTrailblazeEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEINDICATOR_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_TraitID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEINDICATOR_GET_TRAITID_OFFSET))(this);
		}

		::System::UInt32 get_EffectID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEINDICATOR_GET_EFFECTID_OFFSET))(this);
		}

		::System::String* get_PanelScriptPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEINDICATOR_GET_PANELSCRIPTPATH_OFFSET))(this);
		}

		::System::String* GetIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEINDICATOR_GETICONPATH_OFFSET))(this);
		}

		::System::String* GetBgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEINDICATOR_GETBGPATH_OFFSET))(this);
		}

		::System::String* GetStateDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEINDICATOR_GETSTATEDESC_OFFSET))(this);
		}

		::System::Boolean IsActivated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEINDICATOR_ISACTIVATED_OFFSET))(this);
		}

		::RPG::Client::GridFightTrailblazeEffect* GetEffect()
		{
			return ((::RPG::Client::GridFightTrailblazeEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEINDICATOR_GETEFFECT_OFFSET))(this);
		}

		::System::UInt32 get_SortOrder()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEINDICATOR_GET_SORTORDER_OFFSET))(this);
		}

		::System::Boolean get_CanBuyAnything()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEINDICATOR_GET_CANBUYANYTHING_OFFSET))(this);
		}

		::System::Void UpdateState(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEINDICATOR_UPDATESTATE_OFFSET))(this, a1);
		}

		::System::Void OnUnlockPamking(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEINDICATOR_ONUNLOCKPAMKING_OFFSET))(this, a1);
		}

		::System::Boolean _CanBuyAnything()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEINDICATOR__CANBUYANYTHING_OFFSET))(this);
		}

	};
}
