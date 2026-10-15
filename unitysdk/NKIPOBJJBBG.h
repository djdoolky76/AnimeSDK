#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IAJLHKIHBFB.h"
class EMJGLIBIILC;

#define NKIPOBJJBBG_CLEAR_OFFSET UNITYSDK_OFFSET(0xBC388D0)
#define NKIPOBJJBBG_CTOR_OFFSET UNITYSDK_OFFSET(0xBC38970)
#define NKIPOBJJBBG_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xBC38950)
#define NKIPOBJJBBG_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xBC38960)

	class NKIPOBJJBBG : public ::IAJLHKIHBFB
	{
	public:
		::EMJGLIBIILC* _Config_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIPOBJJBBG_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIPOBJJBBG_CLEAR_OFFSET))(this);
		}

		::EMJGLIBIILC* get_Config()
		{
			return ((::EMJGLIBIILC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIPOBJJBBG_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::EMJGLIBIILC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EMJGLIBIILC*))((::PBYTE)hIl2Cpp + NKIPOBJJBBG_SET_CONFIG_OFFSET))(this, a1);
		}

	};
