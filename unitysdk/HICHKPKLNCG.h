#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGONPCLBCDC.h"

class DAKDOMLMDGC;
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define HICHKPKLNCG_BAJIIBGJLGG_OFFSET UNITYSDK_OFFSET(0x1101D690)
#define HICHKPKLNCG_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x1101D420)
#define HICHKPKLNCG_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x1101D600)
#define HICHKPKLNCG_OIBKFFAGPNH_OFFSET UNITYSDK_OFFSET(0x1101D560)
#define HICHKPKLNCG__CTOR_OFFSET UNITYSDK_OFFSET(0x1101D410)

inline static constexpr unsigned int HICHKPKLNCG_TypeDefinitionIndex = 80172;

class HICHKPKLNCG : public ::JGONPCLBCDC
{
public:
	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + HICHKPKLNCG__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void GLEJMKLOMBP(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + HICHKPKLNCG_GLEJMKLOMBP_OFFSET))(this, CBKKFECGFAG);
	}

	::System::Void OIBKFFAGPNH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HICHKPKLNCG_OIBKFFAGPNH_OFFSET))(this);
	}

	::System::Void LIDIODHDJAF(::DAKDOMLMDGC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + HICHKPKLNCG_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void BAJIIBGJLGG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HICHKPKLNCG_BAJIIBGJLGG_OFFSET))(this);
	}
};
