#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHPHMGHKGEN.h"
class ODGPPIHLOFF;

#define ALEAFADNBPL_PBNHAPPGIGC_BEMHFPJIJME_OFFSET UNITYSDK_OFFSET(0x163D2B40)
#define ALEAFADNBPL_PBNHAPPGIGC_CTOR_OFFSET UNITYSDK_OFFSET(0x163D2BC0)

inline static constexpr unsigned int ALEAFADNBPL_PBNHAPPGIGC_TypeDefinitionIndex = 50285;

	class ALEAFADNBPL_PBNHAPPGIGC : public ::JHPHMGHKGEN
	{
	public:
		::ODGPPIHLOFF* JAIBONACADL; // 0x18
		::System::Boolean NFJNHIBMKNL; // 0x20
		::System::Byte _padding0[0x3];
		::System::Int32 IJEEIPJGNKB; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALEAFADNBPL_PBNHAPPGIGC_CTOR_OFFSET))(this);
		}

		::System::Void BEMHFPJIJME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALEAFADNBPL_PBNHAPPGIGC_BEMHFPJIJME_OFFSET))(this);
		}

	};
