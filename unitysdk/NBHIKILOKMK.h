#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

class NBHIKILOKMK_GIKMLPGGDFD;
class NBHIKILOKMK_JNPAFLHJKOM;
namespace MoleMole::Config { class RealtimeQTEStyleEntryBase; }
namespace MoleMole::Config { class RealtimeQTETaskEntryBase; }
namespace System { class String; }

#define NBHIKILOKMK_CPDKDJHHCOB_OFFSET UNITYSDK_OFFSET(0x13ED0DD0)
#define NBHIKILOKMK_DALHDCIMDNO_OFFSET UNITYSDK_OFFSET(0x13ED0EC0)
#define NBHIKILOKMK_GJDCJHMILBB_OFFSET UNITYSDK_OFFSET(0x13ED0ED0)
#define NBHIKILOKMK_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x13ED0FB0)
#define NBHIKILOKMK_NNLEGJMMEKA_OFFSET UNITYSDK_OFFSET(0x13ED0DE0)
#define NBHIKILOKMK_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x13ED0C10)
#define NBHIKILOKMK__CTOR_OFFSET UNITYSDK_OFFSET(0x13ED0B20)

inline static constexpr unsigned int NBHIKILOKMK_TypeDefinitionIndex = 80325;

class NBHIKILOKMK
{
public:
	::NBHIKILOKMK_GIKMLPGGDFD* _FCHHAJFJFCB_k__BackingField; // 0x28
	::NBHIKILOKMK_JNPAFLHJKOM* _MNBEDIDNAPK_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHIKILOKMK__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + NBHIKILOKMK_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::NBHIKILOKMK_JNPAFLHJKOM* CPDKDJHHCOB()
	{
		return ((::NBHIKILOKMK_JNPAFLHJKOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHIKILOKMK_CPDKDJHHCOB_OFFSET))(this);
	}

	::MoleMole::Config::RealtimeQTEStyleEntryBase* NNLEGJMMEKA(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::Config::RealtimeQTEStyleEntryBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NBHIKILOKMK_NNLEGJMMEKA_OFFSET))(this, MCOHLHMKLIP);
	}

	::NBHIKILOKMK_GIKMLPGGDFD* DALHDCIMDNO()
	{
		return ((::NBHIKILOKMK_GIKMLPGGDFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHIKILOKMK_DALHDCIMDNO_OFFSET))(this);
	}

	::MoleMole::Config::RealtimeQTETaskEntryBase* GJDCJHMILBB(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::Config::RealtimeQTETaskEntryBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NBHIKILOKMK_GJDCJHMILBB_OFFSET))(this, MCOHLHMKLIP);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + NBHIKILOKMK_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
