#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define FOFJAJBOPBP_GBBPOIOCCCH_GFEBHKMENOM_OFFSET UNITYSDK_OFFSET(0x179C0530)
#define FOFJAJBOPBP_GBBPOIOCCCH__CTOR_OFFSET UNITYSDK_OFFSET(0x179C0520)

inline static constexpr unsigned int FOFJAJBOPBP_GBBPOIOCCCH_TypeDefinitionIndex = 92076;

class FOFJAJBOPBP_GBBPOIOCCCH : public ::System::Object
{
public:
	::System::Action* IOLCMHKHKGH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOFJAJBOPBP_GBBPOIOCCCH__CTOR_OFFSET))(this);
	}

	::System::Void GFEBHKMENOM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOFJAJBOPBP_GBBPOIOCCCH_GFEBHKMENOM_OFFSET))(this);
	}
};
