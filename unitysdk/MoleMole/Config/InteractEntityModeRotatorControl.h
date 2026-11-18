#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/InteractEntryMode.h"

class IJLOBIGIEDO;
namespace MoleMole::Config { class InteractEntry; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_INTERACTENTITYMODEROTATORCONTROL_CHECKACTIONCONTENT_OFFSET UNITYSDK_OFFSET(0xFFE7D00)
#define MOLEMOLE_CONFIG_INTERACTENTITYMODEROTATORCONTROL_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0xFFE7C70)
#define MOLEMOLE_CONFIG_INTERACTENTITYMODEROTATORCONTROL_GET_ISSUPPORTREPEAT_OFFSET UNITYSDK_OFFSET(0xFFE7E20)
#define MOLEMOLE_CONFIG_INTERACTENTITYMODEROTATORCONTROL_TOSTRING_OFFSET UNITYSDK_OFFSET(0xFFE7DB0)
#define MOLEMOLE_CONFIG_INTERACTENTITYMODEROTATORCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xFFE7E30)
#define MOLEMOLE_CONFIG_INTERACTENTITYMODEROTATORCONTROL___BASE_CHECKACTIONCONTENT_OFFSET UNITYSDK_OFFSET(0xFFE7E40)
#define MOLEMOLE_CONFIG_INTERACTENTITYMODEROTATORCONTROL___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xFFE7ED0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int InteractEntityModeRotatorControl_TypeDefinitionIndex = 63870;

	class InteractEntityModeRotatorControl : public ::MoleMole::Config::InteractEntryMode
	{
	public:
		::System::String* RotatorAttachPointName; // 0x20
		::System::Single MaxAngleY; // 0x28
		::System::Single AngularSpeedRatio; // 0x2C
		::System::Single MinAngleX; // 0x30
		::System::Single MinAngleY; // 0x34
		::System::Single MaxAngleX; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTITYMODEROTATORCONTROL__CTOR_OFFSET))(this);
		}

		::IJLOBIGIEDO* CreateInstance(::MoleMole::Config::InteractEntry* entry)
		{
			return ((::IJLOBIGIEDO*(*)(::PVOID, ::MoleMole::Config::InteractEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTITYMODEROTATORCONTROL_CREATEINSTANCE_OFFSET))(this, entry);
		}

		::System::Void CheckActionContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTITYMODEROTATORCONTROL_CHECKACTIONCONTENT_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTITYMODEROTATORCONTROL_TOSTRING_OFFSET))(this);
		}

		::System::Boolean get_IsSupportRepeat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTITYMODEROTATORCONTROL_GET_ISSUPPORTREPEAT_OFFSET))(this);
		}

		::System::Void __base_CheckActionContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTITYMODEROTATORCONTROL___BASE_CHECKACTIONCONTENT_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTITYMODEROTATORCONTROL___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
