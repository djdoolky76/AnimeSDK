#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JIAPCHALLMF;
class LPOOJCMOLDC;

#define KIICEFFNEGG_CTOR_OFFSET UNITYSDK_OFFSET(0xB430630)
#define KIICEFFNEGG_DPOEGOKMJNI_OFFSET UNITYSDK_OFFSET(0xB430550)
#define KIICEFFNEGG_JNAJPCHOJJA_OFFSET UNITYSDK_OFFSET(0xB430470)
#define KIICEFFNEGG_START_OFFSET UNITYSDK_OFFSET(0xB4303F0)
#define KIICEFFNEGG_STOP_OFFSET UNITYSDK_OFFSET(0xB430430)

inline static constexpr unsigned int KIICEFFNEGG_TypeDefinitionIndex = 79225;

	class KIICEFFNEGG : public ::System::Object
	{
	public:
		::JIAPCHALLMF* NMLAOCMPPPP; // 0x10
		::LPOOJCMOLDC* BBGCKINIMBH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIICEFFNEGG_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIICEFFNEGG_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIICEFFNEGG_STOP_OFFSET))(this);
		}

		::System::Void JNAJPCHOJJA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIICEFFNEGG_JNAJPCHOJJA_OFFSET))(this);
		}

		::System::Void DPOEGOKMJNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIICEFFNEGG_DPOEGOKMJNI_OFFSET))(this);
		}

	};
