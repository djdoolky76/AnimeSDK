#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EJPFPDLFPEN.h"
#include "unitysdk/IMPGHLBGMNJ.h"
#include "unitysdk/LDIENANCAPG.h"

namespace MoleMole::Config { class ButtonQTETaskSinglePressCountDownEntry; }
namespace MoleMole::Config { class RealtimeQTETaskEntryBase; }

#define LGGGFNJLOMM_IJOCPOKBNEN_OFFSET UNITYSDK_OFFSET(0x126DA100)
#define LGGGFNJLOMM_JLGPJGAOOPC_OFFSET UNITYSDK_OFFSET(0x126DA020)
#define LGGGFNJLOMM_KAJKGHMFAEC_OFFSET UNITYSDK_OFFSET(0x126DA010)
#define LGGGFNJLOMM_MHGLFNCBLJF_OFFSET UNITYSDK_OFFSET(0x126DA1E0)
#define LGGGFNJLOMM__CTOR_OFFSET UNITYSDK_OFFSET(0x126DA030)

inline static constexpr unsigned int LGGGFNJLOMM_TypeDefinitionIndex = 72554;

class LGGGFNJLOMM : public ::LDIENANCAPG
{
public:
	::MoleMole::Config::ButtonQTETaskSinglePressCountDownEntry* IFPBLAMBEFP; // 0x40

	::System::Void _ctor(::MoleMole::Config::RealtimeQTETaskEntryBase* AAIJGGIEOGK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::RealtimeQTETaskEntryBase*))((::PBYTE)hIl2Cpp + LGGGFNJLOMM__CTOR_OFFSET))(this, AAIJGGIEOGK);
	}

	::IMPGHLBGMNJ KAJKGHMFAEC()
	{
		return ((::IMPGHLBGMNJ(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGGFNJLOMM_KAJKGHMFAEC_OFFSET))(this);
	}

	::EJPFPDLFPEN JLGPJGAOOPC()
	{
		return ((::EJPFPDLFPEN(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGGFNJLOMM_JLGPJGAOOPC_OFFSET))(this);
	}

	::System::Void IJOCPOKBNEN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGGFNJLOMM_IJOCPOKBNEN_OFFSET))(this);
	}

	::System::Void MHGLFNCBLJF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGGFNJLOMM_MHGLFNCBLJF_OFFSET))(this);
	}
};
