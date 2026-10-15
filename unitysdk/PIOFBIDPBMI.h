#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace System { class String; }

#define PIOFBIDPBMI_KDPEDNKCMEB_OFFSET UNITYSDK_OFFSET(0xDE420)

inline static constexpr unsigned int PIOFBIDPBMI_TypeDefinitionIndex = 56919;

	struct alignas(8) PIOFBIDPBMI
	{
		::RPG::Client::TextID NLCHJCDAKCB; // 0x10
		::RPG::Client::TextID FEBCIGEBJJM; // 0x20
		::System::String* PEGNLFICABO; // 0x30
		::System::String* OCPAACFIDMF; // 0x38
		::System::String* AEAHHOHBDCE; // 0x40
		::System::String* JIKHGGFLHOO; // 0x48
		::System::String* MEAHEEJJFCM; // 0x50
		::System::String* OJGFKPKJAHE; // 0x58
		::System::String* EGLAAFCNBKF; // 0x60
		::System::String* FGOCPOGANCF; // 0x68
		/*
		::System::Void KDPEDNKCMEB(::PIOFBIDPBMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIOFBIDPBMI))((::PBYTE)hIl2Cpp + PIOFBIDPBMI_KDPEDNKCMEB_OFFSET))(this, a1);
		}
		*/

	};
