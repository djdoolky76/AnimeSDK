#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SuperDebug_ColorEnum.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }

#define MOLEMOLE_SUPERDEBUG_LOGMODULEATTRIBUTE_GET_DEFAULTENABLE_OFFSET UNITYSDK_OFFSET(0x1F3AB6C0)
#define MOLEMOLE_SUPERDEBUG_LOGMODULEATTRIBUTE_GET_MODULECOLOR_OFFSET UNITYSDK_OFFSET(0x1F3AB6B0)
#define MOLEMOLE_SUPERDEBUG_LOGMODULEATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F3AB680)
#define MOLEMOLE_SUPERDEBUG_LOGMODULEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3AB470)

namespace MoleMole
{
	inline static constexpr unsigned int SuperDebug_LogModuleAttribute_TypeDefinitionIndex = 7959;

	class SuperDebug_LogModuleAttribute : public ::System::Attribute
	{
	public:
		::UnityEngine::Color _ModuleColor_k__BackingField; // 0x10
		::System::Boolean _DefaultEnable_k__BackingField; // 0x20

		::System::Void _ctor(::MoleMole::SuperDebug_ColorEnum colorEnum, ::System::Boolean defaultEnable)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SuperDebug_ColorEnum, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGMODULEATTRIBUTE__CTOR_OFFSET))(this, colorEnum, defaultEnable);
		}

		::System::Void _ctor_1(::System::String* hex, ::System::Boolean defaultEnable)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGMODULEATTRIBUTE__CTOR_1_OFFSET))(this, hex, defaultEnable);
		}

		::UnityEngine::Color get_ModuleColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGMODULEATTRIBUTE_GET_MODULECOLOR_OFFSET))(this);
		}

		::System::Boolean get_DefaultEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGMODULEATTRIBUTE_GET_DEFAULTENABLE_OFFSET))(this);
		}
	};
}
