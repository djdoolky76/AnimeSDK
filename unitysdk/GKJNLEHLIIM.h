#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GKJNLEHLIIM__CTOR_OFFSET UNITYSDK_OFFSET(0x10F00930)

inline static constexpr unsigned int GKJNLEHLIIM_TypeDefinitionIndex = 43951;

class GKJNLEHLIIM : public ::System::Object
{
public:
	::System::Single BPEGDPLGFPO; // 0x10
	::System::Int32 ECAJMFPANNE; // 0x14
	::System::Int32 PKMFBJMJCOO; // 0x18

	::System::Void _ctor(::System::Int32 PKMFBJMJCOO, ::System::Int32 ECAJMFPANNE, ::System::Single BPEGDPLGFPO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + GKJNLEHLIIM__CTOR_OFFSET))(this, PKMFBJMJCOO, ECAJMFPANNE, BPEGDPLGFPO);
	}
};
