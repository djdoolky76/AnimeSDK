#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define NAEFGDAHEFE_NCFJIFAGNGK_ILHCNGOJJHA_OFFSET UNITYSDK_OFFSET(0x113A5E60)
#define NAEFGDAHEFE_NCFJIFAGNGK__CTOR_OFFSET UNITYSDK_OFFSET(0x113A5E50)

inline static constexpr unsigned int NAEFGDAHEFE_NCFJIFAGNGK_TypeDefinitionIndex = 81797;

class NAEFGDAHEFE_NCFJIFAGNGK : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAEFGDAHEFE_NCFJIFAGNGK__CTOR_OFFSET))(this);
	}

	::System::Void ILHCNGOJJHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAEFGDAHEFE_NCFJIFAGNGK_ILHCNGOJJHA_OFFSET))(this);
	}
};
