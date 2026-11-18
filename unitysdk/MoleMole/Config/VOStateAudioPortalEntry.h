#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }

#define MOLEMOLE_CONFIG_VOSTATEAUDIOPORTALENTRY_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B941580)
#define MOLEMOLE_CONFIG_VOSTATEAUDIOPORTALENTRY_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B940F00)
#define MOLEMOLE_CONFIG_VOSTATEAUDIOPORTALENTRY_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1B9415E0)
#define MOLEMOLE_CONFIG_VOSTATEAUDIOPORTALENTRY_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1B940F80)
#define MOLEMOLE_CONFIG_VOSTATEAUDIOPORTALENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B941920)

namespace MoleMole::Config
{
	inline static constexpr unsigned int VOStateAudioPortalEntry_TypeDefinitionIndex = 53830;

	class VOStateAudioPortalEntry : public ::System::Object
	{
	public:
		::System::String* PortalKey; // 0x10
		::System::String* StateKey; // 0x18
		::System::Int32 StateValue; // 0x20
		::MoleMole::Config::ValueCompareType CompareType; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VOSTATEAUDIOPORTALENTRY__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VOSTATEAUDIOPORTALENTRY_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VOSTATEAUDIOPORTALENTRY_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VOSTATEAUDIOPORTALENTRY_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VOSTATEAUDIOPORTALENTRY_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}
	};
}
