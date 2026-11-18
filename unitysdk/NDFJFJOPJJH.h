#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/EVariantElement.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigBuffMisc; }
namespace MoleMole::Config { class ConfigFrozenBuff; }

#define NDFJFJOPJJH_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0xE573A60)
#define NDFJFJOPJJH_CREATEOP_OFFSET UNITYSDK_OFFSET(0xE573820)
#define NDFJFJOPJJH_HKJPIEHIDBI_OFFSET UNITYSDK_OFFSET(0xE574060)
#define NDFJFJOPJJH_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0xE573B20)
#define NDFJFJOPJJH_JPCFEPGKIPM_OFFSET UNITYSDK_OFFSET(0xE573BF0)
#define NDFJFJOPJJH_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0xE573780)
#define NDFJFJOPJJH__CTOR_OFFSET UNITYSDK_OFFSET(0xE5736F0)

inline static constexpr unsigned int NDFJFJOPJJH_TypeDefinitionIndex = 40705;

class NDFJFJOPJJH
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDFJFJOPJJH__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + NDFJFJOPJJH_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigBuffMisc*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigBuffMisc*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDFJFJOPJJH_CREATEOP_OFFSET))(this);
	}

	::MoleMole::Config::ConfigBuffMisc* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigBuffMisc*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDFJFJOPJJH_COPIDBEMEIE_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + NDFJFJOPJJH_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Single JPCFEPGKIPM(::MoleMole::Config::DamageElementType HELLOIIPKGF, ::MoleMole::Config::EVariantElement CCAGLDOOPGP)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::Config::DamageElementType, ::MoleMole::Config::EVariantElement))((::PBYTE)hIl2Cpp + NDFJFJOPJJH_JPCFEPGKIPM_OFFSET))(this, HELLOIIPKGF, CCAGLDOOPGP);
	}

	::MoleMole::Config::ConfigFrozenBuff* HKJPIEHIDBI(::MoleMole::Config::EVariantElement NNPGBCPDJCB)
	{
		return ((::MoleMole::Config::ConfigFrozenBuff*(*)(::PVOID, ::MoleMole::Config::EVariantElement))((::PBYTE)hIl2Cpp + NDFJFJOPJJH_HKJPIEHIDBI_OFFSET))(this, NNPGBCPDJCB);
	}
};
