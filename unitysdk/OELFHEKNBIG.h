#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/MoleMole/MarcelShape.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/MoleMole/MarcelShapeConfig.h"
#include "unitysdk/UnityEngine/Color.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class MarcelConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define OELFHEKNBIG_CGMOBOBGJME_OFFSET UNITYSDK_OFFSET(0x14F70A20)
#define OELFHEKNBIG_COBNJAAKCAG_OFFSET UNITYSDK_OFFSET(0x14F70BC0)
#define OELFHEKNBIG_CREATEOP_OFFSET UNITYSDK_OFFSET(0x14F70710)
#define OELFHEKNBIG_EEBFAGDBDLB_OFFSET UNITYSDK_OFFSET(0x14F70AF0)
#define OELFHEKNBIG_GBDNLMFAOLB_OFFSET UNITYSDK_OFFSET(0x14F70E40)
#define OELFHEKNBIG_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x14F70D70)
#define OELFHEKNBIG_MEAFKEJJKAO_OFFSET UNITYSDK_OFFSET(0x14F70950)
#define OELFHEKNBIG_PILKNNJDFLJ_OFFSET UNITYSDK_OFFSET(0x14F70C90)
#define OELFHEKNBIG_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x14F70670)
#define OELFHEKNBIG__CTOR_OFFSET UNITYSDK_OFFSET(0x14F705E0)

inline static constexpr unsigned int OELFHEKNBIG_TypeDefinitionIndex = 50816;

class OELFHEKNBIG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OELFHEKNBIG__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + OELFHEKNBIG_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::MarcelConfig*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::MarcelConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OELFHEKNBIG_CREATEOP_OFFSET))(this);
	}

	::UnityEngine::AnimationCurve* MEAFKEJJKAO()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + OELFHEKNBIG_MEAFKEJJKAO_OFFSET))(this);
	}

	::System::Single CGMOBOBGJME()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OELFHEKNBIG_CGMOBOBGJME_OFFSET))(this);
	}

	::System::UInt32 EEBFAGDBDLB()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OELFHEKNBIG_EEBFAGDBDLB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* COBNJAAKCAG()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OELFHEKNBIG_COBNJAAKCAG_OFFSET))(this);
	}

	::UnityEngine::Color PILKNNJDFLJ()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + OELFHEKNBIG_PILKNNJDFLJ_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + OELFHEKNBIG_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean GBDNLMFAOLB(::MoleMole::MarcelShape AGNLMKIFIEM, ::MoleMole::MarcelShapeConfig& DFMKILICPFB)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::MarcelShape, ::MoleMole::MarcelShapeConfig&))((::PBYTE)hIl2Cpp + OELFHEKNBIG_GBDNLMFAOLB_OFFSET))(this, AGNLMKIFIEM, DFMKILICPFB);
	}
};
