#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace MoleMole::Config { class ConfigAbilityFragmentParam; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16406320)
#define MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16405F70)
#define MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENT_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16406380)
#define MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENT_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16405FF0)
#define MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x16406590)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAbilityFragment_TypeDefinitionIndex = 89807;

	class ConfigAbilityFragment : public ::System::Object
	{
	public:
		::System::String* AbilityName; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigAbilityFragmentParam*>* AbilitySpecial; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENT__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENT_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENT_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENT_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENT_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}
	};
}
