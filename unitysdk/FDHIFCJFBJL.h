#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/MoleMole/Config/RunStateType.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class CharacterCommonDatas; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FDHIFCJFBJL_ADMANJPPKGP_OFFSET UNITYSDK_OFFSET(0x116A7980)
#define FDHIFCJFBJL_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x116A7B80)
#define FDHIFCJFBJL_CREATEOP_OFFSET UNITYSDK_OFFSET(0x116A7850)
#define FDHIFCJFBJL_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x116A82E0)
#define FDHIFCJFBJL_NPEFJOCGNIO_OFFSET UNITYSDK_OFFSET(0x116A7C40)
#define FDHIFCJFBJL_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x116A77B0)
#define FDHIFCJFBJL__CTOR_OFFSET UNITYSDK_OFFSET(0x116A7720)

inline static constexpr unsigned int FDHIFCJFBJL_TypeDefinitionIndex = 50535;

class FDHIFCJFBJL
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::RunStateType>* PBNBLPLIDFP; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHIFCJFBJL__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + FDHIFCJFBJL_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::CharacterCommonDatas*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::CharacterCommonDatas*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHIFCJFBJL_CREATEOP_OFFSET))(this);
	}

	::System::Void ADMANJPPKGP(::System::Collections::Generic::List_1<::System::String*>* DABJMKLJINF, ::MoleMole::Config::RunStateType FDLMCAHFLML)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::MoleMole::Config::RunStateType))((::PBYTE)hIl2Cpp + FDHIFCJFBJL_ADMANJPPKGP_OFFSET))(this, DABJMKLJINF, FDLMCAHFLML);
	}

	::MoleMole::CharacterCommonDatas* COPIDBEMEIE()
	{
		return ((::MoleMole::CharacterCommonDatas*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHIFCJFBJL_COPIDBEMEIE_OFFSET))(this);
	}

	::MoleMole::Config::RunStateType NPEFJOCGNIO(::System::Int32 INKFNMNAELK)
	{
		return ((::MoleMole::Config::RunStateType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FDHIFCJFBJL_NPEFJOCGNIO_OFFSET))(this, INKFNMNAELK);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + FDHIFCJFBJL_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
