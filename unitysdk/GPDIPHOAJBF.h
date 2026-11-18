#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAPNBOCDBHM.h"

class DAKDOMLMDGC;
namespace MoleMole::GalGame { class MainCityChatBlackScreenNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define GPDIPHOAJBF_BAJIIBGJLGG_OFFSET UNITYSDK_OFFSET(0x15F40E90)
#define GPDIPHOAJBF_CGFLLPOCDJM_OFFSET UNITYSDK_OFFSET(0x15F40C80)
#define GPDIPHOAJBF_CLFONDHAKFB_OFFSET UNITYSDK_OFFSET(0x15F40DE0)
#define GPDIPHOAJBF_DDHJFOGLGGK_OFFSET UNITYSDK_OFFSET(0x15F40D10)
#define GPDIPHOAJBF_GJCJOEPDKJD_OFFSET UNITYSDK_OFFSET(0x15F40DB0)
#define GPDIPHOAJBF_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x15F408D0)
#define GPDIPHOAJBF_KGIHJPPLMNF_OFFSET UNITYSDK_OFFSET(0x15F40D20)
#define GPDIPHOAJBF_KOMGGDEBDPD_OFFSET UNITYSDK_OFFSET(0x15F40B70)
#define GPDIPHOAJBF_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x15F40F20)
#define GPDIPHOAJBF_OIBKFFAGPNH_OFFSET UNITYSDK_OFFSET(0x15F40CC0)
#define GPDIPHOAJBF__CTOR_OFFSET UNITYSDK_OFFSET(0x15F40850)

inline static constexpr unsigned int GPDIPHOAJBF_TypeDefinitionIndex = 48451;

class GPDIPHOAJBF : public ::BAPNBOCDBHM
{
public:
	::MoleMole::GalGame::MainCityChatBlackScreenNode* CEJENBBHBBG; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + GPDIPHOAJBF__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void GLEJMKLOMBP(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + GPDIPHOAJBF_GLEJMKLOMBP_OFFSET))(this, CBKKFECGFAG);
	}

	::System::Void KOMGGDEBDPD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDIPHOAJBF_KOMGGDEBDPD_OFFSET))(this);
	}

	::System::Boolean CGFLLPOCDJM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDIPHOAJBF_CGFLLPOCDJM_OFFSET))(this);
	}

	::System::Void OIBKFFAGPNH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDIPHOAJBF_OIBKFFAGPNH_OFFSET))(this);
	}

	::System::Void DDHJFOGLGGK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDIPHOAJBF_DDHJFOGLGGK_OFFSET))(this);
	}

	::System::Boolean KGIHJPPLMNF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDIPHOAJBF_KGIHJPPLMNF_OFFSET))(this);
	}

	::System::Void GJCJOEPDKJD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDIPHOAJBF_GJCJOEPDKJD_OFFSET))(this);
	}

	::System::Void CLFONDHAKFB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDIPHOAJBF_CLFONDHAKFB_OFFSET))(this);
	}

	::System::Void BAJIIBGJLGG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDIPHOAJBF_BAJIIBGJLGG_OFFSET))(this);
	}

	::System::Void LIDIODHDJAF(::DAKDOMLMDGC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + GPDIPHOAJBF_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}
};
