#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigSkinPreview; }
namespace MoleMole::Config { class InteractionCommonData; }
namespace MoleMole::Config { class SkinPreviewData; }
namespace MoleMole::Config { class SkinPreviewDataOfAvatar; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NEJJOJIGNAM_AKBCCLMHIJC_OFFSET UNITYSDK_OFFSET(0x11F70670)
#define NEJJOJIGNAM_BJHHNNGACFN_OFFSET UNITYSDK_OFFSET(0x11F703B0)
#define NEJJOJIGNAM_CREATEOP_OFFSET UNITYSDK_OFFSET(0x11F70140)
#define NEJJOJIGNAM_HOMEOJAGFLF_OFFSET UNITYSDK_OFFSET(0x11F709F0)
#define NEJJOJIGNAM_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x11F705A0)
#define NEJJOJIGNAM_KMDFNBEFBFI_OFFSET UNITYSDK_OFFSET(0x11F70EA0)
#define NEJJOJIGNAM_NPAHAPEAPPP_OFFSET UNITYSDK_OFFSET(0x11F70BB0)
#define NEJJOJIGNAM_PGNJIJGCHII_OFFSET UNITYSDK_OFFSET(0x11F70830)
#define NEJJOJIGNAM_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x11F700A0)
#define NEJJOJIGNAM__CTOR_OFFSET UNITYSDK_OFFSET(0x11F70010)

inline static constexpr unsigned int NEJJOJIGNAM_TypeDefinitionIndex = 78711;

class NEJJOJIGNAM
{
public:
	::MoleMole::Config::InteractionCommonData* OFCDPDLIKBJ; // 0x30
	::MoleMole::Config::InteractionCommonData* FCPDCJJDLEI; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::SkinPreviewData*>* ICOJCFBJCAM; // 0x40
	::MoleMole::Config::InteractionCommonData* FKCLJLCLJBG; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJJOJIGNAM__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + NEJJOJIGNAM_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigSkinPreview*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigSkinPreview*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJJOJIGNAM_CREATEOP_OFFSET))(this);
	}

	::System::Boolean BJHHNNGACFN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJJOJIGNAM_BJHHNNGACFN_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + NEJJOJIGNAM_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Config::InteractionCommonData* AKBCCLMHIJC()
	{
		return ((::MoleMole::Config::InteractionCommonData*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJJOJIGNAM_AKBCCLMHIJC_OFFSET))(this);
	}

	::System::Boolean PGNJIJGCHII(::System::Int32 PKMFBJMJCOO, ::MoleMole::Config::SkinPreviewDataOfAvatar*& DJCNCELJPOM, ::System::Boolean JENMPJJHNHE)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::Config::SkinPreviewDataOfAvatar*&, ::System::Boolean))((::PBYTE)hIl2Cpp + NEJJOJIGNAM_PGNJIJGCHII_OFFSET))(this, PKMFBJMJCOO, DJCNCELJPOM, JENMPJJHNHE);
	}

	::MoleMole::Config::InteractionCommonData* HOMEOJAGFLF()
	{
		return ((::MoleMole::Config::InteractionCommonData*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJJOJIGNAM_HOMEOJAGFLF_OFFSET))(this);
	}

	::System::Void NPAHAPEAPPP(::MoleMole::Config::ConfigSkinPreview* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSkinPreview*))((::PBYTE)hIl2Cpp + NEJJOJIGNAM_NPAHAPEAPPP_OFFSET))(this, DFMKILICPFB);
	}

	::MoleMole::Config::InteractionCommonData* KMDFNBEFBFI()
	{
		return ((::MoleMole::Config::InteractionCommonData*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJJOJIGNAM_KMDFNBEFBFI_OFFSET))(this);
	}
};
