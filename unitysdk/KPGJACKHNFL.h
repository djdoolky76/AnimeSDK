#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LFDDLEHKGIK.h"

class GECKFNANGKB;
class HPGBIDMABJP;
namespace System { class EventArgs; }

#define KPGJACKHNFL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x129AF010)
#define KPGJACKHNFL_FAJGBHMJKDL_OFFSET UNITYSDK_OFFSET(0x129AEF50)
#define KPGJACKHNFL_GNADKLDHLKO_OFFSET UNITYSDK_OFFSET(0x129AEB40)
#define KPGJACKHNFL_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x129AE940)
#define KPGJACKHNFL_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x129AF000)
#define KPGJACKHNFL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x129AE660)
#define KPGJACKHNFL__CTOR_OFFSET UNITYSDK_OFFSET(0x129AEAC0)

inline static constexpr unsigned int KPGJACKHNFL_TypeDefinitionIndex = 87783;

class KPGJACKHNFL : public ::LFDDLEHKGIK
{
public:
	::GECKFNANGKB* PHBBDGJLLGE; // 0x40
	::HPGBIDMABJP* KDMABPELCGN; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGJACKHNFL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGJACKHNFL_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGJACKHNFL_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void GNADKLDHLKO(::System::Boolean PBDBKKLANHG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KPGJACKHNFL_GNADKLDHLKO_OFFSET))(this, PBDBKKLANHG);
	}

	::System::Void FAJGBHMJKDL(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + KPGJACKHNFL_FAJGBHMJKDL_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGJACKHNFL_IFHNMAGGFAE_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGJACKHNFL_ECNOGHHOPPF_OFFSET))(this);
	}
};
