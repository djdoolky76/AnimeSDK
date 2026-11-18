#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define FCBAKPMKCHN_GOHFLHMOEFC_HKKEPLGDCJH_OFFSET UNITYSDK_OFFSET(0x169C4180)
#define FCBAKPMKCHN_GOHFLHMOEFC_KMDLDPJLINM_OFFSET UNITYSDK_OFFSET(0x169C4170)
#define FCBAKPMKCHN_GOHFLHMOEFC__CTOR_OFFSET UNITYSDK_OFFSET(0x169C4160)

inline static constexpr unsigned int FCBAKPMKCHN_GOHFLHMOEFC_TypeDefinitionIndex = 58379;

class FCBAKPMKCHN_GOHFLHMOEFC : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::System::Action* FFMGICPLKFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBAKPMKCHN_GOHFLHMOEFC__CTOR_OFFSET))(this);
	}

	::System::Void KMDLDPJLINM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBAKPMKCHN_GOHFLHMOEFC_KMDLDPJLINM_OFFSET))(this);
	}

	::System::Void HKKEPLGDCJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBAKPMKCHN_GOHFLHMOEFC_HKKEPLGDCJH_OFFSET))(this);
	}
};
