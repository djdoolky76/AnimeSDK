#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IAJLHKIHBFB.h"
class EMJGLIBIILC;

#define NKIPOBJJBBG_CLEAR_OFFSET UNITYSDK_OFFSET(0xC51CDA0)
#define NKIPOBJJBBG_CTOR_OFFSET UNITYSDK_OFFSET(0xC51CE40)
#define NKIPOBJJBBG_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xC51CE20)
#define NKIPOBJJBBG_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xC51CE30)

inline static constexpr unsigned int NKIPOBJJBBG_TypeDefinitionIndex = 80149;

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
