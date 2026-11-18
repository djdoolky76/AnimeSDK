#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PNJDGHBEMLK;
namespace DG::Tweening { class TweenCallback; }
namespace System { class Action; }

#define PNJDGHBEMLK_PAHOLFKGJDG_KLNMJAGOKDG_OFFSET UNITYSDK_OFFSET(0x1D9D7270)
#define PNJDGHBEMLK_PAHOLFKGJDG_OCGLONBNJDC_OFFSET UNITYSDK_OFFSET(0x1D9D73A0)
#define PNJDGHBEMLK_PAHOLFKGJDG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9D7260)

inline static constexpr unsigned int PNJDGHBEMLK_PAHOLFKGJDG_TypeDefinitionIndex = 64968;

class PNJDGHBEMLK_PAHOLFKGJDG : public ::System::Object
{
public:
	::DG::Tweening::TweenCallback* FFMGICPLKFB; // 0x10
	::DG::Tweening::TweenCallback* KAKAEMACNPB; // 0x18
	::PNJDGHBEMLK* KLHPEBKNIFB; // 0x20
	::System::Action* IHLBALNBGKM; // 0x28
	::System::Single IAKPGBCAAKM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_PAHOLFKGJDG__CTOR_OFFSET))(this);
	}

	::System::Void KLNMJAGOKDG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_PAHOLFKGJDG_KLNMJAGOKDG_OFFSET))(this);
	}

	::System::Void OCGLONBNJDC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_PAHOLFKGJDG_OCGLONBNJDC_OFFSET))(this);
	}
};
