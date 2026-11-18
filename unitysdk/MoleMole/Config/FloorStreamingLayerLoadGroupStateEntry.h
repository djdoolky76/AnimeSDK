#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/FloorStreamingLayerLoadGroupStateCompareType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }

#define MOLEMOLE_CONFIG_FLOORSTREAMINGLAYERLOADGROUPSTATEENTRY_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1278EF30)
#define MOLEMOLE_CONFIG_FLOORSTREAMINGLAYERLOADGROUPSTATEENTRY_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1278E8E0)
#define MOLEMOLE_CONFIG_FLOORSTREAMINGLAYERLOADGROUPSTATEENTRY_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1278EF90)
#define MOLEMOLE_CONFIG_FLOORSTREAMINGLAYERLOADGROUPSTATEENTRY_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1278E960)
#define MOLEMOLE_CONFIG_FLOORSTREAMINGLAYERLOADGROUPSTATEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1278F360)

namespace MoleMole::Config
{
	inline static constexpr unsigned int FloorStreamingLayerLoadGroupStateEntry_TypeDefinitionIndex = 58657;

	class FloorStreamingLayerLoadGroupStateEntry : public ::System::Object
	{
	public:
		::System::Int32 GroupID; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* GroupState; // 0x18
		::System::Int32 GroupStateValue; // 0x20
		::MoleMole::Config::FloorStreamingLayerLoadGroupStateCompareType CompareType; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FLOORSTREAMINGLAYERLOADGROUPSTATEENTRY__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FLOORSTREAMINGLAYERLOADGROUPSTATEENTRY_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FLOORSTREAMINGLAYERLOADGROUPSTATEENTRY_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FLOORSTREAMINGLAYERLOADGROUPSTATEENTRY_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FLOORSTREAMINGLAYERLOADGROUPSTATEENTRY_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}
	};
}
