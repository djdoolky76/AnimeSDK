#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace ConfigModuleLib::Runtime { class LoadOp; }
namespace MoleMole::Config { class ConfigAraTrail; }
namespace System { class String; }

#define FFPGEBKGLKL_CREATEINDEXOP_OFFSET UNITYSDK_OFFSET(0x191BEC20)
#define FFPGEBKGLKL_CREATEITEMLOADOP_OFFSET UNITYSDK_OFFSET(0x191BEDB0)
#define FFPGEBKGLKL_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x191BEF50)
#define FFPGEBKGLKL_OKNNGMFOMOF_OFFSET UNITYSDK_OFFSET(0x191BEEA0)
#define FFPGEBKGLKL_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x191BEB80)
#define FFPGEBKGLKL__CTOR_OFFSET UNITYSDK_OFFSET(0x191BEB40)

inline static constexpr unsigned int FFPGEBKGLKL_TypeDefinitionIndex = 83008;

class FFPGEBKGLKL
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPGEBKGLKL__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + FFPGEBKGLKL_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateIndexOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPGEBKGLKL_CREATEINDEXOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateItemLoadOp(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FFPGEBKGLKL_CREATEITEMLOADOP_OFFSET))(this, CJBJONJDOLI);
	}

	::MoleMole::Config::ConfigAraTrail* OKNNGMFOMOF(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::Config::ConfigAraTrail*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FFPGEBKGLKL_OKNNGMFOMOF_OFFSET))(this, MCOHLHMKLIP);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + FFPGEBKGLKL_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
