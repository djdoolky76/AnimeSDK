#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define PNJDGHBEMLK_DBNCKKFJGNO_GBPDDNDKGLG_OFFSET UNITYSDK_OFFSET(0x1C1E11D0)
#define PNJDGHBEMLK_DBNCKKFJGNO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1E11C0)

inline static constexpr unsigned int PNJDGHBEMLK_DBNCKKFJGNO_TypeDefinitionIndex = 64966;

class PNJDGHBEMLK_DBNCKKFJGNO : public ::System::Object
{
public:
	::System::Action* IHLBALNBGKM; // 0x10
	::System::Boolean BGLGCGACKIF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_DBNCKKFJGNO__CTOR_OFFSET))(this);
	}

	::System::Void GBPDDNDKGLG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_DBNCKKFJGNO_GBPDDNDKGLG_OFFSET))(this);
	}
};
