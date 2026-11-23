#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class E6C6EEEB155967C0; }

#define BEAAF19E4059FDE3_A8E89459E97F1E1D_OFFSET UNITYSDK_OFFSET(0x3CD3290)
#define BEAAF19E4059FDE3_E1632A5D36A0F32B_OFFSET UNITYSDK_OFFSET(0x3CD3640)
#define BEAAF19E4059FDE3_F7A0180AC2DDE431_OFFSET UNITYSDK_OFFSET(0x3CD35D0)
#define BEAAF19E4059FDE3__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BEAAF19E4059FDE3_TypeDefinitionIndex = 10649;

class BEAAF19E4059FDE3 : public ::System::Object
{
public:
	::System::Collections::E6C6EEEB155967C0* B40A9463F4BC4DC6; // 0x10
	::System::Object* A6F80ED14BA3BE8D; // 0x18

	::System::Boolean E1632A5D36A0F32B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEAAF19E4059FDE3_E1632A5D36A0F32B_OFFSET))(this);
	}

	::System::Collections::E6C6EEEB155967C0* F7A0180AC2DDE431()
	{
		return ((::System::Collections::E6C6EEEB155967C0*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEAAF19E4059FDE3_F7A0180AC2DDE431_OFFSET))(this);
	}

	::BEAAF19E4059FDE3* A8E89459E97F1E1D()
	{
		return ((::BEAAF19E4059FDE3*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEAAF19E4059FDE3_A8E89459E97F1E1D_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEAAF19E4059FDE3__CTOR_OFFSET))(this);
	}
};
