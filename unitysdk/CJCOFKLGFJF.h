#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BAPNBOCDBHM;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }

#define CJCOFKLGFJF_FEJGPDCDMCB_OFFSET UNITYSDK_OFFSET(0x1970D410)
#define CJCOFKLGFJF_ILDLHEENMCN_OFFSET UNITYSDK_OFFSET(0x1970D3F0)

inline static constexpr unsigned int CJCOFKLGFJF_TypeDefinitionIndex = 41184;

class CJCOFKLGFJF : public ::System::Object
{
public:
	static ::BAPNBOCDBHM* ILDLHEENMCN(::BAPNBOCDBHM* HHIJHDFHPOI, ::MoleMole::UIBaseChatPlayController* NCIMBHDKIJM)
	{
		return ((::BAPNBOCDBHM*(*)(::BAPNBOCDBHM*, ::MoleMole::UIBaseChatPlayController*))((::PBYTE)hIl2Cpp + CJCOFKLGFJF_ILDLHEENMCN_OFFSET))(HHIJHDFHPOI, NCIMBHDKIJM);
	}

	static ::BAPNBOCDBHM* FEJGPDCDMCB(::BAPNBOCDBHM* HHIJHDFHPOI, ::MoleMole::UIMainCityChatPlayContext* AAOCANGHBDG)
	{
		return ((::BAPNBOCDBHM*(*)(::BAPNBOCDBHM*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + CJCOFKLGFJF_FEJGPDCDMCB_OFFSET))(HHIJHDFHPOI, AAOCANGHBDG);
	}
};
