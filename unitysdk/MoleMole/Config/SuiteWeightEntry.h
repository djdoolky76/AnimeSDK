#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;

#define MOLEMOLE_CONFIG_SUITEWEIGHTENTRY_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BA4C250)
#define MOLEMOLE_CONFIG_SUITEWEIGHTENTRY_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1BA4BEB0)
#define MOLEMOLE_CONFIG_SUITEWEIGHTENTRY_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1BA4C2B0)
#define MOLEMOLE_CONFIG_SUITEWEIGHTENTRY_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1BA4BF30)
#define MOLEMOLE_CONFIG_SUITEWEIGHTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA4C5E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SuiteWeightEntry_TypeDefinitionIndex = 89650;

	class SuiteWeightEntry : public ::System::Object
	{
	public:
		::System::Int32 SuiteIndex; // 0x10
		::System::Int32 Weight; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUITEWEIGHTENTRY__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUITEWEIGHTENTRY_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUITEWEIGHTENTRY_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUITEWEIGHTENTRY_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUITEWEIGHTENTRY_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}
	};
}
