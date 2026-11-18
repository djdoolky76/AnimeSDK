#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class ConfigUIAdapt; }
namespace MoleMole { class DeviceAdaptData; }
namespace MoleMole { class DevicePhysicalData; }
namespace MoleMole { class DevicePhysicalPadingData; }
namespace MoleMole { class DeviceScreenAdaptProfile; }
namespace MoleMole { class GlobalPaddingData; }
namespace MoleMole { class UIAdaptData; }
namespace System { class String; }

#define FDCFKEPLDFI_BANLLGAGPOJ_OFFSET UNITYSDK_OFFSET(0x156B6D40)
#define FDCFKEPLDFI_BCBAJOJEBFF_OFFSET UNITYSDK_OFFSET(0x156B71A0)
#define FDCFKEPLDFI_BJHHNNGACFN_OFFSET UNITYSDK_OFFSET(0x156B6430)
#define FDCFKEPLDFI_CREATEOP_OFFSET UNITYSDK_OFFSET(0x156B6300)
#define FDCFKEPLDFI_HIEBOPOKAPB_OFFSET UNITYSDK_OFFSET(0x156B6620)
#define FDCFKEPLDFI_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x156B7520)
#define FDCFKEPLDFI_OCPLJJOMHGN_1_OFFSET UNITYSDK_OFFSET(0x156B6F40)
#define FDCFKEPLDFI_OCPLJJOMHGN_OFFSET UNITYSDK_OFFSET(0x156B6870)
#define FDCFKEPLDFI_OOHEGPOGICM_OFFSET UNITYSDK_OFFSET(0x156B7260)
#define FDCFKEPLDFI_PDIMBBDAKKG_OFFSET UNITYSDK_OFFSET(0x156B6AC0)
#define FDCFKEPLDFI_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x156B6260)
#define FDCFKEPLDFI__CTOR_OFFSET UNITYSDK_OFFSET(0x156B61D0)

inline static constexpr unsigned int FDCFKEPLDFI_TypeDefinitionIndex = 53027;

class FDCFKEPLDFI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDCFKEPLDFI__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + FDCFKEPLDFI_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigUIAdapt*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigUIAdapt*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDCFKEPLDFI_CREATEOP_OFFSET))(this);
	}

	::System::Boolean BJHHNNGACFN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FDCFKEPLDFI_BJHHNNGACFN_OFFSET))(this);
	}

	::MoleMole::DevicePhysicalData* HIEBOPOKAPB(::System::String* HCHGNFDMINL)
	{
		return ((::MoleMole::DevicePhysicalData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FDCFKEPLDFI_HIEBOPOKAPB_OFFSET))(this, HCHGNFDMINL);
	}

	::MoleMole::DeviceAdaptData* OCPLJJOMHGN(::System::String* HCHGNFDMINL, ::System::Int32 NGIAEEBHCOC, ::System::Int32 EHEGJCCCJCA, ::MoleMole::DeviceScreenAdaptProfile*& EBHHDPPBPDK)
	{
		return ((::MoleMole::DeviceAdaptData*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::MoleMole::DeviceScreenAdaptProfile*&))((::PBYTE)hIl2Cpp + FDCFKEPLDFI_OCPLJJOMHGN_OFFSET))(this, HCHGNFDMINL, NGIAEEBHCOC, EHEGJCCCJCA, EBHHDPPBPDK);
	}

	::MoleMole::DevicePhysicalPadingData* PDIMBBDAKKG(::System::String* HCHGNFDMINL)
	{
		return ((::MoleMole::DevicePhysicalPadingData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FDCFKEPLDFI_PDIMBBDAKKG_OFFSET))(this, HCHGNFDMINL);
	}

	::MoleMole::GlobalPaddingData* BANLLGAGPOJ(::System::String* HCHGNFDMINL)
	{
		return ((::MoleMole::GlobalPaddingData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FDCFKEPLDFI_BANLLGAGPOJ_OFFSET))(this, HCHGNFDMINL);
	}

	::MoleMole::DeviceAdaptData* OCPLJJOMHGN_1(::System::String* HCHGNFDMINL)
	{
		return ((::MoleMole::DeviceAdaptData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FDCFKEPLDFI_OCPLJJOMHGN_1_OFFSET))(this, HCHGNFDMINL);
	}

	::MoleMole::UIAdaptData* BCBAJOJEBFF(::System::String* ONBDOPOHLIB, ::GMFAKIPCDED BJONBLDFNHC)
	{
		return ((::MoleMole::UIAdaptData*(*)(::PVOID, ::System::String*, ::GMFAKIPCDED))((::PBYTE)hIl2Cpp + FDCFKEPLDFI_BCBAJOJEBFF_OFFSET))(this, ONBDOPOHLIB, BJONBLDFNHC);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + FDCFKEPLDFI_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::UIAdaptData* OOHEGPOGICM(::System::String* ONBDOPOHLIB, ::GMFAKIPCDED BJONBLDFNHC)
	{
		return ((::MoleMole::UIAdaptData*(*)(::PVOID, ::System::String*, ::GMFAKIPCDED))((::PBYTE)hIl2Cpp + FDCFKEPLDFI_OOHEGPOGICM_OFFSET))(this, ONBDOPOHLIB, BJONBLDFNHC);
	}
};
