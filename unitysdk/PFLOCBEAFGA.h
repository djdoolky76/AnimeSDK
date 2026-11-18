#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFEGFEAKGCA.h"

class CDLPMFPBDBA;
namespace MoleMole::GalGame { class GalPlayableNodeBase; }

#define PFLOCBEAFGA_BAJIIBGJLGG_OFFSET UNITYSDK_OFFSET(0x155383A0)
#define PFLOCBEAFGA_DCJMFMAHBLD_OFFSET UNITYSDK_OFFSET(0x15538290)
#define PFLOCBEAFGA_OIBKFFAGPNH_OFFSET UNITYSDK_OFFSET(0x155382D0)
#define PFLOCBEAFGA_PMAOHINGDEG_OFFSET UNITYSDK_OFFSET(0x15538310)
#define PFLOCBEAFGA__CTOR_OFFSET UNITYSDK_OFFSET(0x15538280)

inline static constexpr unsigned int PFLOCBEAFGA_TypeDefinitionIndex = 71493;

class PFLOCBEAFGA : public ::HFEGFEAKGCA
{
public:
	::System::Void _ctor(::CDLPMFPBDBA* PMNLAHHMNFM, ::MoleMole::GalGame::GalPlayableNodeBase* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::CDLPMFPBDBA*, ::MoleMole::GalGame::GalPlayableNodeBase*))((::PBYTE)hIl2Cpp + PFLOCBEAFGA__CTOR_OFFSET))(this, PMNLAHHMNFM, DFMKILICPFB);
	}

	::System::Void DCJMFMAHBLD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFLOCBEAFGA_DCJMFMAHBLD_OFFSET))(this);
	}

	::System::Void OIBKFFAGPNH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFLOCBEAFGA_OIBKFFAGPNH_OFFSET))(this);
	}

	::System::Void PMAOHINGDEG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFLOCBEAFGA_PMAOHINGDEG_OFFSET))(this);
	}

	::System::Void BAJIIBGJLGG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFLOCBEAFGA_BAJIIBGJLGG_OFFSET))(this);
	}
};
