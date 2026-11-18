#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IPNCFCFIKCF.h"

namespace MoleMole { class UIBubbleTips; }
namespace System { class Action; }

#define CPBPKIMOIMH_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x145E0530)
#define CPBPKIMOIMH__CTOR_OFFSET UNITYSDK_OFFSET(0x145E0520)

inline static constexpr unsigned int CPBPKIMOIMH_TypeDefinitionIndex = 65531;

class CPBPKIMOIMH : public ::IPNCFCFIKCF
{
public:
	::MoleMole::UIBubbleTips* GFPCNLJGFBG; // 0x18

	::System::Void _ctor(::MoleMole::UIBubbleTips* GFPCNLJGFBG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBubbleTips*))((::PBYTE)hIl2Cpp + CPBPKIMOIMH__CTOR_OFFSET))(this, GFPCNLJGFBG);
	}

	::System::Void HFBPONNNLBA(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CPBPKIMOIMH_HFBPONNNLBA_OFFSET))(this, EJGDHCIBCJH);
	}
};
