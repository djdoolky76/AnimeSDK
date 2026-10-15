#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
namespace System { class String; }

#define EDDOMNACGOI_BCMNDAGGOAC_OFFSET UNITYSDK_OFFSET(0x3C47700)
#define EDDOMNACGOI_BDJPPIMOJBH_OFFSET UNITYSDK_OFFSET(0x3C47880)
#define EDDOMNACGOI_BMOMBCHEEEI_OFFSET UNITYSDK_OFFSET(0x3C47790)
#define EDDOMNACGOI_CTOR_OFFSET UNITYSDK_OFFSET(0x3C47660)
#define EDDOMNACGOI_INBDPDOCEHC_OFFSET UNITYSDK_OFFSET(0x1670)
#define EDDOMNACGOI_MLBFIGKHKEH_OFFSET UNITYSDK_OFFSET(0x202EFC0)
#define EDDOMNACGOI_NOPELAGFMAJ_OFFSET UNITYSDK_OFFSET(0x1690)
#define EDDOMNACGOI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C477C0)

	struct alignas(4) EDDOMNACGOI
	{
		::RPG::MVector3 DOBKPINIPHM; // 0x10
		::RPG::MVector3 LFNHBAEGMKK; // 0x1C
		::System::Void _ctor(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + EDDOMNACGOI_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::MVector3 INBDPDOCEHC()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EDDOMNACGOI_INBDPDOCEHC_OFFSET))(this);
		}

		::System::Void MLBFIGKHKEH(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + EDDOMNACGOI_MLBFIGKHKEH_OFFSET))(this, a1);
		}

		::RPG::MVector3 NOPELAGFMAJ()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EDDOMNACGOI_NOPELAGFMAJ_OFFSET))(this);
		}

		::System::Void BCMNDAGGOAC(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + EDDOMNACGOI_BCMNDAGGOAC_OFFSET))(this, a1);
		}

		::RPG::MVector3 BMOMBCHEEEI(::System::Single a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EDDOMNACGOI_BMOMBCHEEEI_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDDOMNACGOI_TOSTRING_OFFSET))(this);
		}

		::System::String* BDJPPIMOJBH(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EDDOMNACGOI_BDJPPIMOJBH_OFFSET))(this, a1);
		}

	};
