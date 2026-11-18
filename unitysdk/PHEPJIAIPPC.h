#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIActivityRhythmRankWidgetController; }

#define PHEPJIAIPPC_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1553C260)
#define PHEPJIAIPPC__CTOR_OFFSET UNITYSDK_OFFSET(0x1553C250)

inline static constexpr unsigned int PHEPJIAIPPC_TypeDefinitionIndex = 43557;

class PHEPJIAIPPC : public ::System::Object
{
public:
	::MoleMole::UIActivityRhythmRankWidgetController* MGHHHLNOFPB; // 0x10
	::System::Boolean JKHAFDMJIFI; // 0x18

	::System::Void _ctor(::System::Boolean DHILLFDICGH, ::MoleMole::UIActivityRhythmRankWidgetController* IANAIBCLNDC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::UIActivityRhythmRankWidgetController*))((::PBYTE)hIl2Cpp + PHEPJIAIPPC__CTOR_OFFSET))(this, DHILLFDICGH, IANAIBCLNDC);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHEPJIAIPPC_NPOLNFDBOOD_OFFSET))(this);
	}
};
