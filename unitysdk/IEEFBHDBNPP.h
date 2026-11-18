#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define IEEFBHDBNPP_CEMOOKEMBLH_OFFSET UNITYSDK_OFFSET(0x141BEF90)
#define IEEFBHDBNPP_CHNONLFGLAD_OFFSET UNITYSDK_OFFSET(0x141BEF50)
#define IEEFBHDBNPP_GJEKCGJJBPH_OFFSET UNITYSDK_OFFSET(0x141BEEF0)
#define IEEFBHDBNPP_IKJALDMNNNG_OFFSET UNITYSDK_OFFSET(0x141BEEA0)
#define IEEFBHDBNPP_LEMOCJONLNJ_OFFSET UNITYSDK_OFFSET(0x141BEFA0)
#define IEEFBHDBNPP_LKBCHHCOMDE_OFFSET UNITYSDK_OFFSET(0x141BED50)
#define IEEFBHDBNPP_MMIKMAHGGGM_OFFSET UNITYSDK_OFFSET(0x141BEF70)
#define IEEFBHDBNPP_OICOOHNGOPB_OFFSET UNITYSDK_OFFSET(0x141BEF80)
#define IEEFBHDBNPP_OMLBFEPAPHN_OFFSET UNITYSDK_OFFSET(0x141BEF40)
#define IEEFBHDBNPP__CTOR_OFFSET UNITYSDK_OFFSET(0x141BED00)

inline static constexpr unsigned int IEEFBHDBNPP_TypeDefinitionIndex = 56453;

class IEEFBHDBNPP : public ::System::Object
{
public:
	::UnityEngine::Vector3 MDABEAOAHAA; // 0x10
	::UnityEngine::Quaternion DECHGNFPCED; // 0x1C
	::System::Single LMAIAJNKINN; // 0x2C
	::System::Single DIHAJBKLGMJ; // 0x30
	::System::Single NHCEHMEOHPK; // 0x34
	::System::Single HFGOABEANJN; // 0x38

	::System::Void _ctor(::UnityEngine::Vector3 LPOIBLLILAA, ::UnityEngine::Quaternion GJNLCLDFFIN, ::System::Single INNEMGGMFNB, ::System::Single AEIGNNIGOCH, ::System::Single MPCODBIHGNM, ::System::Single DHJLCCLKDLE)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IEEFBHDBNPP__CTOR_OFFSET))(this, LPOIBLLILAA, GJNLCLDFFIN, INNEMGGMFNB, AEIGNNIGOCH, MPCODBIHGNM, DHJLCCLKDLE);
	}

	::System::Boolean LKBCHHCOMDE(::UnityEngine::Vector3 OHOGDOMNHNK, ::System::Boolean BIHFCPJENEN)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + IEEFBHDBNPP_LKBCHHCOMDE_OFFSET))(this, OHOGDOMNHNK, BIHFCPJENEN);
	}

	::System::Single OMLBFEPAPHN()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEFBHDBNPP_OMLBFEPAPHN_OFFSET))(this);
	}

	::System::Single GJEKCGJJBPH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEFBHDBNPP_GJEKCGJJBPH_OFFSET))(this);
	}

	::UnityEngine::Vector3 CHNONLFGLAD()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEFBHDBNPP_CHNONLFGLAD_OFFSET))(this);
	}

	::System::Single IKJALDMNNNG()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEFBHDBNPP_IKJALDMNNNG_OFFSET))(this);
	}

	::System::Single MMIKMAHGGGM()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEFBHDBNPP_MMIKMAHGGGM_OFFSET))(this);
	}

	::System::Single OICOOHNGOPB()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEFBHDBNPP_OICOOHNGOPB_OFFSET))(this);
	}

	::System::Single CEMOOKEMBLH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEFBHDBNPP_CEMOOKEMBLH_OFFSET))(this);
	}

	::UnityEngine::Quaternion LEMOCJONLNJ()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEFBHDBNPP_LEMOCJONLNJ_OFFSET))(this);
	}
};
