#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UILineupSelectContext; }

#define LENLFPIOLEP_MLNOEFKBPLE_PFGCCLHNFDJ_OFFSET UNITYSDK_OFFSET(0x184E4300)
#define LENLFPIOLEP_MLNOEFKBPLE__CTOR_OFFSET UNITYSDK_OFFSET(0x184E42F0)

inline static constexpr unsigned int LENLFPIOLEP_MLNOEFKBPLE_TypeDefinitionIndex = 73418;

class LENLFPIOLEP_MLNOEFKBPLE : public ::System::Object
{
public:
	::MoleMole::UILineupSelectContext* AAOCANGHBDG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LENLFPIOLEP_MLNOEFKBPLE__CTOR_OFFSET))(this);
	}

	::System::Void PFGCCLHNFDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LENLFPIOLEP_MLNOEFKBPLE_PFGCCLHNFDJ_OFFSET))(this);
	}
};
