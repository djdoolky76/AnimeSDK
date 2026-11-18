#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HBKGDHJEIGO;
namespace System { class Action; }

#define HBKGDHJEIGO_PBGHNMHHGBE_CMJMPILOPPN_OFFSET UNITYSDK_OFFSET(0x13E0AFD0)
#define HBKGDHJEIGO_PBGHNMHHGBE__CTOR_OFFSET UNITYSDK_OFFSET(0x13E0AFC0)

inline static constexpr unsigned int HBKGDHJEIGO_PBGHNMHHGBE_TypeDefinitionIndex = 62982;

class HBKGDHJEIGO_PBGHNMHHGBE : public ::System::Object
{
public:
	::HBKGDHJEIGO* KLHPEBKNIFB; // 0x10
	::System::Action* NJJPAJNJFOJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBKGDHJEIGO_PBGHNMHHGBE__CTOR_OFFSET))(this);
	}

	::System::Void CMJMPILOPPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBKGDHJEIGO_PBGHNMHHGBE_CMJMPILOPPN_OFFSET))(this);
	}
};
