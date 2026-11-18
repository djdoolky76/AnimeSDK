#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PANDAFLLMIC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }

#define MOLEMOLE_CONFIG_SENSERANGECONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x192B9B90)
#define MOLEMOLE_CONFIG_SENSERANGECONFIG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x192B9310)
#define MOLEMOLE_CONFIG_SENSERANGECONFIG_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x192B9BF0)
#define MOLEMOLE_CONFIG_SENSERANGECONFIG_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x192B9390)
#define MOLEMOLE_CONFIG_SENSERANGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x192B9F10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SenseRangeConfig_TypeDefinitionIndex = 53694;

	class SenseRangeConfig : public ::System::Object
	{
	public:
		::System::String* NameKey; // 0x10
		::PANDAFLLMIC RangeType; // 0x18
		::System::Single Radius; // 0x1C
		::System::Single HalfAngleInDeg; // 0x20
		::System::Boolean AutoEnable; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SENSERANGECONFIG__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SENSERANGECONFIG_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SENSERANGECONFIG_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SENSERANGECONFIG_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SENSERANGECONFIG_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}
	};
}
