#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DDCKFEDCLEA.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class EffectAutoDynamicValue; }
namespace MoleMole::Timeline { class ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower_DynamicFloat_Editor; }

#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_EFFECTAUTODYNAMICINFO_EDITORSHOWER_AIMFJCPEEIK_OFFSET UNITYSDK_OFFSET(0x19B77A30)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_EFFECTAUTODYNAMICINFO_EDITORSHOWER_IOEOCGDPHBF_OFFSET UNITYSDK_OFFSET(0x19B77BD0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_EFFECTAUTODYNAMICINFO_EDITORSHOWER_LDEBGMHHEEI_OFFSET UNITYSDK_OFFSET(0x19B77990)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_EFFECTAUTODYNAMICINFO_EDITORSHOWER_MENBGOENAJM_OFFSET UNITYSDK_OFFSET(0x19B77B30)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_EFFECTAUTODYNAMICINFO_EDITORSHOWER__CTOR_OFFSET UNITYSDK_OFFSET(0x19B77980)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower_TypeDefinitionIndex = 56688;

	class ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower : public ::System::Object
	{
	public:
		::DDCKFEDCLEA EffectTarget; // 0x10
		::System::Byte _padding0[0x4];
		::MoleMole::Timeline::ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower_DynamicFloat_Editor* EffStartSizeX; // 0x18
		::MoleMole::Timeline::ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower_DynamicFloat_Editor* EffStartSizeY; // 0x20
		::MoleMole::Timeline::ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower_DynamicFloat_Editor* EffFadeInTime; // 0x28
		::MoleMole::Timeline::ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower_DynamicFloat_Editor* EffHoldTime; // 0x30
		::MoleMole::Timeline::ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower_DynamicFloat_Editor* EffFadeOutTime; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_EFFECTAUTODYNAMICINFO_EDITORSHOWER__CTOR_OFFSET))(this);
		}

		static ::MoleMole::Timeline::ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower_DynamicFloat_Editor* LDEBGMHHEEI(::MoleMole::Config::DynamicFloat* GEGOALONGBI)
		{
			return ((::MoleMole::Timeline::ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower_DynamicFloat_Editor*(*)(::MoleMole::Config::DynamicFloat*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_EFFECTAUTODYNAMICINFO_EDITORSHOWER_LDEBGMHHEEI_OFFSET))(GEGOALONGBI);
		}

		::MoleMole::Config::EffectAutoDynamicValue* AIMFJCPEEIK(::MoleMole::Config::EffectAutoDynamicValue* CJEKDBFDGID)
		{
			return ((::MoleMole::Config::EffectAutoDynamicValue*(*)(::PVOID, ::MoleMole::Config::EffectAutoDynamicValue*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_EFFECTAUTODYNAMICINFO_EDITORSHOWER_AIMFJCPEEIK_OFFSET))(this, CJEKDBFDGID);
		}

		::System::Void IOEOCGDPHBF(::MoleMole::Config::EffectAutoDynamicValue* CJEKDBFDGID)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EffectAutoDynamicValue*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_EFFECTAUTODYNAMICINFO_EDITORSHOWER_IOEOCGDPHBF_OFFSET))(this, CJEKDBFDGID);
		}

		static ::MoleMole::Config::DynamicFloat* MENBGOENAJM(::MoleMole::Timeline::ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower_DynamicFloat_Editor* GEGOALONGBI)
		{
			return ((::MoleMole::Config::DynamicFloat*(*)(::MoleMole::Timeline::ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower_DynamicFloat_Editor*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_EFFECTAUTODYNAMICINFO_EDITORSHOWER_MENBGOENAJM_OFFSET))(GEGOALONGBI);
		}
	};
}
