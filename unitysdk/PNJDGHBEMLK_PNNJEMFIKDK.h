#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define PNJDGHBEMLK_PNNJEMFIKDK_KHLBIHOJCOH_OFFSET UNITYSDK_OFFSET(0x1CB598C0)
#define PNJDGHBEMLK_PNNJEMFIKDK__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB598B0)

inline static constexpr unsigned int PNJDGHBEMLK_PNNJEMFIKDK_TypeDefinitionIndex = 64961;

class PNJDGHBEMLK_PNNJEMFIKDK : public ::System::Object
{
public:
	::System::Action* IHLBALNBGKM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_PNNJEMFIKDK__CTOR_OFFSET))(this);
	}

	::System::Void KHLBIHOJCOH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_PNNJEMFIKDK_KHLBIHOJCOH_OFFSET))(this);
	}
};
