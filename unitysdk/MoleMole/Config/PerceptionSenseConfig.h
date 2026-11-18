#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHGBBGJNIPA.h"
#include "unitysdk/JNHHFPBDCBI.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace MoleMole::Config { class SenseRangeConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_PERCEPTIONSENSECONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C6E97A0)
#define MOLEMOLE_CONFIG_PERCEPTIONSENSECONFIG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1C6E8890)
#define MOLEMOLE_CONFIG_PERCEPTIONSENSECONFIG_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1C6E9800)
#define MOLEMOLE_CONFIG_PERCEPTIONSENSECONFIG_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1C6E8910)
#define MOLEMOLE_CONFIG_PERCEPTIONSENSECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6E9DD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int PerceptionSenseConfig_TypeDefinitionIndex = 73914;

	class PerceptionSenseConfig : public ::System::Object
	{
	public:
		::System::String* NameKey; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::Config::SenseRangeConfig*>* RangeList; // 0x18
		::JNHHFPBDCBI TargetFilter; // 0x20
		::MoleMole::Config::CampType TargetFilterCampType; // 0x24
		::System::Collections::Generic::List_1<::System::String*>* TargetFilterTagQuery; // 0x28
		::System::Int32 MaxQueryNum; // 0x30
		::System::Boolean UseRaycast; // 0x34
		::System::Byte _padding0[0x3];
		::BHGBBGJNIPA EventMode; // 0x38
		::System::Single TickInterval; // 0x3C
		::System::Boolean AutoEnable; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PERCEPTIONSENSECONFIG__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PERCEPTIONSENSECONFIG_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PERCEPTIONSENSECONFIG_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PERCEPTIONSENSECONFIG_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PERCEPTIONSENSECONFIG_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}
	};
}
