#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAPNBOCDBHM.h"

class DAKDOMLMDGC;
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCityChatRandomChoiceNode; }
namespace MoleMole::GalGame { class MainCityChatTransitionDisplayItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IPIEDGNLJAG_CLFONDHAKFB_OFFSET UNITYSDK_OFFSET(0x160C40A0)
#define IPIEDGNLJAG_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x160C3B20)
#define IPIEDGNLJAG_KOMGGDEBDPD_OFFSET UNITYSDK_OFFSET(0x160C3F70)
#define IPIEDGNLJAG_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x160C4010)
#define IPIEDGNLJAG__CTOR_OFFSET UNITYSDK_OFFSET(0x160C3AA0)

inline static constexpr unsigned int IPIEDGNLJAG_TypeDefinitionIndex = 77721;

class IPIEDGNLJAG : public ::BAPNBOCDBHM
{
public:
	::MoleMole::GalGame::MainCityChatRandomChoiceNode* CEJENBBHBBG; // 0x40
	::System::Collections::Generic::List_1<::MoleMole::GalGame::MainCityChatTransitionDisplayItem*>* EJDPMPHJAFH; // 0x48

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + IPIEDGNLJAG__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void GLEJMKLOMBP(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + IPIEDGNLJAG_GLEJMKLOMBP_OFFSET))(this, CBKKFECGFAG);
	}

	::System::Void KOMGGDEBDPD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIEDGNLJAG_KOMGGDEBDPD_OFFSET))(this);
	}

	::System::Void LIDIODHDJAF(::DAKDOMLMDGC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + IPIEDGNLJAG_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void CLFONDHAKFB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIEDGNLJAG_CLFONDHAKFB_OFFSET))(this);
	}
};
