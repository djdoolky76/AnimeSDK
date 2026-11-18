#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DCBPJHAHAJC.h"
#include "unitysdk/Foundation/NativeMemoryRefEnumerator_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"

#define JLJFLLKCPKE_GLGDEAHBLGN_BLCJNKLJPKJ_OFFSET UNITYSDK_OFFSET(0x7677A0)
#define JLJFLLKCPKE_GLGDEAHBLGN_NCNOMFOCLBH_OFFSET UNITYSDK_OFFSET(0x5E6D10)
#define JLJFLLKCPKE_GLGDEAHBLGN__CTOR_OFFSET UNITYSDK_OFFSET(0x369C90)

inline static constexpr unsigned int JLJFLLKCPKE_GLGDEAHBLGN_TypeDefinitionIndex = 68782;

struct alignas(8) JLJFLLKCPKE_GLGDEAHBLGN
{
	::Foundation::NativeMemoryRefEnumerator_1<::DCBPJHAHAJC> LACGFCIBDFD; // 0x10

	::System::Void _ctor(::Foundation::NativeMemoryRefEnumerator_1<::DCBPJHAHAJC> ILIPMAMEFLF)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::NativeMemoryRefEnumerator_1<::DCBPJHAHAJC>))((::PBYTE)hIl2Cpp + JLJFLLKCPKE_GLGDEAHBLGN__CTOR_OFFSET))(this, ILIPMAMEFLF);
	}

	::Foundation::Unreal::FTransform3D& NCNOMFOCLBH()
	{
		return ((::Foundation::Unreal::FTransform3D&(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJFLLKCPKE_GLGDEAHBLGN_NCNOMFOCLBH_OFFSET))(this);
	}

	::System::Boolean BLCJNKLJPKJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJFLLKCPKE_GLGDEAHBLGN_BLCJNKLJPKJ_OFFSET))(this);
	}
};
