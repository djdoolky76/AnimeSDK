#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DKEFLKBEJKN_JFEOFIPGEGG_OFFSET UNITYSDK_OFFSET(0x1344CD80)
#define DKEFLKBEJKN_LCGLJLMMKOO_OFFSET UNITYSDK_OFFSET(0x1344CD40)
#define DKEFLKBEJKN__CTOR_OFFSET UNITYSDK_OFFSET(0x1344CDC0)

inline static constexpr unsigned int DKEFLKBEJKN_TypeDefinitionIndex = 56014;

class DKEFLKBEJKN : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKEFLKBEJKN__CTOR_OFFSET))(this);
	}

	::System::Void LCGLJLMMKOO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKEFLKBEJKN_LCGLJLMMKOO_OFFSET))(this);
	}

	::System::Void JFEOFIPGEGG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKEFLKBEJKN_JFEOFIPGEGG_OFFSET))(this);
	}
};
