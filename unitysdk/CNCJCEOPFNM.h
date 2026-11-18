#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAPNBOCDBHM.h"

class DAKDOMLMDGC;
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCityChatShowUIGeneralIntimacyUpNode; }

#define CNCJCEOPFNM_GACPDCEMJOA_OFFSET UNITYSDK_OFFSET(0x19A19290)
#define CNCJCEOPFNM_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x19A19110)
#define CNCJCEOPFNM_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x19A192A0)
#define CNCJCEOPFNM_PANAINEBINN_OFFSET UNITYSDK_OFFSET(0x19A19280)
#define CNCJCEOPFNM__CTOR_OFFSET UNITYSDK_OFFSET(0x19A19090)

inline static constexpr unsigned int CNCJCEOPFNM_TypeDefinitionIndex = 63192;

class CNCJCEOPFNM : public ::BAPNBOCDBHM
{
public:
	::MoleMole::GalGame::MainCityChatShowUIGeneralIntimacyUpNode* _DGGBKMAKAJI_k__BackingField; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CNCJCEOPFNM__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void GLEJMKLOMBP(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + CNCJCEOPFNM_GLEJMKLOMBP_OFFSET))(this, CBKKFECGFAG);
	}

	::System::Void PANAINEBINN(::MoleMole::GalGame::MainCityChatShowUIGeneralIntimacyUpNode* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatShowUIGeneralIntimacyUpNode*))((::PBYTE)hIl2Cpp + CNCJCEOPFNM_PANAINEBINN_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::GalGame::MainCityChatShowUIGeneralIntimacyUpNode* GACPDCEMJOA()
	{
		return ((::MoleMole::GalGame::MainCityChatShowUIGeneralIntimacyUpNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNCJCEOPFNM_GACPDCEMJOA_OFFSET))(this);
	}

	::System::Void LIDIODHDJAF(::DAKDOMLMDGC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + CNCJCEOPFNM_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}
};
