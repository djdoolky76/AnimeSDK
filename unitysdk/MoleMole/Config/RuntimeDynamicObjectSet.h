#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/RuntimeSetMemberData.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_RUNTIMEDYNAMICOBJECTSET_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x7FF550)
#define MOLEMOLE_CONFIG_RUNTIMEDYNAMICOBJECTSET_FROMFLX_OFFSET UNITYSDK_OFFSET(0x7FF4C0)
#define MOLEMOLE_CONFIG_RUNTIMEDYNAMICOBJECTSET_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x7FF5B0)
#define MOLEMOLE_CONFIG_RUNTIMEDYNAMICOBJECTSET_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x7FF5C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int RuntimeDynamicObjectSet_TypeDefinitionIndex = 60426;

	struct alignas(8) RuntimeDynamicObjectSet
	{
		::System::String* setNameId; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::Config::RuntimeSetMemberData>* setMembers; // 0x18

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RUNTIMEDYNAMICOBJECTSET_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RUNTIMEDYNAMICOBJECTSET_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RUNTIMEDYNAMICOBJECTSET_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RUNTIMEDYNAMICOBJECTSET_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}
	};
}
