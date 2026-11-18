#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }

#define MOLEMOLE_CONFIG_GROUPMEMBERSTATEVALUE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFACEC10)
#define MOLEMOLE_CONFIG_GROUPMEMBERSTATEVALUE_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFACE860)
#define MOLEMOLE_CONFIG_GROUPMEMBERSTATEVALUE_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xFACEC70)
#define MOLEMOLE_CONFIG_GROUPMEMBERSTATEVALUE_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xFACE8E0)
#define MOLEMOLE_CONFIG_GROUPMEMBERSTATEVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0xFACEF00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int GroupMemberStateValue_TypeDefinitionIndex = 88866;

	class GroupMemberStateValue : public ::System::Object
	{
	public:
		::System::String* StateName; // 0x10
		::System::Int32 StateValue; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPMEMBERSTATEVALUE__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPMEMBERSTATEVALUE_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPMEMBERSTATEVALUE_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPMEMBERSTATEVALUE_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPMEMBERSTATEVALUE_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}
	};
}
