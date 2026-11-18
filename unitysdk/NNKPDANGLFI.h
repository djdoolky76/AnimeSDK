#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/UnityEngine/Color.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigUIAvatar; }
namespace System { class String; }

#define NNKPDANGLFI_AFKJFHBHPDD_OFFSET UNITYSDK_OFFSET(0x114B18F0)
#define NNKPDANGLFI_CREATEOP_OFFSET UNITYSDK_OFFSET(0x114B11A0)
#define NNKPDANGLFI_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x114B13E0)
#define NNKPDANGLFI_MGNKOKIHKII_OFFSET UNITYSDK_OFFSET(0x114B14B0)
#define NNKPDANGLFI_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x114B1100)
#define NNKPDANGLFI__CTOR_OFFSET UNITYSDK_OFFSET(0x114B1070)

inline static constexpr unsigned int NNKPDANGLFI_TypeDefinitionIndex = 54870;

class NNKPDANGLFI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKPDANGLFI__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + NNKPDANGLFI_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigUIAvatar*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigUIAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKPDANGLFI_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + NNKPDANGLFI_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::UnityEngine::Color MGNKOKIHKII(::System::Int32 GGAANCEAGPM, ::System::String* EHKDNLKPOIH, ::System::String* CADNPJAOGDD)
	{
		return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NNKPDANGLFI_MGNKOKIHKII_OFFSET))(this, GGAANCEAGPM, EHKDNLKPOIH, CADNPJAOGDD);
	}

	::MoleMole::Config::ConfigUIAvatar* AFKJFHBHPDD()
	{
		return ((::MoleMole::Config::ConfigUIAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKPDANGLFI_AFKJFHBHPDD_OFFSET))(this);
	}
};
