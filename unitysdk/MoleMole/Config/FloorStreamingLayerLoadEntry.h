#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace MoleMole::Config { class FloorStreamingLayerLoadGroupStateEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_FLOORSTREAMINGLAYERLOADENTRY_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A0421E0)
#define MOLEMOLE_CONFIG_FLOORSTREAMINGLAYERLOADENTRY_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A041E30)
#define MOLEMOLE_CONFIG_FLOORSTREAMINGLAYERLOADENTRY_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1A042240)
#define MOLEMOLE_CONFIG_FLOORSTREAMINGLAYERLOADENTRY_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1A041EB0)
#define MOLEMOLE_CONFIG_FLOORSTREAMINGLAYERLOADENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A042450)

namespace MoleMole::Config
{
	inline static constexpr unsigned int FloorStreamingLayerLoadEntry_TypeDefinitionIndex = 76631;

	class FloorStreamingLayerLoadEntry : public ::System::Object
	{
	public:
		::System::String* LayerName; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::Config::FloorStreamingLayerLoadGroupStateEntry*>* StateList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FLOORSTREAMINGLAYERLOADENTRY__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FLOORSTREAMINGLAYERLOADENTRY_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FLOORSTREAMINGLAYERLOADENTRY_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FLOORSTREAMINGLAYERLOADENTRY_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FLOORSTREAMINGLAYERLOADENTRY_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}
	};
}
