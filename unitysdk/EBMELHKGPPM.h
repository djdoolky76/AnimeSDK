#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LPBPIOPMAMN.h"
#include "unitysdk/BAJGIAOEOJH.h"

class KGBFLHNJHHN;

#define EBMELHKGPPM_CPNJOBHGKFA_OFFSET UNITYSDK_OFFSET(0x19AE1D30)
#define EBMELHKGPPM_INFNBBALMAA_OFFSET UNITYSDK_OFFSET(0x19AE15C0)
#define EBMELHKGPPM_KNDAKOOJMDM_OFFSET UNITYSDK_OFFSET(0x19AE18C0)
#define EBMELHKGPPM_NFCEJCDCKFH_OFFSET UNITYSDK_OFFSET(0x19AE1920)
#define EBMELHKGPPM__CTOR_OFFSET UNITYSDK_OFFSET(0x19AE15B0)

inline static constexpr unsigned int EBMELHKGPPM_TypeDefinitionIndex = 14276;

class EBMELHKGPPM : public ::LPBPIOPMAMN
{
public:
	::Il2CppArray<::System::Int32>* CFGKMKHMLHM; // 0xA0
	::Il2CppArray<::System::Single>* ALKMDLLNPBI; // 0xA8

	::System::Void _ctor(::BAJGIAOEOJH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BAJGIAOEOJH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EBMELHKGPPM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 INFNBBALMAA(::System::Int32 EEMBCHLMOLG)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EBMELHKGPPM_INFNBBALMAA_OFFSET))(this, EEMBCHLMOLG);
	}

	::System::Single KNDAKOOJMDM()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EBMELHKGPPM_KNDAKOOJMDM_OFFSET))(this);
	}

	::System::Single NFCEJCDCKFH(::System::Int32 EEMBCHLMOLG)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EBMELHKGPPM_NFCEJCDCKFH_OFFSET))(this, EEMBCHLMOLG);
	}

	::System::Single CPNJOBHGKFA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EBMELHKGPPM_CPNJOBHGKFA_OFFSET))(this);
	}
};
