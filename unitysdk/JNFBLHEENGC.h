#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetPath.h"

class BKGKJNHLCKC;

#define JNFBLHEENGC_KIMLENBJMJF_OFFSET UNITYSDK_OFFSET(0x1874F8C0)
#define JNFBLHEENGC_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x1874F830)
#define JNFBLHEENGC_NIOLACCPKHH_OFFSET UNITYSDK_OFFSET(0x1874F940)
#define JNFBLHEENGC_NJKOBFEKDMO_OFFSET UNITYSDK_OFFSET(0x1874F980)
#define JNFBLHEENGC_NKFNCMHIHMF_OFFSET UNITYSDK_OFFSET(0x1874F8B0)
#define JNFBLHEENGC__CTOR_OFFSET UNITYSDK_OFFSET(0x1874F820)

inline static constexpr unsigned int JNFBLHEENGC_TypeDefinitionIndex = 64094;

class JNFBLHEENGC : public ::System::Object
{
public:
	::BKGKJNHLCKC* _NIDMLKOGKNL_k__BackingField; // 0x10

	::System::Void _ctor(::BKGKJNHLCKC* EAKKFKPOBLE)
	{
		return ((::System::Void(*)(::PVOID, ::BKGKJNHLCKC*))((::PBYTE)hIl2Cpp + JNFBLHEENGC__CTOR_OFFSET))(this, EAKKFKPOBLE);
	}

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNFBLHEENGC_LPFMNKEFPMM_OFFSET))(this);
	}

	::System::Void NKFNCMHIHMF(::BKGKJNHLCKC* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::BKGKJNHLCKC*))((::PBYTE)hIl2Cpp + JNFBLHEENGC_NKFNCMHIHMF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 KIMLENBJMJF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNFBLHEENGC_KIMLENBJMJF_OFFSET))(this);
	}

	::Foundation::AssetPath NIOLACCPKHH()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + JNFBLHEENGC_NIOLACCPKHH_OFFSET))(this);
	}

	::BKGKJNHLCKC* NJKOBFEKDMO()
	{
		return ((::BKGKJNHLCKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNFBLHEENGC_NJKOBFEKDMO_OFFSET))(this);
	}
};
