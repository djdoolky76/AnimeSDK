#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPEKABHFFN.h"
#include "unitysdk/IALLPGPMLLB.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;

#define MOLEMOLE_CONFIG_NPCMONTAGECONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFFE8E10)
#define MOLEMOLE_CONFIG_NPCMONTAGECONFIG_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFFE89A0)
#define MOLEMOLE_CONFIG_NPCMONTAGECONFIG_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xFFE8E70)
#define MOLEMOLE_CONFIG_NPCMONTAGECONFIG_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xFFE8A20)
#define MOLEMOLE_CONFIG_NPCMONTAGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xFFE9120)

namespace MoleMole::Config
{
	inline static constexpr unsigned int NpcMontageConfig_TypeDefinitionIndex = 93230;

	class NpcMontageConfig : public ::System::Object
	{
	public:
		::System::Int32 MontageID; // 0x10
		::CMPEKABHFFN MontageLayer; // 0x14
		::IALLPGPMLLB MontageEndBehavior; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NPCMONTAGECONFIG__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NPCMONTAGECONFIG_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NPCMONTAGECONFIG_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NPCMONTAGECONFIG_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NPCMONTAGECONFIG_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}
	};
}
