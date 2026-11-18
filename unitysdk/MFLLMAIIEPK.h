#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::HollowChessboard { class RenderSequenceBase; }

#define MFLLMAIIEPK_MHPPCJGLIIE_OFFSET UNITYSDK_OFFSET(0x14D78B60)
#define MFLLMAIIEPK__CTOR_OFFSET UNITYSDK_OFFSET(0x14D78BA0)

inline static constexpr unsigned int MFLLMAIIEPK_TypeDefinitionIndex = 82617;

class MFLLMAIIEPK : public ::System::Object
{
public:
	::MoleMole::HollowChessboard::RenderSequenceBase* JMINOGAOFIL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFLLMAIIEPK__CTOR_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::RenderSequenceBase* MHPPCJGLIIE()
	{
		return ((::MoleMole::HollowChessboard::RenderSequenceBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFLLMAIIEPK_MHPPCJGLIIE_OFFSET))(this);
	}
};
