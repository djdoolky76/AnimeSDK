#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAPNBOCDBHM.h"

class DAKDOMLMDGC;
namespace MoleMole::GalGame { class MainCityChatEditorShowInterknotPostNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define DMEIEKBPDDF_CLFONDHAKFB_OFFSET UNITYSDK_OFFSET(0x19424A60)
#define DMEIEKBPDDF_GACPDCEMJOA_OFFSET UNITYSDK_OFFSET(0x194248E0)
#define DMEIEKBPDDF_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x19424240)
#define DMEIEKBPDDF_KOMGGDEBDPD_OFFSET UNITYSDK_OFFSET(0x194247D0)
#define DMEIEKBPDDF_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x194249D0)
#define DMEIEKBPDDF_OLFFLHJGKAG_OFFSET UNITYSDK_OFFSET(0x194248F0)
#define DMEIEKBPDDF_PANAINEBINN_OFFSET UNITYSDK_OFFSET(0x194249C0)
#define DMEIEKBPDDF_PILKKKEOANO_OFFSET UNITYSDK_OFFSET(0x194243A0)
#define DMEIEKBPDDF__CTOR_OFFSET UNITYSDK_OFFSET(0x194241C0)

inline static constexpr unsigned int DMEIEKBPDDF_TypeDefinitionIndex = 45941;

class DMEIEKBPDDF : public ::BAPNBOCDBHM
{
public:
	::MoleMole::GalGame::MainCityChatEditorShowInterknotPostNode* _DGGBKMAKAJI_k__BackingField; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + DMEIEKBPDDF__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void GLEJMKLOMBP(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + DMEIEKBPDDF_GLEJMKLOMBP_OFFSET))(this, CBKKFECGFAG);
	}

	::System::Void KOMGGDEBDPD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEIEKBPDDF_KOMGGDEBDPD_OFFSET))(this);
	}

	::MoleMole::GalGame::MainCityChatEditorShowInterknotPostNode* GACPDCEMJOA()
	{
		return ((::MoleMole::GalGame::MainCityChatEditorShowInterknotPostNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEIEKBPDDF_GACPDCEMJOA_OFFSET))(this);
	}

	::System::Void PILKKKEOANO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEIEKBPDDF_PILKKKEOANO_OFFSET))(this);
	}

	::System::Void OLFFLHJGKAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEIEKBPDDF_OLFFLHJGKAG_OFFSET))(this);
	}

	::System::Void PANAINEBINN(::MoleMole::GalGame::MainCityChatEditorShowInterknotPostNode* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatEditorShowInterknotPostNode*))((::PBYTE)hIl2Cpp + DMEIEKBPDDF_PANAINEBINN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void LIDIODHDJAF(::DAKDOMLMDGC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + DMEIEKBPDDF_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void CLFONDHAKFB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEIEKBPDDF_CLFONDHAKFB_OFFSET))(this);
	}
};
