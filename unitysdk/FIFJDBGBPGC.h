#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigSkinMdb; }
namespace MoleMole::Config { class SkinMdbDataOfRenderer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FIFJDBGBPGC_BJHHNNGACFN_OFFSET UNITYSDK_OFFSET(0x116B4DB0)
#define FIFJDBGBPGC_CREATEOP_OFFSET UNITYSDK_OFFSET(0x116B4550)
#define FIFJDBGBPGC_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x116B47C0)
#define FIFJDBGBPGC_MKCCAEGPIJB_OFFSET UNITYSDK_OFFSET(0x116B4BC0)
#define FIFJDBGBPGC_NPAHAPEAPPP_OFFSET UNITYSDK_OFFSET(0x116B4890)
#define FIFJDBGBPGC_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x116B44B0)
#define FIFJDBGBPGC__CTOR_OFFSET UNITYSDK_OFFSET(0x116B4420)

inline static constexpr unsigned int FIFJDBGBPGC_TypeDefinitionIndex = 64503;

class FIFJDBGBPGC
{
public:
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::String*>, ::MoleMole::Config::SkinMdbDataOfRenderer*>* ICOJCFBJCAM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIFJDBGBPGC__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + FIFJDBGBPGC_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigSkinMdb*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigSkinMdb*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIFJDBGBPGC_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + FIFJDBGBPGC_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void NPAHAPEAPPP(::MoleMole::Config::ConfigSkinMdb* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSkinMdb*))((::PBYTE)hIl2Cpp + FIFJDBGBPGC_NPAHAPEAPPP_OFFSET))(this, DFMKILICPFB);
	}

	::System::Boolean MKCCAEGPIJB(::System::Int32 CJPLACFCFBP, ::System::String* EGHDEGLFOBN, ::System::Collections::Generic::List_1<::System::String*>*& DJCNCELJPOM, ::System::Boolean JENMPJJHNHE)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*&, ::System::Boolean))((::PBYTE)hIl2Cpp + FIFJDBGBPGC_MKCCAEGPIJB_OFFSET))(this, CJPLACFCFBP, EGHDEGLFOBN, DJCNCELJPOM, JENMPJJHNHE);
	}

	::System::Boolean BJHHNNGACFN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIFJDBGBPGC_BJHHNNGACFN_OFFSET))(this);
	}
};
