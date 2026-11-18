#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class PRDConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LLOOIMBMGIB_CREATEOP_OFFSET UNITYSDK_OFFSET(0x14DC8570)
#define LLOOIMBMGIB_EEIPLAAFIEK_OFFSET UNITYSDK_OFFSET(0x14DC88D0)
#define LLOOIMBMGIB_FNLFEMHNFEF_OFFSET UNITYSDK_OFFSET(0x14DC8B80)
#define LLOOIMBMGIB_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x14DC8800)
#define LLOOIMBMGIB_KGNNONHDDMA_1_OFFSET UNITYSDK_OFFSET(0x14DC8700)
#define LLOOIMBMGIB_KGNNONHDDMA_OFFSET UNITYSDK_OFFSET(0x14DC86A0)
#define LLOOIMBMGIB_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x14DC84D0)
#define LLOOIMBMGIB__CTOR_OFFSET UNITYSDK_OFFSET(0x14DC8440)

inline static constexpr unsigned int LLOOIMBMGIB_TypeDefinitionIndex = 89313;

class LLOOIMBMGIB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOIMBMGIB__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + LLOOIMBMGIB_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::PRDConfig*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::PRDConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOIMBMGIB_CREATEOP_OFFSET))(this);
	}

	::System::Double KGNNONHDDMA(::System::Single FOIKIGDJLKN)
	{
		return ((::System::Double(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LLOOIMBMGIB_KGNNONHDDMA_OFFSET))(this, FOIKIGDJLKN);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + LLOOIMBMGIB_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Double KGNNONHDDMA_1(::System::Double FOIKIGDJLKN)
	{
		return ((::System::Double(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + LLOOIMBMGIB_KGNNONHDDMA_1_OFFSET))(this, FOIKIGDJLKN);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Double>* EEIPLAAFIEK()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Double>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOIMBMGIB_EEIPLAAFIEK_OFFSET))(this);
	}

	::System::Double FNLFEMHNFEF(::System::Int32 KHNJNPEIFFF)
	{
		return ((::System::Double(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LLOOIMBMGIB_FNLFEMHNFEF_OFFSET))(this, KHNJNPEIFFF);
	}
};
