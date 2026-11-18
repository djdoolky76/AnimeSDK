#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PNJDGHBEMLK;
namespace DG::Tweening { class TweenCallback; }
namespace System { class Action; }

#define PNJDGHBEMLK_GIEAHCDAOKN_AAECOMHCOEM_OFFSET UNITYSDK_OFFSET(0x1C66DBA0)
#define PNJDGHBEMLK_GIEAHCDAOKN_LDDEBKDIGFN_OFFSET UNITYSDK_OFFSET(0x1C66DCA0)
#define PNJDGHBEMLK_GIEAHCDAOKN__CTOR_OFFSET UNITYSDK_OFFSET(0x1C66DB90)

inline static constexpr unsigned int PNJDGHBEMLK_GIEAHCDAOKN_TypeDefinitionIndex = 64975;

class PNJDGHBEMLK_GIEAHCDAOKN : public ::System::Object
{
public:
	::DG::Tweening::TweenCallback* DLMJCFBENGB; // 0x10
	::System::Action* IHLBALNBGKM; // 0x18
	::PNJDGHBEMLK* KLHPEBKNIFB; // 0x20
	::DG::Tweening::TweenCallback* FFMGICPLKFB; // 0x28
	::System::Single IAKPGBCAAKM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_GIEAHCDAOKN__CTOR_OFFSET))(this);
	}

	::System::Void AAECOMHCOEM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_GIEAHCDAOKN_AAECOMHCOEM_OFFSET))(this);
	}

	::System::Void LDDEBKDIGFN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_GIEAHCDAOKN_LDDEBKDIGFN_OFFSET))(this);
	}
};
