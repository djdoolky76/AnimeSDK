#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAPNBOCDBHM.h"

class DAKDOMLMDGC;
class DPFMDEBJEMG;
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCityChatSyncServerDataConfig; }

#define MJNCGMOLALL_DDHJFOGLGGK_OFFSET UNITYSDK_OFFSET(0x11F4F4C0)
#define MJNCGMOLALL_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x11F4F380)
#define MJNCGMOLALL_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x11F4F430)
#define MJNCGMOLALL__CTOR_OFFSET UNITYSDK_OFFSET(0x11F4F300)

inline static constexpr unsigned int MJNCGMOLALL_TypeDefinitionIndex = 46588;

class MJNCGMOLALL : public ::BAPNBOCDBHM
{
public:
	::MoleMole::GalGame::MainCityChatSyncServerDataConfig* DFMKILICPFB; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + MJNCGMOLALL__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void GLEJMKLOMBP(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + MJNCGMOLALL_GLEJMKLOMBP_OFFSET))(this, CBKKFECGFAG);
	}

	::System::Void LIDIODHDJAF(::DAKDOMLMDGC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + MJNCGMOLALL_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void DDHJFOGLGGK(::DPFMDEBJEMG* DEJEGHGEMEF)
	{
		return ((::System::Void(*)(::PVOID, ::DPFMDEBJEMG*))((::PBYTE)hIl2Cpp + MJNCGMOLALL_DDHJFOGLGGK_OFFSET))(this, DEJEGHGEMEF);
	}
};
