#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPreparationTraitEffectIndicator.h"
namespace RPG::Client { class GridFightBonusResultData; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitSpaceEffect; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTTRAITSPACEINDICATOR_CTOR_OFFSET UNITYSDK_OFFSET(0xDCEF170)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEINDICATOR_GETBGPATH_OFFSET UNITYSDK_OFFSET(0xDCF0E80)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEINDICATOR_GETBONUSRESULTDATA_OFFSET UNITYSDK_OFFSET(0xDCF1390)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEINDICATOR_GETEFFECT_OFFSET UNITYSDK_OFFSET(0xDCF11A0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEINDICATOR_GETICONPATH_OFFSET UNITYSDK_OFFSET(0xDCF0DB0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEINDICATOR_GETLEVELUPANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0xDCF1310)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEINDICATOR_GETLEVEL_OFFSET UNITYSDK_OFFSET(0xDCF11E0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEINDICATOR_GETPOPUPMETHODNAME_OFFSET UNITYSDK_OFFSET(0xDCF1910)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEINDICATOR_GETSTATEDESC_OFFSET UNITYSDK_OFFSET(0xDCF1050)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEINDICATOR_GETTOASTTEXT_OFFSET UNITYSDK_OFFSET(0xDCF1400)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEINDICATOR_GET_EFFECTID_OFFSET UNITYSDK_OFFSET(0xDCF0D50)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEINDICATOR_GET_PANELSCRIPTPATH_OFFSET UNITYSDK_OFFSET(0xDCF0DA0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEINDICATOR_GET_TRAITID_OFFSET UNITYSDK_OFFSET(0xDCF0D00)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEINDICATOR_GET__ISWOLF_OFFSET UNITYSDK_OFFSET(0xDCF0FC0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEINDICATOR_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0xDCF1130)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEINDICATOR_ISMAXLEVEL_OFFSET UNITYSDK_OFFSET(0xDCF12A0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEINDICATOR_UPDATESTATE_OFFSET UNITYSDK_OFFSET(0xDCEF5E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitSpaceIndicator_TypeDefinitionIndex = 67248;

	class GridFightTraitSpaceIndicator : public ::RPG::Client::GridFightPreparationTraitEffectIndicator
	{
	public:
		::RPG::Client::GridFightTrait* _Trait; // 0x18
		::System::String* _PanelScriptPath_k__BackingField; // 0x20
		::RPG::Client::GridFightTraitSpaceEffect* _Effect; // 0x28
		::System::Void _ctor(::RPG::Client::GridFightTrait* a1, ::RPG::Client::GridFightTraitSpaceEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTrait*, ::RPG::Client::GridFightTraitSpaceEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEINDICATOR_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_TraitID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEINDICATOR_GET_TRAITID_OFFSET))(this);
		}

		::System::UInt32 get_EffectID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEINDICATOR_GET_EFFECTID_OFFSET))(this);
		}

		::System::String* get_PanelScriptPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEINDICATOR_GET_PANELSCRIPTPATH_OFFSET))(this);
		}

		::System::String* GetIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEINDICATOR_GETICONPATH_OFFSET))(this);
		}

		::System::String* GetBgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEINDICATOR_GETBGPATH_OFFSET))(this);
		}

		::System::String* GetStateDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEINDICATOR_GETSTATEDESC_OFFSET))(this);
		}

		::System::Boolean IsActivated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEINDICATOR_ISACTIVATED_OFFSET))(this);
		}

		::RPG::Client::GridFightTraitSpaceEffect* GetEffect()
		{
			return ((::RPG::Client::GridFightTraitSpaceEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEINDICATOR_GETEFFECT_OFFSET))(this);
		}

		::System::Int32 GetLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEINDICATOR_GETLEVEL_OFFSET))(this);
		}

		::System::Boolean IsMaxLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEINDICATOR_ISMAXLEVEL_OFFSET))(this);
		}

		::System::String* GetLevelUpAnimationName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEINDICATOR_GETLEVELUPANIMATIONNAME_OFFSET))(this);
		}

		::RPG::Client::GridFightBonusResultData* GetBonusResultData()
		{
			return ((::RPG::Client::GridFightBonusResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEINDICATOR_GETBONUSRESULTDATA_OFFSET))(this);
		}

		::System::String* GetToastText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEINDICATOR_GETTOASTTEXT_OFFSET))(this);
		}

		::System::String* GetPopupMethodName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEINDICATOR_GETPOPUPMETHODNAME_OFFSET))(this);
		}

		::System::Void UpdateState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEINDICATOR_UPDATESTATE_OFFSET))(this, a1);
		}

		::System::Boolean get__IsWolf()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEINDICATOR_GET__ISWOLF_OFFSET))(this);
		}

	};
}
