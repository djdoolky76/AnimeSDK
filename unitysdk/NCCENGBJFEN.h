#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole { class UIBabeltowerTrickScoreRowWidgetController; }
namespace System { class String; }

#define NCCENGBJFEN_ALDDONDCCIB_OFFSET UNITYSDK_OFFSET(0x18FAE360)
#define NCCENGBJFEN_EPFKHDJPDDN_OFFSET UNITYSDK_OFFSET(0x18FAE3C0)
#define NCCENGBJFEN__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18FAE330)
#define NCCENGBJFEN__CTOR_OFFSET UNITYSDK_OFFSET(0x18FAE300)

inline static constexpr unsigned int NCCENGBJFEN_TypeDefinitionIndex = 78208;

class NCCENGBJFEN
{
public:
	::System::Int32 MGMDLMBEDJF; // 0x28
	::System::Int32 EGEGIMGMJHN; // 0x2C

	::System::Void _ctor(::System::String* PDACHPLBKIE, ::System::Int32 MGMDLMBEDJF, ::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NCCENGBJFEN__CTOR_OFFSET))(this, PDACHPLBKIE, MGMDLMBEDJF, EGEGIMGMJHN);
	}

	::System::Void _ctor_1(::System::String* PDACHPLBKIE, ::System::Boolean KHFNNEHMOLE)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + NCCENGBJFEN__CTOR_1_OFFSET))(this, PDACHPLBKIE, KHFNNEHMOLE);
	}

	::System::Void ALDDONDCCIB(::MoleMole::UIBabeltowerTrickScoreRowWidgetController* NCIMBHDKIJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBabeltowerTrickScoreRowWidgetController*))((::PBYTE)hIl2Cpp + NCCENGBJFEN_ALDDONDCCIB_OFFSET))(this, NCIMBHDKIJM);
	}

	::System::Void EPFKHDJPDDN(::MoleMole::UIBabeltowerTrickScoreRowWidgetController* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBabeltowerTrickScoreRowWidgetController*))((::PBYTE)hIl2Cpp + NCCENGBJFEN_EPFKHDJPDDN_OFFSET))(this, MIALFKCCCPI);
	}
};
