#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPreparationTraitEffectIndicator.h"
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitChimeraTraitEffect; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTTRAITCHIMERAINDICATOR_CTOR_OFFSET UNITYSDK_OFFSET(0xDCCB190)
#define RPG_CLIENT_GRIDFIGHTTRAITCHIMERAINDICATOR_GETBGPATH_OFFSET UNITYSDK_OFFSET(0xDCCB360)
#define RPG_CLIENT_GRIDFIGHTTRAITCHIMERAINDICATOR_GETEFFECT_OFFSET UNITYSDK_OFFSET(0xDCCB500)
#define RPG_CLIENT_GRIDFIGHTTRAITCHIMERAINDICATOR_GETICONPATH_OFFSET UNITYSDK_OFFSET(0xDCCB290)
#define RPG_CLIENT_GRIDFIGHTTRAITCHIMERAINDICATOR_GETSTATEDESC_OFFSET UNITYSDK_OFFSET(0xDCCB3F0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHIMERAINDICATOR_GET_EFFECTID_OFFSET UNITYSDK_OFFSET(0xDCCB230)
#define RPG_CLIENT_GRIDFIGHTTRAITCHIMERAINDICATOR_GET_PANELSCRIPTPATH_OFFSET UNITYSDK_OFFSET(0xDCCB280)
#define RPG_CLIENT_GRIDFIGHTTRAITCHIMERAINDICATOR_GET_TRAITID_OFFSET UNITYSDK_OFFSET(0xDCCB1E0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHIMERAINDICATOR_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0xDCCB440)
#define RPG_CLIENT_GRIDFIGHTTRAITCHIMERAINDICATOR_UPDATESTATE_OFFSET UNITYSDK_OFFSET(0xDCCB540)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitChimeraIndicator_TypeDefinitionIndex = 67150;

	class GridFightTraitChimeraIndicator : public ::RPG::Client::GridFightPreparationTraitEffectIndicator
	{
	public:
		::RPG::Client::GridFightTrait* _Trait; // 0x18
		::System::String* _PanelScriptPath_k__BackingField; // 0x20
		::RPG::Client::GridFightTraitChimeraTraitEffect* _Effect; // 0x28
		::System::Void _ctor(::RPG::Client::GridFightTrait* a1, ::RPG::Client::GridFightTraitChimeraTraitEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTrait*, ::RPG::Client::GridFightTraitChimeraTraitEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHIMERAINDICATOR_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_TraitID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHIMERAINDICATOR_GET_TRAITID_OFFSET))(this);
		}

		::System::UInt32 get_EffectID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHIMERAINDICATOR_GET_EFFECTID_OFFSET))(this);
		}

		::System::String* get_PanelScriptPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHIMERAINDICATOR_GET_PANELSCRIPTPATH_OFFSET))(this);
		}

		::System::String* GetIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHIMERAINDICATOR_GETICONPATH_OFFSET))(this);
		}

		::System::String* GetBgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHIMERAINDICATOR_GETBGPATH_OFFSET))(this);
		}

		::System::String* GetStateDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHIMERAINDICATOR_GETSTATEDESC_OFFSET))(this);
		}

		::System::Boolean IsActivated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHIMERAINDICATOR_ISACTIVATED_OFFSET))(this);
		}

		::RPG::Client::GridFightTraitChimeraTraitEffect* GetEffect()
		{
			return ((::RPG::Client::GridFightTraitChimeraTraitEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHIMERAINDICATOR_GETEFFECT_OFFSET))(this);
		}

		::System::Void UpdateState(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHIMERAINDICATOR_UPDATESTATE_OFFSET))(this, a1);
		}

	};
}
