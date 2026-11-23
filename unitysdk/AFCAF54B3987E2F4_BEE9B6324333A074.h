#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define AFCAF54B3987E2F4_BEE9B6324333A074_A5E66F8FE709372E_OFFSET UNITYSDK_OFFSET(0x2897DA0)
#define AFCAF54B3987E2F4_BEE9B6324333A074_E836A00B99F7003C_OFFSET UNITYSDK_OFFSET(0x2897D90)
#define AFCAF54B3987E2F4_BEE9B6324333A074__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AFCAF54B3987E2F4_BEE9B6324333A074_TypeDefinitionIndex = 16163;

class AFCAF54B3987E2F4_BEE9B6324333A074 : public ::System::Object
{
public:
	::System::Int32 E65963324FDA955A; // 0x10
	::System::Int32 F09B909E6908D952; // 0x14
	::System::Func_2<::System::Int32, ::System::Int32>* A1E110FB9181E307; // 0x18
	::System::Func_2<::System::Int32, ::System::Int32>* EBF6605E5105DE1D; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCAF54B3987E2F4_BEE9B6324333A074__CTOR_OFFSET))(this);
	}

	::System::Int32 E836A00B99F7003C(::System::Int32 EACCF7770BCAE47C)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AFCAF54B3987E2F4_BEE9B6324333A074_E836A00B99F7003C_OFFSET))(this, EACCF7770BCAE47C);
	}

	::System::Int32 A5E66F8FE709372E(::System::Int32 EACCF7770BCAE47C)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AFCAF54B3987E2F4_BEE9B6324333A074_A5E66F8FE709372E_OFFSET))(this, EACCF7770BCAE47C);
	}
};
