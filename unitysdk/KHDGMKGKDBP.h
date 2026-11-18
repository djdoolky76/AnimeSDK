#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AODIFLIBBJA;
class DCBJLLONIAL;
namespace MoleMole::Config { class PhotoCameraModeOverride; }

#define KHDGMKGKDBP_BGBJBDADKLF_OFFSET UNITYSDK_OFFSET(0x17909A20)
#define KHDGMKGKDBP_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x179098F0)
#define KHDGMKGKDBP_BKGDJFGPMHJ_OFFSET UNITYSDK_OFFSET(0x17909A50)
#define KHDGMKGKDBP_DKCMGJOIJAI_OFFSET UNITYSDK_OFFSET(0x17909950)
#define KHDGMKGKDBP_KIJAJIHPBDL_OFFSET UNITYSDK_OFFSET(0x179099B0)
#define KHDGMKGKDBP_MKFKHMFBGOL_OFFSET UNITYSDK_OFFSET(0x17909A30)
#define KHDGMKGKDBP_OPHCKMFDEHA_OFFSET UNITYSDK_OFFSET(0x17909A40)
#define KHDGMKGKDBP__CTOR_OFFSET UNITYSDK_OFFSET(0x17909A10)

inline static constexpr unsigned int KHDGMKGKDBP_TypeDefinitionIndex = 69180;

class KHDGMKGKDBP : public ::System::Object
{
public:
	::DCBJLLONIAL* _AGAOJDCEADI_k__BackingField; // 0x10
	::AODIFLIBBJA* _JEJMEEKJNPL_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHDGMKGKDBP__CTOR_OFFSET))(this);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHDGMKGKDBP_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Void DKCMGJOIJAI(::MoleMole::Config::PhotoCameraModeOverride* EKPAIOGJEPO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PhotoCameraModeOverride*))((::PBYTE)hIl2Cpp + KHDGMKGKDBP_DKCMGJOIJAI_OFFSET))(this, EKPAIOGJEPO);
	}

	::System::Void KIJAJIHPBDL(::AODIFLIBBJA* GEJCKFFFKCL)
	{
		return ((::System::Void(*)(::PVOID, ::AODIFLIBBJA*))((::PBYTE)hIl2Cpp + KHDGMKGKDBP_KIJAJIHPBDL_OFFSET))(this, GEJCKFFFKCL);
	}

	::DCBJLLONIAL* BGBJBDADKLF()
	{
		return ((::DCBJLLONIAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHDGMKGKDBP_BGBJBDADKLF_OFFSET))(this);
	}

	::System::Void MKFKHMFBGOL(::DCBJLLONIAL* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::DCBJLLONIAL*))((::PBYTE)hIl2Cpp + KHDGMKGKDBP_MKFKHMFBGOL_OFFSET))(this, EGEGIMGMJHN);
	}

	::AODIFLIBBJA* OPHCKMFDEHA()
	{
		return ((::AODIFLIBBJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHDGMKGKDBP_OPHCKMFDEHA_OFFSET))(this);
	}

	::System::Void BKGDJFGPMHJ(::AODIFLIBBJA* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::AODIFLIBBJA*))((::PBYTE)hIl2Cpp + KHDGMKGKDBP_BKGDJFGPMHJ_OFFSET))(this, EGEGIMGMJHN);
	}
};
