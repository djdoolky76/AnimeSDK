#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LKLEBOOCADM.h"
class EOIFLHMPBIF;
class IAFKJCICCOP;

#define KJNDMIAOHNB_CTOR_OFFSET UNITYSDK_OFFSET(0xB4573B0)
#define KJNDMIAOHNB_EFHOJNKCMDL_OFFSET UNITYSDK_OFFSET(0xB4573C0)

inline static constexpr unsigned int KJNDMIAOHNB_TypeDefinitionIndex = 67132;

	class KJNDMIAOHNB : public ::LKLEBOOCADM
	{
	public:
		::EOIFLHMPBIF* LEEMNOCGBOJ; // 0x18
		::System::Void _ctor(::IAFKJCICCOP* a1, ::EOIFLHMPBIF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IAFKJCICCOP*, ::EOIFLHMPBIF*))((::PBYTE)hIl2Cpp + KJNDMIAOHNB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void EFHOJNKCMDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJNDMIAOHNB_EFHOJNKCMDL_OFFSET))(this);
		}

	};
