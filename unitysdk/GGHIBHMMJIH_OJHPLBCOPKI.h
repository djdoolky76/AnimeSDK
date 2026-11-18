#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GGHIBHMMJIH;
class MonoUITableScrollV2;

#define GGHIBHMMJIH_OJHPLBCOPKI_IBGMKNEDCAF_OFFSET UNITYSDK_OFFSET(0x15CE2560)
#define GGHIBHMMJIH_OJHPLBCOPKI__CTOR_OFFSET UNITYSDK_OFFSET(0x15CE2550)

inline static constexpr unsigned int GGHIBHMMJIH_OJHPLBCOPKI_TypeDefinitionIndex = 45800;

class GGHIBHMMJIH_OJHPLBCOPKI : public ::System::Object
{
public:
	::MonoUITableScrollV2* EGGEGOCMDIH; // 0x10
	::GGHIBHMMJIH* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHIBHMMJIH_OJHPLBCOPKI__CTOR_OFFSET))(this);
	}

	::System::Void IBGMKNEDCAF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHIBHMMJIH_OJHPLBCOPKI_IBGMKNEDCAF_OFFSET))(this);
	}
};
