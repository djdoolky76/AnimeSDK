#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }

#define MOLEMOLE_CONFIG_PROJECTILETRAITCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x7D97B0)
#define MOLEMOLE_CONFIG_PROJECTILETRAITCONFIG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x7D9720)
#define MOLEMOLE_CONFIG_PROJECTILETRAITCONFIG_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x7D9840)
#define MOLEMOLE_CONFIG_PROJECTILETRAITCONFIG_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x7D9810)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ProjectileTraitConfig_TypeDefinitionIndex = 39274;

	struct alignas(8) ProjectileTraitConfig
	{
		::System::String* ConfigName; // 0x10
		::UnityEngine::Vector3 OriginalSpeed; // 0x18
		::System::Single ClimaxPoint; // 0x24

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAITCONFIG_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAITCONFIG_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAITCONFIG_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAITCONFIG_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}
	};
}
