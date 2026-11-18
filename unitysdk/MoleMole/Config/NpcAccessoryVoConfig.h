#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }

#define MOLEMOLE_CONFIG_NPCACCESSORYVOCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A76FEC0)
#define MOLEMOLE_CONFIG_NPCACCESSORYVOCONFIG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A76FAE0)
#define MOLEMOLE_CONFIG_NPCACCESSORYVOCONFIG_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1A76FF20)
#define MOLEMOLE_CONFIG_NPCACCESSORYVOCONFIG_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1A76FB60)
#define MOLEMOLE_CONFIG_NPCACCESSORYVOCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A770110)

namespace MoleMole::Config
{
	inline static constexpr unsigned int NpcAccessoryVoConfig_TypeDefinitionIndex = 64831;

	class NpcAccessoryVoConfig : public ::System::Object
	{
	public:
		::System::String* SlotKey; // 0x10
		::System::String* OverrideSeqFrameKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NPCACCESSORYVOCONFIG__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NPCACCESSORYVOCONFIG_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NPCACCESSORYVOCONFIG_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NPCACCESSORYVOCONFIG_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NPCACCESSORYVOCONFIG_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}
	};
}
