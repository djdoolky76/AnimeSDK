#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ENGHCPOPICA;
namespace MoleMole { class UIBallGameBoxDialogPopWindowController; }

#define KAFPHKPLDMJ_HIABONACIDH_OFFSET UNITYSDK_OFFSET(0x1947C880)
#define KAFPHKPLDMJ_NKPAGONEHCH_OFFSET UNITYSDK_OFFSET(0x1947C840)
#define KAFPHKPLDMJ_OPNGFDEGHHB_OFFSET UNITYSDK_OFFSET(0x1947C8D0)
#define KAFPHKPLDMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1947C8C0)

inline static constexpr unsigned int KAFPHKPLDMJ_TypeDefinitionIndex = 69698;

class KAFPHKPLDMJ : public ::System::Object
{
public:
	::ENGHCPOPICA* KMMKMGDHCOI; // 0x10
	::MoleMole::UIBallGameBoxDialogPopWindowController* NCIMBHDKIJM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAFPHKPLDMJ__CTOR_OFFSET))(this);
	}

	::System::Void NKPAGONEHCH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAFPHKPLDMJ_NKPAGONEHCH_OFFSET))(this);
	}

	::System::Void HIABONACIDH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAFPHKPLDMJ_HIABONACIDH_OFFSET))(this);
	}

	::System::Void OPNGFDEGHHB(::MoleMole::UIBallGameBoxDialogPopWindowController* MJGBOLCMDOL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBallGameBoxDialogPopWindowController*))((::PBYTE)hIl2Cpp + KAFPHKPLDMJ_OPNGFDEGHHB_OFFSET))(this, MJGBOLCMDOL);
	}
};
