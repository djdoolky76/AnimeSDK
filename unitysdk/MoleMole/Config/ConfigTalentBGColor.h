#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

class BPHGNMNLLHF;
namespace MoleMole { class ColorData; }
namespace MoleMole { class RoleTweakColorData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGTALENTBGCOLOR_CLCKGCKPEIH_OFFSET UNITYSDK_OFFSET(0xFACAD40)
#define MOLEMOLE_CONFIG_CONFIGTALENTBGCOLOR_GPAGOABIFFP_OFFSET UNITYSDK_OFFSET(0xFACABC0)
#define MOLEMOLE_CONFIG_CONFIGTALENTBGCOLOR_LALNPIFPPEO_OFFSET UNITYSDK_OFFSET(0xFACAB60)
#define MOLEMOLE_CONFIG_CONFIGTALENTBGCOLOR_ODEIAAOCAMB_OFFSET UNITYSDK_OFFSET(0xFACAE50)
#define MOLEMOLE_CONFIG_CONFIGTALENTBGCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0xFACAAD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTalentBGColor_TypeDefinitionIndex = 92474;

	class ConfigTalentBGColor : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::ColorData*>* colorConfigs; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::RoleTweakColorData*>* tweakColorConfigs; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTALENTBGCOLOR__CTOR_OFFSET))(this);
		}

		::System::String* LALNPIFPPEO(::BPHGNMNLLHF* JGHNEGMOGHC)
		{
			return ((::System::String*(*)(::PVOID, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTALENTBGCOLOR_LALNPIFPPEO_OFFSET))(this, JGHNEGMOGHC);
		}

		::MoleMole::RoleTweakColorData* CLCKGCKPEIH(::BPHGNMNLLHF* JGHNEGMOGHC)
		{
			return ((::MoleMole::RoleTweakColorData*(*)(::PVOID, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTALENTBGCOLOR_CLCKGCKPEIH_OFFSET))(this, JGHNEGMOGHC);
		}

		::MoleMole::ColorData* GPAGOABIFFP(::BPHGNMNLLHF* JGHNEGMOGHC)
		{
			return ((::MoleMole::ColorData*(*)(::PVOID, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTALENTBGCOLOR_GPAGOABIFFP_OFFSET))(this, JGHNEGMOGHC);
		}

		::UnityEngine::Color ODEIAAOCAMB(::BPHGNMNLLHF* JGHNEGMOGHC)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTALENTBGCOLOR_ODEIAAOCAMB_OFFSET))(this, JGHNEGMOGHC);
		}
	};
}
