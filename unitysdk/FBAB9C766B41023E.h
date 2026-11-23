#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F4615327B51486C9.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define FBAB9C766B41023E_A2CC6B0ABDBFA19B_OFFSET UNITYSDK_OFFSET(0x39FEC30)
#define FBAB9C766B41023E_F1972C4DC348BCAB_OFFSET UNITYSDK_OFFSET(0x39FEE10)
#define FBAB9C766B41023E__CTOR_OFFSET UNITYSDK_OFFSET(0x39FF1B0)

inline static constexpr unsigned int FBAB9C766B41023E_TypeDefinitionIndex = 12775;

class FBAB9C766B41023E : public ::F4615327B51486C9
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAB9C766B41023E__CTOR_OFFSET))(this);
	}

	::System::String* F1972C4DC348BCAB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAB9C766B41023E_F1972C4DC348BCAB_OFFSET))(this);
	}

	::System::Void A2CC6B0ABDBFA19B(::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + FBAB9C766B41023E_A2CC6B0ABDBFA19B_OFFSET))(this, E04D2BE64FCE9814);
	}
};
