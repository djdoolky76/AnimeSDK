#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_RUNTIMESETMEMBERDATA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x7D9900)
#define MOLEMOLE_CONFIG_RUNTIMESETMEMBERDATA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x7D9870)
#define MOLEMOLE_CONFIG_RUNTIMESETMEMBERDATA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x7D9960)
#define MOLEMOLE_CONFIG_RUNTIMESETMEMBERDATA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x7D9970)

namespace MoleMole::Config
{
	inline static constexpr unsigned int RuntimeSetMemberData_TypeDefinitionIndex = 74755;

	struct alignas(8) RuntimeSetMemberData
	{
		::System::String* nameId; // 0x10
		::System::Collections::Generic::List_1<::System::Boolean>* activeStates; // 0x18

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RUNTIMESETMEMBERDATA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RUNTIMESETMEMBERDATA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RUNTIMESETMEMBERDATA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RUNTIMESETMEMBERDATA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}
	};
}
