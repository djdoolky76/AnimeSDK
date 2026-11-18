#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLPJECICNDE.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENTPARAM_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1BA257B0)
#define MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENTPARAM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BA26680)
#define MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENTPARAM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1BA25D00)
#define MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENTPARAM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1BA266E0)
#define MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENTPARAM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1BA25D80)
#define MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA26B30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAbilityFragmentParam_TypeDefinitionIndex = 64711;

	class ConfigAbilityFragmentParam : public ::System::Object
	{
	public:
		::System::String* Key; // 0x10
		::BLPJECICNDE ValType; // 0x18
		::System::Single Value; // 0x1C
		::System::Boolean BoolValue; // 0x20
		::System::Byte _padding0[0x3];
		::System::Int32 IntValue; // 0x24
		::System::String* StringValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENTPARAM__CTOR_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* NLKHAICJJAL, ::System::String* GLBEOLEENIJ)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENTPARAM_EXPOSEMEMBER_OFFSET))(this, NLKHAICJJAL, GLBEOLEENIJ);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENTPARAM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENTPARAM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENTPARAM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENTPARAM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}
	};
}
