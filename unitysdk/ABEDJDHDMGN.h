#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBOAHKAAECG.h"
#include "unitysdk/RPG/MVector3.h"
class KGMBGMIGHOE;
class KHPOKIKCOFO;

#define ABEDJDHDMGN_CTOR_OFFSET UNITYSDK_OFFSET(0xB0F1440)
#define ABEDJDHDMGN_GNEIJDOMJFL_OFFSET UNITYSDK_OFFSET(0xB0F1570)
#define ABEDJDHDMGN_HJJEPFOFOKI_OFFSET UNITYSDK_OFFSET(0xB0F1C50)
#define ABEDJDHDMGN_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xB0F1460)
#define ABEDJDHDMGN_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB0F17E0)

inline static constexpr unsigned int ABEDJDHDMGN_TypeDefinitionIndex = 75801;

	class ABEDJDHDMGN : public ::CBOAHKAAECG
	{
	public:
		::RPG::MVector3 KDNMEPNBGCF; // 0x28
		// static const ::System::String* EPIJBDJONCN; // 0x0
		// static const ::System::String* JPCINMNJDJK; // 0x0
		::System::Void _ctor(::KGMBGMIGHOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGMBGMIGHOE*))((::PBYTE)hIl2Cpp + ABEDJDHDMGN_CTOR_OFFSET))(this, a1);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABEDJDHDMGN_HKKFFCBJOKM_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ABEDJDHDMGN_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::RPG::MVector3 GNEIJDOMJFL(::KGMBGMIGHOE* a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::KGMBGMIGHOE*))((::PBYTE)hIl2Cpp + ABEDJDHDMGN_GNEIJDOMJFL_OFFSET))(this, a1);
		}

		::KHPOKIKCOFO* HJJEPFOFOKI(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::KHPOKIKCOFO*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ABEDJDHDMGN_HJJEPFOFOKI_OFFSET))(this, a1, a2);
		}

	};
