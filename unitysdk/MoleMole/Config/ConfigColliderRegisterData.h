#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGCOLLIDERREGISTERDATA_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x7DC910)
#define MOLEMOLE_CONFIG_CONFIGCOLLIDERREGISTERDATA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x7DC9B0)
#define MOLEMOLE_CONFIG_CONFIGCOLLIDERREGISTERDATA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x7DC920)
#define MOLEMOLE_CONFIG_CONFIGCOLLIDERREGISTERDATA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x7DCA40)
#define MOLEMOLE_CONFIG_CONFIGCOLLIDERREGISTERDATA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x7DCA10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigColliderRegisterData_TypeDefinitionIndex = 68487;

	struct alignas(8) ConfigColliderRegisterData
	{
		::System::String* ColliderName; // 0x10
		::System::Boolean ActiveState; // 0x18

		::System::Void ExposeMember(::OHDHAGLCAEB* NLKHAICJJAL, ::System::String* GLBEOLEENIJ)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOLLIDERREGISTERDATA_EXPOSEMEMBER_OFFSET))(this, NLKHAICJJAL, GLBEOLEENIJ);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOLLIDERREGISTERDATA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOLLIDERREGISTERDATA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOLLIDERREGISTERDATA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOLLIDERREGISTERDATA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}
	};
}
