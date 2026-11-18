#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGLEVELGUIDEROUTEENTRY_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x785E80)
#define MOLEMOLE_CONFIG_CONFIGLEVELGUIDEROUTEENTRY_FROMFLX_OFFSET UNITYSDK_OFFSET(0x785DF0)
#define MOLEMOLE_CONFIG_CONFIGLEVELGUIDEROUTEENTRY_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x785F10)
#define MOLEMOLE_CONFIG_CONFIGLEVELGUIDEROUTEENTRY_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x785EE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLevelGuideRouteEntry_TypeDefinitionIndex = 65978;

	struct alignas(8) ConfigLevelGuideRouteEntry
	{
		::System::String* RouteTag; // 0x10
		::System::String* EntryGroupMember; // 0x18

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELGUIDEROUTEENTRY_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELGUIDEROUTEENTRY_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELGUIDEROUTEENTRY_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELGUIDEROUTEENTRY_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}
	};
}
