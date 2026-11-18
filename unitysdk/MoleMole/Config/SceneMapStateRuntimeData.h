#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }

#define MOLEMOLE_CONFIG_SCENEMAPSTATERUNTIMEDATA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFFEBDF0)
#define MOLEMOLE_CONFIG_SCENEMAPSTATERUNTIMEDATA_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFFEB440)
#define MOLEMOLE_CONFIG_SCENEMAPSTATERUNTIMEDATA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xFFEBE50)
#define MOLEMOLE_CONFIG_SCENEMAPSTATERUNTIMEDATA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xFFEB4C0)
#define MOLEMOLE_CONFIG_SCENEMAPSTATERUNTIMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xFFEC1E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SceneMapStateRuntimeData_TypeDefinitionIndex = 65748;

	class SceneMapStateRuntimeData : public ::System::Object
	{
	public:
		::System::Int32 number; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* imageResPath; // 0x18
		::System::Single centerPositionX; // 0x20
		::System::Single centerPositionZ; // 0x24
		::System::Single lengthX; // 0x28
		::System::Single lengthZ; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEMAPSTATERUNTIMEDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEMAPSTATERUNTIMEDATA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEMAPSTATERUNTIMEDATA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEMAPSTATERUNTIMEDATA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEMAPSTATERUNTIMEDATA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}
	};
}
