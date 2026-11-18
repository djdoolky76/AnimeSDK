#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }

#define MOLEMOLE_CONFIG_VOSTATEAUDIOPORTALCONDITION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1642C160)
#define MOLEMOLE_CONFIG_VOSTATEAUDIOPORTALCONDITION_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1642BC60)
#define MOLEMOLE_CONFIG_VOSTATEAUDIOPORTALCONDITION_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1642C1C0)
#define MOLEMOLE_CONFIG_VOSTATEAUDIOPORTALCONDITION_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1642BCE0)
#define MOLEMOLE_CONFIG_VOSTATEAUDIOPORTALCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1642C490)

namespace MoleMole::Config
{
	inline static constexpr unsigned int VOStateAudioPortalCondition_TypeDefinitionIndex = 91239;

	class VOStateAudioPortalCondition : public ::System::Object
	{
	public:
		::System::String* StateKey; // 0x10
		::MoleMole::Config::ValueCompareType CompareType; // 0x18
		::System::Int32 StateValue; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VOSTATEAUDIOPORTALCONDITION__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VOSTATEAUDIOPORTALCONDITION_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VOSTATEAUDIOPORTALCONDITION_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VOSTATEAUDIOPORTALCONDITION_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VOSTATEAUDIOPORTALCONDITION_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}
	};
}
