#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKMJPMFCNBK.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define GAANHGEJJBP_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x11D951C0)
#define GAANHGEJJBP_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0x11D95310)
#define GAANHGEJJBP__CTOR_OFFSET UNITYSDK_OFFSET(0x11D95290)

inline static constexpr unsigned int GAANHGEJJBP_TypeDefinitionIndex = 76481;

class GAANHGEJJBP : public ::PKMJPMFCNBK
{
public:
	::System::Single GLHFFDFJEHB; // 0x80
	::System::Single OPMMICALHCM; // 0x84
	::UnityEngine::Vector3 PLBLJOFODIO; // 0x88
	::System::Int32 AOGOCDMGFDK; // 0x94
	::System::Int32 JDDOJHMNMNN; // 0x98
	::System::Boolean KCFENDHFCCK; // 0x9C
	::System::Byte _padding0[0x3];
	::System::Single COIGAKIMINJ; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAANHGEJJBP__CTOR_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAANHGEJJBP_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAANHGEJJBP_KHJELIBOECB_OFFSET))(this);
	}
};
