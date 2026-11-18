#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CPNBJODNFIK_LKPGGBPCCEP;

#define CPNBJODNFIK_AENKKHKFFLK_CAAMGMMMLMI_OFFSET UNITYSDK_OFFSET(0x1688AE90)
#define CPNBJODNFIK_AENKKHKFFLK__CTOR_OFFSET UNITYSDK_OFFSET(0x1688AE80)

inline static constexpr unsigned int CPNBJODNFIK_AENKKHKFFLK_TypeDefinitionIndex = 49707;

class CPNBJODNFIK_AENKKHKFFLK : public ::System::Object
{
public:
	::CPNBJODNFIK_LKPGGBPCCEP* FGBNBFHOKAA; // 0x10
	::System::Int32 ABHBKFJKINO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNBJODNFIK_AENKKHKFFLK__CTOR_OFFSET))(this);
	}

	::System::Void CAAMGMMMLMI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNBJODNFIK_AENKKHKFFLK_CAAMGMMMLMI_OFFSET))(this);
	}
};
