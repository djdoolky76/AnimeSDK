#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPMDLEDECJN.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/CGDADMHCJEL.h"

class GCFEDDFHGLD;

#define ECNOLJOECBL_AEGGJFLEPME_OFFSET UNITYSDK_OFFSET(0x15893100)
#define ECNOLJOECBL_CBOFLAMKKNC_OFFSET UNITYSDK_OFFSET(0x15893070)
#define ECNOLJOECBL_HBKJFHBMEMP_OFFSET UNITYSDK_OFFSET(0x15892B40)
#define ECNOLJOECBL_KNLGIGBGGFH_OFFSET UNITYSDK_OFFSET(0x15892D90)
#define ECNOLJOECBL_NHENDKMIFPI_OFFSET UNITYSDK_OFFSET(0x15892FC0)
#define ECNOLJOECBL_PKAFJHDJEDO_OFFSET UNITYSDK_OFFSET(0x15892B80)
#define ECNOLJOECBL__CTOR_OFFSET UNITYSDK_OFFSET(0x15892FB0)

inline static constexpr unsigned int ECNOLJOECBL_TypeDefinitionIndex = 80286;

class ECNOLJOECBL : public ::GPMDLEDECJN
{
public:
	::GCFEDDFHGLD* MJHEJAKNFPN; // 0x10
	::System::Single NIIHPPEHGAM; // 0x18
	::UnityEngine::Vector3 KIGANJIPBCF; // 0x1C
	::UnityEngine::Vector3 EDEFLFIKNFK; // 0x28
	::UnityEngine::Vector3 BPABEFPJLKO; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNOLJOECBL__CTOR_OFFSET))(this);
	}

	::System::Boolean HBKJFHBMEMP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNOLJOECBL_HBKJFHBMEMP_OFFSET))(this);
	}

	::CGDADMHCJEL PKAFJHDJEDO(::System::Single FNIOPKPHDEH)
	{
		return ((::CGDADMHCJEL(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ECNOLJOECBL_PKAFJHDJEDO_OFFSET))(this, FNIOPKPHDEH);
	}

	::System::Void KNLGIGBGGFH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNOLJOECBL_KNLGIGBGGFH_OFFSET))(this);
	}

	::CGDADMHCJEL NHENDKMIFPI(::System::Single MIALFKCCCPI)
	{
		return ((::CGDADMHCJEL(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ECNOLJOECBL_NHENDKMIFPI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void CBOFLAMKKNC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNOLJOECBL_CBOFLAMKKNC_OFFSET))(this);
	}

	::System::Boolean AEGGJFLEPME()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNOLJOECBL_AEGGJFLEPME_OFFSET))(this);
	}
};
