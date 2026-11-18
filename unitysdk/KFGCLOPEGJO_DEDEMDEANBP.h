#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ShaderAniHelp;

#define KFGCLOPEGJO_DEDEMDEANBP_CJMIHCNLLLP_OFFSET UNITYSDK_OFFSET(0x129941A0)
#define KFGCLOPEGJO_DEDEMDEANBP__CTOR_OFFSET UNITYSDK_OFFSET(0x12988F90)

inline static constexpr unsigned int KFGCLOPEGJO_DEDEMDEANBP_TypeDefinitionIndex = 78939;

class KFGCLOPEGJO_DEDEMDEANBP : public ::System::Object
{
public:
	::System::Int32 JGLEEAPGODC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_DEDEMDEANBP__CTOR_OFFSET))(this);
	}

	::System::Void CJMIHCNLLLP(::ShaderAniHelp* GBELIHABEDH, ::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::ShaderAniHelp*, ::System::Single))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_DEDEMDEANBP_CJMIHCNLLLP_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}
};
