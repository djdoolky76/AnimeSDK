#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LKLEBOOCADM.h"
class IAFKJCICCOP;
class LPLHNOPDKHI;

#define GCHJLBBFGGB_CTOR_OFFSET UNITYSDK_OFFSET(0x15966140)
#define GCHJLBBFGGB_EFHOJNKCMDL_OFFSET UNITYSDK_OFFSET(0x15966150)

inline static constexpr unsigned int GCHJLBBFGGB_TypeDefinitionIndex = 67131;

	class GCHJLBBFGGB : public ::LKLEBOOCADM
	{
	public:
		::LPLHNOPDKHI* LEEMNOCGBOJ; // 0x18
		::System::Void _ctor(::IAFKJCICCOP* a1, ::LPLHNOPDKHI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IAFKJCICCOP*, ::LPLHNOPDKHI*))((::PBYTE)hIl2Cpp + GCHJLBBFGGB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void EFHOJNKCMDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHJLBBFGGB_EFHOJNKCMDL_OFFSET))(this);
		}

	};
