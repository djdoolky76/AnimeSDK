#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigUIWeaponGacha; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BEKGDNDIGCC_AEAPENBMKPD_OFFSET UNITYSDK_OFFSET(0x113DD1F0)
#define BEKGDNDIGCC_CREATEOP_OFFSET UNITYSDK_OFFSET(0x113DCFB0)
#define BEKGDNDIGCC_DMGFFNOFKEN_OFFSET UNITYSDK_OFFSET(0x113DD5F0)
#define BEKGDNDIGCC_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x113DD420)
#define BEKGDNDIGCC_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x113DD4F0)
#define BEKGDNDIGCC_KPDPMLIKOCE_OFFSET UNITYSDK_OFFSET(0x113DDA20)
#define BEKGDNDIGCC_NEBACKNOCKH_OFFSET UNITYSDK_OFFSET(0x113DD7F0)
#define BEKGDNDIGCC_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x113DCF10)
#define BEKGDNDIGCC__CTOR_OFFSET UNITYSDK_OFFSET(0x113DCE80)

inline static constexpr unsigned int BEKGDNDIGCC_TypeDefinitionIndex = 82719;

class BEKGDNDIGCC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEKGDNDIGCC__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + BEKGDNDIGCC_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigUIWeaponGacha*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigUIWeaponGacha*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEKGDNDIGCC_CREATEOP_OFFSET))(this);
	}

	::UnityEngine::Vector3 AEAPENBMKPD()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BEKGDNDIGCC_AEAPENBMKPD_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + BEKGDNDIGCC_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Config::ConfigUIWeaponGacha* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigUIWeaponGacha*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEKGDNDIGCC_KGNEJKNNODJ_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector3>* DMGFFNOFKEN()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEKGDNDIGCC_DMGFFNOFKEN_OFFSET))(this);
	}

	::UnityEngine::Vector3 NEBACKNOCKH()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BEKGDNDIGCC_NEBACKNOCKH_OFFSET))(this);
	}

	::System::Boolean KPDPMLIKOCE(::System::Int32 HPAPIAGFFNP, ::UnityEngine::Vector3& CJGAFLKGLKL)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + BEKGDNDIGCC_KPDPMLIKOCE_OFFSET))(this, HPAPIAGFFNP, CJGAFLKGLKL);
	}
};
