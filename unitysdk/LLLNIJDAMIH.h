#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAPNBOCDBHM.h"

class DAKDOMLMDGC;
namespace MoleMole::GalGame { class MainCityChatEditorLiveHouseFansUpNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define LLLNIJDAMIH_CLFONDHAKFB_OFFSET UNITYSDK_OFFSET(0x12596940)
#define LLLNIJDAMIH_GACPDCEMJOA_OFFSET UNITYSDK_OFFSET(0x125969F0)
#define LLLNIJDAMIH_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x12596320)
#define LLLNIJDAMIH_KOMGGDEBDPD_OFFSET UNITYSDK_OFFSET(0x125967A0)
#define LLLNIJDAMIH_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x125968B0)
#define LLLNIJDAMIH_PANAINEBINN_OFFSET UNITYSDK_OFFSET(0x12596A00)
#define LLLNIJDAMIH__CTOR_OFFSET UNITYSDK_OFFSET(0x125962A0)

inline static constexpr unsigned int LLLNIJDAMIH_TypeDefinitionIndex = 66598;

class LLLNIJDAMIH : public ::BAPNBOCDBHM
{
public:
	::MoleMole::GalGame::MainCityChatEditorLiveHouseFansUpNode* _DGGBKMAKAJI_k__BackingField; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + LLLNIJDAMIH__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void GLEJMKLOMBP(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + LLLNIJDAMIH_GLEJMKLOMBP_OFFSET))(this, CBKKFECGFAG);
	}

	::System::Void KOMGGDEBDPD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLNIJDAMIH_KOMGGDEBDPD_OFFSET))(this);
	}

	::System::Void LIDIODHDJAF(::DAKDOMLMDGC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + LLLNIJDAMIH_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void CLFONDHAKFB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLNIJDAMIH_CLFONDHAKFB_OFFSET))(this);
	}

	::MoleMole::GalGame::MainCityChatEditorLiveHouseFansUpNode* GACPDCEMJOA()
	{
		return ((::MoleMole::GalGame::MainCityChatEditorLiveHouseFansUpNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLNIJDAMIH_GACPDCEMJOA_OFFSET))(this);
	}

	::System::Void PANAINEBINN(::MoleMole::GalGame::MainCityChatEditorLiveHouseFansUpNode* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatEditorLiveHouseFansUpNode*))((::PBYTE)hIl2Cpp + LLLNIJDAMIH_PANAINEBINN_OFFSET))(this, EGEGIMGMJHN);
	}
};
