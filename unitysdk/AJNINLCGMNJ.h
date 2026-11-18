#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class ComicImgStyle; }
namespace MoleMole { class ComicImgStyleConfig; }
namespace System { class String; }

#define AJNINLCGMNJ_CREATEOP_OFFSET UNITYSDK_OFFSET(0x17CD8F20)
#define AJNINLCGMNJ_FGAKNPFJPFJ_OFFSET UNITYSDK_OFFSET(0x17CD96D0)
#define AJNINLCGMNJ_HPJCDDMIKIA_OFFSET UNITYSDK_OFFSET(0x17CD9260)
#define AJNINLCGMNJ_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x17CD9190)
#define AJNINLCGMNJ_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x17CD8E80)
#define AJNINLCGMNJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17CD8DF0)

inline static constexpr unsigned int AJNINLCGMNJ_TypeDefinitionIndex = 73135;

class AJNINLCGMNJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNINLCGMNJ__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + AJNINLCGMNJ_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ComicImgStyleConfig*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ComicImgStyleConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNINLCGMNJ_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + AJNINLCGMNJ_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::ComicImgStyle* HPJCDDMIKIA(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::ComicImgStyle*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AJNINLCGMNJ_HPJCDDMIKIA_OFFSET))(this, MCOHLHMKLIP);
	}

	::MoleMole::ComicImgStyleConfig* FGAKNPFJPFJ()
	{
		return ((::MoleMole::ComicImgStyleConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNINLCGMNJ_FGAKNPFJPFJ_OFFSET))(this);
	}
};
