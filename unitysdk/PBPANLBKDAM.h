#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBOAHKAAECG.h"
#include "unitysdk/RPG/MVector3.h"
class KGMBGMIGHOE;
class KHPOKIKCOFO;

#define PBPANLBKDAM_CTOR_OFFSET UNITYSDK_OFFSET(0xBFEF910)
#define PBPANLBKDAM_GNEIJDOMJFL_OFFSET UNITYSDK_OFFSET(0xBFEFA40)
#define PBPANLBKDAM_HJJEPFOFOKI_OFFSET UNITYSDK_OFFSET(0xBFF0120)
#define PBPANLBKDAM_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xBFEF930)
#define PBPANLBKDAM_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBFEFCB0)

inline static constexpr unsigned int PBPANLBKDAM_TypeDefinitionIndex = 75797;

	class PBPANLBKDAM : public ::CBOAHKAAECG
	{
	public:
		::RPG::MVector3 KDNMEPNBGCF; // 0x28
		// static const ::System::String* EPIJBDJONCN; // 0x0
		// static const ::System::String* JPCINMNJDJK; // 0x0
		::System::Void _ctor(::KGMBGMIGHOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGMBGMIGHOE*))((::PBYTE)hIl2Cpp + PBPANLBKDAM_CTOR_OFFSET))(this, a1);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBPANLBKDAM_HKKFFCBJOKM_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PBPANLBKDAM_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::RPG::MVector3 GNEIJDOMJFL(::KGMBGMIGHOE* a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::KGMBGMIGHOE*))((::PBYTE)hIl2Cpp + PBPANLBKDAM_GNEIJDOMJFL_OFFSET))(this, a1);
		}

		::KHPOKIKCOFO* HJJEPFOFOKI(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::KHPOKIKCOFO*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + PBPANLBKDAM_HJJEPFOFOKI_OFFSET))(this, a1, a2);
		}

	};
