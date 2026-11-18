#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAPNBOCDBHM.h"

class DAKDOMLMDGC;
namespace MoleMole::GalGame { class MainCityChatPlayStoryNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define DFNNCGKGDBD_BAJIIBGJLGG_OFFSET UNITYSDK_OFFSET(0x1240BD30)
#define DFNNCGKGDBD_CGFLLPOCDJM_OFFSET UNITYSDK_OFFSET(0x1240B9F0)
#define DFNNCGKGDBD_CLFONDHAKFB_OFFSET UNITYSDK_OFFSET(0x1240BDC0)
#define DFNNCGKGDBD_DPOEGDMPACK_OFFSET UNITYSDK_OFFSET(0x1240B7A0)
#define DFNNCGKGDBD_EBMONAIPAIL_OFFSET UNITYSDK_OFFSET(0x1240BF00)
#define DFNNCGKGDBD_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x1240B620)
#define DFNNCGKGDBD_KGIHJPPLMNF_OFFSET UNITYSDK_OFFSET(0x1240BE70)
#define DFNNCGKGDBD_KOMGGDEBDPD_OFFSET UNITYSDK_OFFSET(0x1240B8B0)
#define DFNNCGKGDBD_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x1240BCA0)
#define DFNNCGKGDBD_MPPBKPNJPHO_OFFSET UNITYSDK_OFFSET(0x1240BF10)
#define DFNNCGKGDBD_OIBKFFAGPNH_OFFSET UNITYSDK_OFFSET(0x1240BC00)
#define DFNNCGKGDBD_OMMICIJCCKB_OFFSET UNITYSDK_OFFSET(0x1240BA60)
#define DFNNCGKGDBD__CTOR_OFFSET UNITYSDK_OFFSET(0x1240B5A0)

inline static constexpr unsigned int DFNNCGKGDBD_TypeDefinitionIndex = 72049;

class DFNNCGKGDBD : public ::BAPNBOCDBHM
{
public:
	::MoleMole::GalGame::MainCityChatPlayStoryNode* DFMKILICPFB; // 0x40
	::System::Boolean GKHICOGOKFC; // 0x48
	::System::Byte _padding0[0x3];
	::System::Single INMHMLGFIIK; // 0x4C

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + DFNNCGKGDBD__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void GLEJMKLOMBP(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + DFNNCGKGDBD_GLEJMKLOMBP_OFFSET))(this, CBKKFECGFAG);
	}

	::System::Void KOMGGDEBDPD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNNCGKGDBD_KOMGGDEBDPD_OFFSET))(this);
	}

	::System::Boolean CGFLLPOCDJM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNNCGKGDBD_CGFLLPOCDJM_OFFSET))(this);
	}

	::System::Void OMMICIJCCKB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNNCGKGDBD_OMMICIJCCKB_OFFSET))(this);
	}

	::System::Void OIBKFFAGPNH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNNCGKGDBD_OIBKFFAGPNH_OFFSET))(this);
	}

	::System::Void LIDIODHDJAF(::DAKDOMLMDGC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + DFNNCGKGDBD_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void BAJIIBGJLGG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNNCGKGDBD_BAJIIBGJLGG_OFFSET))(this);
	}

	::System::Void CLFONDHAKFB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNNCGKGDBD_CLFONDHAKFB_OFFSET))(this);
	}

	::System::Boolean KGIHJPPLMNF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNNCGKGDBD_KGIHJPPLMNF_OFFSET))(this);
	}

	::System::Void DPOEGDMPACK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNNCGKGDBD_DPOEGDMPACK_OFFSET))(this);
	}

	::System::Void EBMONAIPAIL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNNCGKGDBD_EBMONAIPAIL_OFFSET))(this);
	}

	::System::Void MPPBKPNJPHO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNNCGKGDBD_MPPBKPNJPHO_OFFSET))(this);
	}
};
