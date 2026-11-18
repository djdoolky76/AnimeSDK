#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define DMHOLJNNCJA_BEFEGHJMICN_GMFKCIOFNPI_OFFSET UNITYSDK_OFFSET(0x120923E0)
#define DMHOLJNNCJA_BEFEGHJMICN__CTOR_OFFSET UNITYSDK_OFFSET(0x120923D0)

inline static constexpr unsigned int DMHOLJNNCJA_BEFEGHJMICN_TypeDefinitionIndex = 46949;

class DMHOLJNNCJA_BEFEGHJMICN : public ::System::Object
{
public:
	::System::Action* PABLEDCGDGM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHOLJNNCJA_BEFEGHJMICN__CTOR_OFFSET))(this);
	}

	::System::Void GMFKCIOFNPI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHOLJNNCJA_BEFEGHJMICN_GMFKCIOFNPI_OFFSET))(this);
	}
};
