#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAPNBOCDBHM.h"

class DAKDOMLMDGC;
namespace MoleMole::GalGame { class AttachEffectCfg; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define NPJCIIMBDNM_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x12909250)
#define NPJCIIMBDNM_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x12909340)
#define NPJCIIMBDNM__CTOR_OFFSET UNITYSDK_OFFSET(0x129091D0)

inline static constexpr unsigned int NPJCIIMBDNM_TypeDefinitionIndex = 80958;

class NPJCIIMBDNM : public ::BAPNBOCDBHM
{
public:
	::MoleMole::GalGame::AttachEffectCfg* HFPLICABNOE; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + NPJCIIMBDNM__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void GLEJMKLOMBP(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + NPJCIIMBDNM_GLEJMKLOMBP_OFFSET))(this, CBKKFECGFAG);
	}

	::System::Void LIDIODHDJAF(::DAKDOMLMDGC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + NPJCIIMBDNM_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}
};
