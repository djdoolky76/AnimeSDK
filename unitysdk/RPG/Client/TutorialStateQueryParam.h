#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AOCCEBGNPJA.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_TUTORIALSTATEQUERYPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0xE336E60)
#define RPG_CLIENT_TUTORIALSTATEQUERYPARAM_GET_GUIDETYPE_OFFSET UNITYSDK_OFFSET(0xE336EB0)
#define RPG_CLIENT_TUTORIALSTATEQUERYPARAM_GET_ID_OFFSET UNITYSDK_OFFSET(0xE336E70)
#define RPG_CLIENT_TUTORIALSTATEQUERYPARAM_GET_ISGUIDE_OFFSET UNITYSDK_OFFSET(0xE336E90)
#define RPG_CLIENT_TUTORIALSTATEQUERYPARAM_SET_GUIDETYPE_OFFSET UNITYSDK_OFFSET(0xE336EC0)
#define RPG_CLIENT_TUTORIALSTATEQUERYPARAM_SET_ID_OFFSET UNITYSDK_OFFSET(0xE336E80)
#define RPG_CLIENT_TUTORIALSTATEQUERYPARAM_SET_ISGUIDE_OFFSET UNITYSDK_OFFSET(0xE336EA0)

namespace RPG::Client
{
	inline static constexpr unsigned int TutorialStateQueryParam_TypeDefinitionIndex = 68247;

	class TutorialStateQueryParam : public ::System::Object
	{
	public:
		::System::UInt32 _ID_k__BackingField; // 0x10
		::System::Boolean _IsGuide_k__BackingField; // 0x14
		::System::Byte _padding0[0x3];
		::AOCCEBGNPJA _GuideType_k__BackingField; // 0x18
		::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSTATEQUERYPARAM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSTATEQUERYPARAM_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSTATEQUERYPARAM_SET_ID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsGuide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSTATEQUERYPARAM_GET_ISGUIDE_OFFSET))(this);
		}

		::System::Void set_IsGuide(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSTATEQUERYPARAM_SET_ISGUIDE_OFFSET))(this, a1);
		}

		::AOCCEBGNPJA get_GuideType()
		{
			return ((::AOCCEBGNPJA(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSTATEQUERYPARAM_GET_GUIDETYPE_OFFSET))(this);
		}

		::System::Void set_GuideType(::AOCCEBGNPJA a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOCCEBGNPJA))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSTATEQUERYPARAM_SET_GUIDETYPE_OFFSET))(this, a1);
		}

	};
}
