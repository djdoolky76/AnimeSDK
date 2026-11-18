#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

namespace System { class EventArgs; }

#define JIAMFDKMFEJ_ELFGBOHMPKM_APDFCFPGKHI_OFFSET UNITYSDK_OFFSET(0x18A169F0)
#define JIAMFDKMFEJ_ELFGBOHMPKM_MHHJPBJILBJ_OFFSET UNITYSDK_OFFSET(0x18A169A0)
#define JIAMFDKMFEJ_ELFGBOHMPKM_MOJMMGMNGLB_OFFSET UNITYSDK_OFFSET(0x18A16C90)
#define JIAMFDKMFEJ_ELFGBOHMPKM_NDAJGFKIADG_OFFSET UNITYSDK_OFFSET(0x18A16E30)
#define JIAMFDKMFEJ_ELFGBOHMPKM__CTOR_OFFSET UNITYSDK_OFFSET(0x18A16C80)

inline static constexpr unsigned int JIAMFDKMFEJ_ELFGBOHMPKM_TypeDefinitionIndex = 39253;

class JIAMFDKMFEJ_ELFGBOHMPKM : public ::System::Object
{
public:
	::HOCDHMEPPEG AHDCGOFBGBM; // 0x10
	::System::Single ADNIIJINBGJ; // 0x40
	::System::Single OMOJGIFDBIA; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAMFDKMFEJ_ELFGBOHMPKM__CTOR_OFFSET))(this);
	}

	::System::Void MHHJPBJILBJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAMFDKMFEJ_ELFGBOHMPKM_MHHJPBJILBJ_OFFSET))(this);
	}

	::System::Void APDFCFPGKHI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAMFDKMFEJ_ELFGBOHMPKM_APDFCFPGKHI_OFFSET))(this);
	}

	::System::Void MOJMMGMNGLB(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + JIAMFDKMFEJ_ELFGBOHMPKM_MOJMMGMNGLB_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void NDAJGFKIADG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAMFDKMFEJ_ELFGBOHMPKM_NDAJGFKIADG_OFFSET))(this);
	}
};
