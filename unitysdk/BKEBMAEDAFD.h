#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAPNBOCDBHM.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"

class DAKDOMLMDGC;
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class PlayChatPlusStoryNode; }

#define BKEBMAEDAFD_BAJIIBGJLGG_OFFSET UNITYSDK_OFFSET(0xF79FE10)
#define BKEBMAEDAFD_CGFLLPOCDJM_OFFSET UNITYSDK_OFFSET(0xF79F870)
#define BKEBMAEDAFD_CLFONDHAKFB_OFFSET UNITYSDK_OFFSET(0xF79FFA0)
#define BKEBMAEDAFD_DPOEGDMPACK_OFFSET UNITYSDK_OFFSET(0xF79F620)
#define BKEBMAEDAFD_EJMJIDMBNIP_OFFSET UNITYSDK_OFFSET(0xF79FC00)
#define BKEBMAEDAFD_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0xF79F4A0)
#define BKEBMAEDAFD_HAIBPLDPJLB_OFFSET UNITYSDK_OFFSET(0xF79FD30)
#define BKEBMAEDAFD_KGIHJPPLMNF_OFFSET UNITYSDK_OFFSET(0xF79FB70)
#define BKEBMAEDAFD_KKBHKBOMAKM_OFFSET UNITYSDK_OFFSET(0xF79FD00)
#define BKEBMAEDAFD_KOMGGDEBDPD_OFFSET UNITYSDK_OFFSET(0xF79F720)
#define BKEBMAEDAFD_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0xF79FD80)
#define BKEBMAEDAFD_MPPBKPNJPHO_OFFSET UNITYSDK_OFFSET(0xF79FEA0)
#define BKEBMAEDAFD_NGDBHPMGDFO_OFFSET UNITYSDK_OFFSET(0xF79FF30)
#define BKEBMAEDAFD_OIBKFFAGPNH_OFFSET UNITYSDK_OFFSET(0xF79FA80)
#define BKEBMAEDAFD_OMMICIJCCKB_OFFSET UNITYSDK_OFFSET(0xF79F8E0)
#define BKEBMAEDAFD__CTOR_OFFSET UNITYSDK_OFFSET(0xF79F420)

inline static constexpr unsigned int BKEBMAEDAFD_TypeDefinitionIndex = 74337;

class BKEBMAEDAFD : public ::BAPNBOCDBHM
{
public:
	::MoleMole::GalGame::PlayChatPlusStoryNode* DFMKILICPFB; // 0x40
	::System::Boolean GKHICOGOKFC; // 0x48
	::System::Byte _padding0[0x3];
	::Foundation::Coroutine::CoroutineHandle MGBAPIEIAON; // 0x4C
	::System::Single INMHMLGFIIK; // 0x50

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + BKEBMAEDAFD__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void GLEJMKLOMBP(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + BKEBMAEDAFD_GLEJMKLOMBP_OFFSET))(this, CBKKFECGFAG);
	}

	::System::Void KOMGGDEBDPD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKEBMAEDAFD_KOMGGDEBDPD_OFFSET))(this);
	}

	::System::Boolean CGFLLPOCDJM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BKEBMAEDAFD_CGFLLPOCDJM_OFFSET))(this);
	}

	::System::Void OMMICIJCCKB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKEBMAEDAFD_OMMICIJCCKB_OFFSET))(this);
	}

	::System::Void OIBKFFAGPNH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKEBMAEDAFD_OIBKFFAGPNH_OFFSET))(this);
	}

	::System::Boolean KGIHJPPLMNF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BKEBMAEDAFD_KGIHJPPLMNF_OFFSET))(this);
	}

	::System::Void EJMJIDMBNIP(::System::Single DLBFEAOALML)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BKEBMAEDAFD_EJMJIDMBNIP_OFFSET))(this, DLBFEAOALML);
	}

	::System::Void KKBHKBOMAKM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKEBMAEDAFD_KKBHKBOMAKM_OFFSET))(this);
	}

	::System::Void HAIBPLDPJLB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKEBMAEDAFD_HAIBPLDPJLB_OFFSET))(this);
	}

	::System::Void DPOEGDMPACK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKEBMAEDAFD_DPOEGDMPACK_OFFSET))(this);
	}

	::System::Void LIDIODHDJAF(::DAKDOMLMDGC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + BKEBMAEDAFD_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void BAJIIBGJLGG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKEBMAEDAFD_BAJIIBGJLGG_OFFSET))(this);
	}

	::System::Void MPPBKPNJPHO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKEBMAEDAFD_MPPBKPNJPHO_OFFSET))(this);
	}

	::System::Void NGDBHPMGDFO(::System::Boolean NMGDOBANFFP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BKEBMAEDAFD_NGDBHPMGDFO_OFFSET))(this, NMGDOBANFFP);
	}

	::System::Void CLFONDHAKFB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKEBMAEDAFD_CLFONDHAKFB_OFFSET))(this);
	}
};
