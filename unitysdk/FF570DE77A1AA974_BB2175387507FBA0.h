#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FF570DE77A1AA974;
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace System { class String; }

#define FF570DE77A1AA974_BB2175387507FBA0_B0BD2F1504B8753A_OFFSET UNITYSDK_OFFSET(0x3A80340)
#define FF570DE77A1AA974_BB2175387507FBA0_B4174EC66247E784_OFFSET UNITYSDK_OFFSET(0x3A80370)
#define FF570DE77A1AA974_BB2175387507FBA0__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FF570DE77A1AA974_BB2175387507FBA0_TypeDefinitionIndex = 11936;

class FF570DE77A1AA974_BB2175387507FBA0 : public ::System::Object
{
public:
	::FF570DE77A1AA974* A544919C800E2923; // 0x10
	::MiHoYo::SDK::NetworkResponseModelEx* A6CAE7339066B0FB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FF570DE77A1AA974_BB2175387507FBA0__CTOR_OFFSET))(this);
	}

	::System::Void B0BD2F1504B8753A(::System::String* B083BE7841B347C4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FF570DE77A1AA974_BB2175387507FBA0_B0BD2F1504B8753A_OFFSET))(this, B083BE7841B347C4);
	}

	::System::Void B4174EC66247E784()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FF570DE77A1AA974_BB2175387507FBA0_B4174EC66247E784_OFFSET))(this);
	}
};
