#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKHNHEBKPPI.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace System { class String; }

#define IELMGLNMLFN_AKKHIJINNOD_OFFSET UNITYSDK_OFFSET(0x15F04330)
#define IELMGLNMLFN_CTOR_OFFSET UNITYSDK_OFFSET(0x2E806C0)
#define IELMGLNMLFN_EJDHJGLAIDM_OFFSET UNITYSDK_OFFSET(0x2E80710)
#define IELMGLNMLFN_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x2E807E0)
#define IELMGLNMLFN_OIPJKMBIFAL_OFFSET UNITYSDK_OFFSET(0x2E80770)
#define IELMGLNMLFN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2E80700)

	struct alignas(4) IELMGLNMLFN
	{
		::RPG::Client::TextID DIDPADKMCAL; // 0x10
		::PKHNHEBKPPI MHKBFHINBMI; // 0x20
		::System::Void _ctor(::RPG::Client::TextID a1, ::PKHNHEBKPPI a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::PKHNHEBKPPI))((::PBYTE)hIl2Cpp + IELMGLNMLFN_CTOR_OFFSET))(this, a1, a2);
		}

		/*
		static ::IELMGLNMLFN AKKHIJINNOD(::PKHNHEBKPPI a1)
		{
			return ((::IELMGLNMLFN(*)(::PKHNHEBKPPI))((::PBYTE)hIl2Cpp + IELMGLNMLFN_AKKHIJINNOD_OFFSET))(a1);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IELMGLNMLFN_TOSTRING_OFFSET))(this);
		}

		::RPG::Client::TextID EJDHJGLAIDM()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + IELMGLNMLFN_EJDHJGLAIDM_OFFSET))(this);
		}

		::PKHNHEBKPPI OIPJKMBIFAL()
		{
			return ((::PKHNHEBKPPI(*)(::PVOID))((::PBYTE)hIl2Cpp + IELMGLNMLFN_OIPJKMBIFAL_OFFSET))(this);
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IELMGLNMLFN_LDAMHBBILAD_OFFSET))(this);
		}

	};
