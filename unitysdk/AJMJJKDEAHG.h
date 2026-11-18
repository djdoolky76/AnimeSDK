#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AJMJJKDEAHG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D68A590)

inline static constexpr unsigned int AJMJJKDEAHG_TypeDefinitionIndex = 94050;

class AJMJJKDEAHG : public ::System::Object
{
public:
	::System::Int32 ICEGFHFAEKN; // 0x10
	::System::Int32 CBFAEHGKIEN; // 0x14
	::System::Int32 INCGAHLKDOJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJMJJKDEAHG__CTOR_OFFSET))(this);
	}
};
