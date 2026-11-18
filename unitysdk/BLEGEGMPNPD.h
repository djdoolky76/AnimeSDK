#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAPNBOCDBHM.h"

class DAKDOMLMDGC;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::GalGame { class MainCityChatInLevelPlayStoryNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define BLEGEGMPNPD_BAJIIBGJLGG_OFFSET UNITYSDK_OFFSET(0x18DA3A00)
#define BLEGEGMPNPD_CGFLLPOCDJM_OFFSET UNITYSDK_OFFSET(0x18DA3270)
#define BLEGEGMPNPD_CLFONDHAKFB_OFFSET UNITYSDK_OFFSET(0x18DA3830)
#define BLEGEGMPNPD_DPOEGDMPACK_OFFSET UNITYSDK_OFFSET(0x18DA3030)
#define BLEGEGMPNPD_EBMONAIPAIL_OFFSET UNITYSDK_OFFSET(0x18DA3A90)
#define BLEGEGMPNPD_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x18DA2EC0)
#define BLEGEGMPNPD_IIJMLMJBIFI_OFFSET UNITYSDK_OFFSET(0x18DA35F0)
#define BLEGEGMPNPD_KGIHJPPLMNF_OFFSET UNITYSDK_OFFSET(0x18DA3AA0)
#define BLEGEGMPNPD_KOMGGDEBDPD_OFFSET UNITYSDK_OFFSET(0x18DA3130)
#define BLEGEGMPNPD_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x18DA3970)
#define BLEGEGMPNPD_MPPBKPNJPHO_OFFSET UNITYSDK_OFFSET(0x18DA38E0)
#define BLEGEGMPNPD_OIBKFFAGPNH_OFFSET UNITYSDK_OFFSET(0x18DA3480)
#define BLEGEGMPNPD_OMMICIJCCKB_OFFSET UNITYSDK_OFFSET(0x18DA32E0)
#define BLEGEGMPNPD__CTOR_OFFSET UNITYSDK_OFFSET(0x18DA2E40)

inline static constexpr unsigned int BLEGEGMPNPD_TypeDefinitionIndex = 59263;

class BLEGEGMPNPD : public ::BAPNBOCDBHM
{
public:
	::MoleMole::GalGame::MainCityChatInLevelPlayStoryNode* CEJENBBHBBG; // 0x40
	::System::Single INMHMLGFIIK; // 0x48
	::System::Boolean GKHICOGOKFC; // 0x4C

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + BLEGEGMPNPD__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void GLEJMKLOMBP(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + BLEGEGMPNPD_GLEJMKLOMBP_OFFSET))(this, CBKKFECGFAG);
	}

	::System::Void KOMGGDEBDPD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLEGEGMPNPD_KOMGGDEBDPD_OFFSET))(this);
	}

	::System::Boolean CGFLLPOCDJM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BLEGEGMPNPD_CGFLLPOCDJM_OFFSET))(this);
	}

	::System::Void OMMICIJCCKB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLEGEGMPNPD_OMMICIJCCKB_OFFSET))(this);
	}

	::System::Void OIBKFFAGPNH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLEGEGMPNPD_OIBKFFAGPNH_OFFSET))(this);
	}

	::System::Void DPOEGDMPACK(::System::Boolean FPKGHKLJEIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BLEGEGMPNPD_DPOEGDMPACK_OFFSET))(this, FPKGHKLJEIL);
	}

	::System::Void CLFONDHAKFB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLEGEGMPNPD_CLFONDHAKFB_OFFSET))(this);
	}

	::System::Void MPPBKPNJPHO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLEGEGMPNPD_MPPBKPNJPHO_OFFSET))(this);
	}

	::System::Void LIDIODHDJAF(::DAKDOMLMDGC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + BLEGEGMPNPD_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void BAJIIBGJLGG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLEGEGMPNPD_BAJIIBGJLGG_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* IIJMLMJBIFI()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLEGEGMPNPD_IIJMLMJBIFI_OFFSET))(this);
	}

	::System::Void EBMONAIPAIL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLEGEGMPNPD_EBMONAIPAIL_OFFSET))(this);
	}

	::System::Boolean KGIHJPPLMNF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BLEGEGMPNPD_KGIHJPPLMNF_OFFSET))(this);
	}
};
