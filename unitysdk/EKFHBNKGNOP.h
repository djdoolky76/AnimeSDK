#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPMDLEDECJN.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/CGDADMHCJEL.h"

class GCFEDDFHGLD;

#define EKFHBNKGNOP_AEGGJFLEPME_OFFSET UNITYSDK_OFFSET(0x1711B390)
#define EKFHBNKGNOP_CBOFLAMKKNC_OFFSET UNITYSDK_OFFSET(0x1711B4D0)
#define EKFHBNKGNOP_HBKJFHBMEMP_OFFSET UNITYSDK_OFFSET(0x1711AE30)
#define EKFHBNKGNOP_KNLGIGBGGFH_OFFSET UNITYSDK_OFFSET(0x1711B0F0)
#define EKFHBNKGNOP_NHENDKMIFPI_OFFSET UNITYSDK_OFFSET(0x1711B420)
#define EKFHBNKGNOP_PKAFJHDJEDO_OFFSET UNITYSDK_OFFSET(0x1711AE70)
#define EKFHBNKGNOP__CTOR_OFFSET UNITYSDK_OFFSET(0x1711B380)

inline static constexpr unsigned int EKFHBNKGNOP_TypeDefinitionIndex = 78306;

class EKFHBNKGNOP : public ::GPMDLEDECJN
{
public:
	::GCFEDDFHGLD* MJHEJAKNFPN; // 0x10
	::UnityEngine::Vector3 KIGANJIPBCF; // 0x18
	::UnityEngine::Vector3 BPABEFPJLKO; // 0x24
	::UnityEngine::Vector3 EDEFLFIKNFK; // 0x30
	::UnityEngine::Vector3 DDPMIHHGMBC; // 0x3C
	::System::Single NIIHPPEHGAM; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKFHBNKGNOP__CTOR_OFFSET))(this);
	}

	::System::Boolean HBKJFHBMEMP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EKFHBNKGNOP_HBKJFHBMEMP_OFFSET))(this);
	}

	::CGDADMHCJEL PKAFJHDJEDO(::System::Single FNIOPKPHDEH)
	{
		return ((::CGDADMHCJEL(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EKFHBNKGNOP_PKAFJHDJEDO_OFFSET))(this, FNIOPKPHDEH);
	}

	::System::Void KNLGIGBGGFH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKFHBNKGNOP_KNLGIGBGGFH_OFFSET))(this);
	}

	::System::Boolean AEGGJFLEPME()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EKFHBNKGNOP_AEGGJFLEPME_OFFSET))(this);
	}

	::CGDADMHCJEL NHENDKMIFPI(::System::Single MIALFKCCCPI)
	{
		return ((::CGDADMHCJEL(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EKFHBNKGNOP_NHENDKMIFPI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void CBOFLAMKKNC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKFHBNKGNOP_CBOFLAMKKNC_OFFSET))(this);
	}
};
