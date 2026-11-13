#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEANOGAFBGK;

#define HBGNFKBHDJK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C16E8A0)
#define HBGNFKBHDJK_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1C16E860)
#define HBGNFKBHDJK_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1C16E880)
#define HBGNFKBHDJK_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1C16E870)
#define HBGNFKBHDJK_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1C16E890)

inline static constexpr unsigned int HBGNFKBHDJK_TypeDefinitionIndex = 84498;

	class HBGNFKBHDJK : public ::System::Object
	{
	public:
		::AEANOGAFBGK* _Config_k__BackingField; // 0x10
		::System::Boolean _IsUnlocked_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBGNFKBHDJK_CTOR_OFFSET))(this);
		}

		::AEANOGAFBGK* get_Config()
		{
			return ((::AEANOGAFBGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBGNFKBHDJK_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::AEANOGAFBGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AEANOGAFBGK*))((::PBYTE)hIl2Cpp + HBGNFKBHDJK_SET_CONFIG_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBGNFKBHDJK_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HBGNFKBHDJK_SET_ISUNLOCKED_OFFSET))(this, a1);
		}

	};
