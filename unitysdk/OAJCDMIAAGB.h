#pragma once
#include "unitysdk/unitysdk.h"
class GHHFHKBJFIL;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define OAJCDMIAAGB_CTOR_OFFSET UNITYSDK_OFFSET(0xBD203F0)
#define OAJCDMIAAGB_JIGHEIMKJLK_OFFSET UNITYSDK_OFFSET(0xBD20700)
#define OAJCDMIAAGB__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xBD20580)
#define OAJCDMIAAGB__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xBD20660)

inline static constexpr unsigned int OAJCDMIAAGB_TypeDefinitionIndex = 53466;

	class OAJCDMIAAGB
	{
	public:
		::System::String* LJPOEMIKGKB; // 0x68
		::System::Boolean KHCFEEHLEFH; // 0x70
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GHHFHKBJFIL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GHHFHKBJFIL*))((::PBYTE)hIl2Cpp + OAJCDMIAAGB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _RegisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAJCDMIAAGB__REGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void _UnregisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAJCDMIAAGB__UNREGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void JIGHEIMKJLK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OAJCDMIAAGB_JIGHEIMKJLK_OFFSET))(this, a1);
		}

	};
