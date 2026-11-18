#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DCBPJHAHAJC.h"
#include "unitysdk/Foundation/ReadOnlyNativeMemoryRefEnumerator_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"

#define CBFPBDFDPMD_EPBMMJINFJH_BLCJNKLJPKJ_OFFSET UNITYSDK_OFFSET(0x78DEA0)
#define CBFPBDFDPMD_EPBMMJINFJH_NCNOMFOCLBH_OFFSET UNITYSDK_OFFSET(0x78DFB0)
#define CBFPBDFDPMD_EPBMMJINFJH__CTOR_OFFSET UNITYSDK_OFFSET(0x369C90)

inline static constexpr unsigned int CBFPBDFDPMD_EPBMMJINFJH_TypeDefinitionIndex = 53241;

struct alignas(8) CBFPBDFDPMD_EPBMMJINFJH
{
	::Foundation::ReadOnlyNativeMemoryRefEnumerator_1<::DCBPJHAHAJC> LACGFCIBDFD; // 0x10

	::System::Void _ctor(::Foundation::ReadOnlyNativeMemoryRefEnumerator_1<::DCBPJHAHAJC> ILIPMAMEFLF)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ReadOnlyNativeMemoryRefEnumerator_1<::DCBPJHAHAJC>))((::PBYTE)hIl2Cpp + CBFPBDFDPMD_EPBMMJINFJH__CTOR_OFFSET))(this, ILIPMAMEFLF);
	}

	::System::Boolean BLCJNKLJPKJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CBFPBDFDPMD_EPBMMJINFJH_BLCJNKLJPKJ_OFFSET))(this);
	}

	::Foundation::Unreal::FTransform3D& NCNOMFOCLBH()
	{
		return ((::Foundation::Unreal::FTransform3D&(*)(::PVOID))((::PBYTE)hIl2Cpp + CBFPBDFDPMD_EPBMMJINFJH_NCNOMFOCLBH_OFFSET))(this);
	}
};
