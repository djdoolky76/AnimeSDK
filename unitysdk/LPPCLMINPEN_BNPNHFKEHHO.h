#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LPPCLMINPEN_MCGMJAOMCID;

#define LPPCLMINPEN_BNPNHFKEHHO_OEPGIJABDEJ_OFFSET UNITYSDK_OFFSET(0x1A62F560)
#define LPPCLMINPEN_BNPNHFKEHHO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A62F550)

inline static constexpr unsigned int LPPCLMINPEN_BNPNHFKEHHO_TypeDefinitionIndex = 88364;

class LPPCLMINPEN_BNPNHFKEHHO : public ::System::Object
{
public:
	::LPPCLMINPEN_MCGMJAOMCID* EEMOEMFLABI; // 0x10
	::System::Int32 FJHBHALGCKO; // 0x18
	::System::Int32 CDDECILLEFI; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPPCLMINPEN_BNPNHFKEHHO__CTOR_OFFSET))(this);
	}

	::System::Void OEPGIJABDEJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPPCLMINPEN_BNPNHFKEHHO_OEPGIJABDEJ_OFFSET))(this);
	}
};
