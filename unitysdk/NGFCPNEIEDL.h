#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLMHHDBMOCG.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class NGEJCFNLLKD;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }

#define NGFCPNEIEDL_ADHBDABLIJH_OFFSET UNITYSDK_OFFSET(0x12FE5BA0)
#define NGFCPNEIEDL_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x12FE5960)
#define NGFCPNEIEDL_BLIHGMOJJKD_OFFSET UNITYSDK_OFFSET(0x12FE5B30)
#define NGFCPNEIEDL_FLMHLAGHMLE_OFFSET UNITYSDK_OFFSET(0x12FE5A90)
#define NGFCPNEIEDL_GEAJEPKJBDG_OFFSET UNITYSDK_OFFSET(0x12FE5C20)
#define NGFCPNEIEDL_HLFCECJPNOI_OFFSET UNITYSDK_OFFSET(0x12FE5BB0)
#define NGFCPNEIEDL_LAEPFBIMMBM_OFFSET UNITYSDK_OFFSET(0x12FE5B80)
#define NGFCPNEIEDL_NJIJOCMEKBO_OFFSET UNITYSDK_OFFSET(0x12FE5A10)
#define NGFCPNEIEDL_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x12FE5A50)
#define NGFCPNEIEDL_PIFKPFFODLE_OFFSET UNITYSDK_OFFSET(0x12FE5BD0)
#define NGFCPNEIEDL_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x12FE59B0)
#define NGFCPNEIEDL__CTOR_OFFSET UNITYSDK_OFFSET(0x12FE5CB0)

inline static constexpr unsigned int NGFCPNEIEDL_TypeDefinitionIndex = 52143;

class NGFCPNEIEDL : public ::System::Object
{
public:
	::UnityEngine::Vector3 _HDLLAOKBIFH_k__BackingField; // 0x10
	::UnityEngine::Vector3 AKAGDEFAGJA; // 0x1C
	::UnityEngine::Vector3 _LMLFCEAGOPM_k__BackingField; // 0x28
	::HLMHHDBMOCG NNFEBJOONEA; // 0x34
	::UnityEngine::Quaternion _OEOHBFNFNNC_k__BackingField; // 0x38
	::System::Single IAKPGBCAAKM; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFCPNEIEDL__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::NGEJCFNLLKD* DFMKILICPFB, ::MoleMole::Battle::Entity* PNJNAAHKAIB)
	{
		return ((::System::Void(*)(::PVOID, ::NGEJCFNLLKD*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NGFCPNEIEDL_BBOMJDBNHIC_OFFSET))(this, DFMKILICPFB, PNJNAAHKAIB);
	}

	::System::Void PLPONJAKNEB(::System::Single PMCFOMOFIHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NGFCPNEIEDL_PLPONJAKNEB_OFFSET))(this, PMCFOMOFIHN);
	}

	::System::Void NJIJOCMEKBO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFCPNEIEDL_NJIJOCMEKBO_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFCPNEIEDL_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void FLMHLAGHMLE(::UnityEngine::Vector3 DAAEHEHLLLD, ::UnityEngine::Vector3 IACKHFCLPJI, ::UnityEngine::Vector3 AKAGDEFAGJA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NGFCPNEIEDL_FLMHLAGHMLE_OFFSET))(this, DAAEHEHLLLD, IACKHFCLPJI, AKAGDEFAGJA);
	}

	::System::Void BLIHGMOJJKD(::MoleMole::Battle::Entity* MFEHPHCJIMF, ::MoleMole::Config::ConfigPosRot* ICJMAMIPCBG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Config::ConfigPosRot*))((::PBYTE)hIl2Cpp + NGFCPNEIEDL_BLIHGMOJJKD_OFFSET))(this, MFEHPHCJIMF, ICJMAMIPCBG);
	}

	::UnityEngine::Vector3 LAEPFBIMMBM()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFCPNEIEDL_LAEPFBIMMBM_OFFSET))(this);
	}

	::UnityEngine::Quaternion ADHBDABLIJH()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFCPNEIEDL_ADHBDABLIJH_OFFSET))(this);
	}

	::UnityEngine::Vector3 HLFCECJPNOI()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFCPNEIEDL_HLFCECJPNOI_OFFSET))(this);
	}

	::System::Boolean PIFKPFFODLE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFCPNEIEDL_PIFKPFFODLE_OFFSET))(this);
	}

	::System::Void GEAJEPKJBDG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFCPNEIEDL_GEAJEPKJBDG_OFFSET))(this);
	}
};
