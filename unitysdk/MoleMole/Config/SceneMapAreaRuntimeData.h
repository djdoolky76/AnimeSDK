#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace MoleMole::Config { class SceneMapStateRuntimeData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_SCENEMAPAREARUNTIMEDATA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B93B500)
#define MOLEMOLE_CONFIG_SCENEMAPAREARUNTIMEDATA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B93AFB0)
#define MOLEMOLE_CONFIG_SCENEMAPAREARUNTIMEDATA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1B93B560)
#define MOLEMOLE_CONFIG_SCENEMAPAREARUNTIMEDATA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1B93B030)
#define MOLEMOLE_CONFIG_SCENEMAPAREARUNTIMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B93B8B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SceneMapAreaRuntimeData_TypeDefinitionIndex = 56681;

	class SceneMapAreaRuntimeData : public ::System::Object
	{
	public:
		::System::String* mapAreaName; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* includedSceneAreaNameList; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::Config::SceneMapStateRuntimeData*>* stateList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEMAPAREARUNTIMEDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEMAPAREARUNTIMEDATA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEMAPAREARUNTIMEDATA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEMAPAREARUNTIMEDATA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEMAPAREARUNTIMEDATA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}
	};
}
