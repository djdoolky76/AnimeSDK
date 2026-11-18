#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace MoleMole::Config { class SceneMapAreaRuntimeData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_SCENEMAPLAYERRUNTIMEDATA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B44F940)
#define MOLEMOLE_CONFIG_SCENEMAPLAYERRUNTIMEDATA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B44F5B0)
#define MOLEMOLE_CONFIG_SCENEMAPLAYERRUNTIMEDATA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1B44F9A0)
#define MOLEMOLE_CONFIG_SCENEMAPLAYERRUNTIMEDATA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1B44F630)
#define MOLEMOLE_CONFIG_SCENEMAPLAYERRUNTIMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B44FC50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SceneMapLayerRuntimeData_TypeDefinitionIndex = 66124;

	class SceneMapLayerRuntimeData : public ::System::Object
	{
	public:
		::System::Int32 number; // 0x10
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::MoleMole::Config::SceneMapAreaRuntimeData*>* mapAreaList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEMAPLAYERRUNTIMEDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEMAPLAYERRUNTIMEDATA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEMAPLAYERRUNTIMEDATA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEMAPLAYERRUNTIMEDATA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEMAPLAYERRUNTIMEDATA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}
	};
}
