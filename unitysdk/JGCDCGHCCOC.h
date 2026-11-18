#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/MoleMole/PlayerAccessoryType.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigPlayerAccessory; }
namespace MoleMole::Config { class PlayerAccessorySkinData; }
namespace MoleMole::Config { class PlayerAccessoryTabData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JGCDCGHCCOC_BJHHNNGACFN_OFFSET UNITYSDK_OFFSET(0x13075880)
#define JGCDCGHCCOC_CREATEOP_OFFSET UNITYSDK_OFFSET(0x13075370)
#define JGCDCGHCCOC_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x130755E0)
#define JGCDCGHCCOC_NPAHAPEAPPP_OFFSET UNITYSDK_OFFSET(0x13075A70)
#define JGCDCGHCCOC_PGNJIJGCHII_OFFSET UNITYSDK_OFFSET(0x130756B0)
#define JGCDCGHCCOC_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x130752D0)
#define JGCDCGHCCOC__CTOR_OFFSET UNITYSDK_OFFSET(0x13075240)

inline static constexpr unsigned int JGCDCGHCCOC_TypeDefinitionIndex = 42345;

class JGCDCGHCCOC
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::PlayerAccessorySkinData*>* ICOJCFBJCAM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGCDCGHCCOC__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + JGCDCGHCCOC_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigPlayerAccessory*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigPlayerAccessory*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGCDCGHCCOC_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + JGCDCGHCCOC_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean PGNJIJGCHII(::System::Int32 CJPLACFCFBP, ::MoleMole::PlayerAccessoryType JFHFNPIDIOA, ::MoleMole::Config::PlayerAccessoryTabData*& DJCNCELJPOM, ::System::Boolean JENMPJJHNHE)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::PlayerAccessoryType, ::MoleMole::Config::PlayerAccessoryTabData*&, ::System::Boolean))((::PBYTE)hIl2Cpp + JGCDCGHCCOC_PGNJIJGCHII_OFFSET))(this, CJPLACFCFBP, JFHFNPIDIOA, DJCNCELJPOM, JENMPJJHNHE);
	}

	::System::Boolean BJHHNNGACFN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JGCDCGHCCOC_BJHHNNGACFN_OFFSET))(this);
	}

	::System::Void NPAHAPEAPPP(::MoleMole::Config::ConfigPlayerAccessory* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigPlayerAccessory*))((::PBYTE)hIl2Cpp + JGCDCGHCCOC_NPAHAPEAPPP_OFFSET))(this, DFMKILICPFB);
	}
};
