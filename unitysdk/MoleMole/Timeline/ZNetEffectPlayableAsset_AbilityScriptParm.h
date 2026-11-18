#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DMHCMJPNOOP.h"
#include "unitysdk/System/Object.h"

class PAMFLCKHJPA;
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class EffectAutoDynamicValue; }
namespace System { class String; }

#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_ABILITYSCRIPTPARM__CTOR_OFFSET UNITYSDK_OFFSET(0x17E7DB20)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ZNetEffectPlayableAsset_AbilityScriptParm_TypeDefinitionIndex = 56687;

	class ZNetEffectPlayableAsset_AbilityScriptParm : public ::System::Object
	{
	public:
		::System::String* AttachPointName; // 0x10
		::MoleMole::Config::ConfigPosRot* FireEffectPosRot; // 0x18
		::PAMFLCKHJPA* EffectScale; // 0x20
		::MoleMole::Config::EffectAutoDynamicValue* EffectAutoDynamic; // 0x28
		::DMHCMJPNOOP EffectOwner; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_ABILITYSCRIPTPARM__CTOR_OFFSET))(this);
		}
	};
}
