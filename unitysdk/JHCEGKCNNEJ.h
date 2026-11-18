#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define JHCEGKCNNEJ_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x8D3F60)
#define JHCEGKCNNEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x3D9940)

inline static constexpr unsigned int JHCEGKCNNEJ_TypeDefinitionIndex = 93948;

struct alignas(4) JHCEGKCNNEJ
{
	::System::Int32 AOGNNJLKHGL; // 0x10
	::System::Int32 IFPCGBJDKCH; // 0x14
	::System::Int32 LOKBENJPEHH; // 0x18

	::System::Void _ctor(::System::Int32 BKLGNCBNEGM, ::System::Int32 AMHFLBPBKLL, ::System::Int32 DGGADANAHDC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + JHCEGKCNNEJ__CTOR_OFFSET))(this, BKLGNCBNEGM, AMHFLBPBKLL, DGGADANAHDC);
	}

	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCEGKCNNEJ_JGGHNLBNKHA_OFFSET))(this);
	}
};
