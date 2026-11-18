#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class ConfigNpcPrototype; }
namespace MoleMole::Battle { class Entity; }

#define HBNEBBGOING_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x15B3B260)
#define HBNEBBGOING_CREATEOP_OFFSET UNITYSDK_OFFSET(0x15B3AF50)
#define HBNEBBGOING_EHPGOHJNDMB_OFFSET UNITYSDK_OFFSET(0x15B3B320)
#define HBNEBBGOING_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x15B3B190)
#define HBNEBBGOING_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x15B3AEB0)
#define HBNEBBGOING__CTOR_OFFSET UNITYSDK_OFFSET(0x15B3AE20)

inline static constexpr unsigned int HBNEBBGOING_TypeDefinitionIndex = 89166;

class HBNEBBGOING
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBNEBBGOING__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + HBNEBBGOING_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigNpcPrototype*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigNpcPrototype*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBNEBBGOING_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + HBNEBBGOING_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::ConfigNpcPrototype* COPIDBEMEIE()
	{
		return ((::MoleMole::ConfigNpcPrototype*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBNEBBGOING_COPIDBEMEIE_OFFSET))(this);
	}

	::System::Void EHPGOHJNDMB(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Int32 MCOHLHMKLIP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + HBNEBBGOING_EHPGOHJNDMB_OFFSET))(this, KECKGDFIALJ, MCOHLHMKLIP);
	}
};
