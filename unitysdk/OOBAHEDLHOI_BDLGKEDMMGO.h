#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AFMMAIKKACF;
namespace System { class Action; }

#define OOBAHEDLHOI_BDLGKEDMMGO_PACHIIOAOGH_OFFSET UNITYSDK_OFFSET(0x136C2B10)
#define OOBAHEDLHOI_BDLGKEDMMGO__CTOR_OFFSET UNITYSDK_OFFSET(0x136C2B00)

inline static constexpr unsigned int OOBAHEDLHOI_BDLGKEDMMGO_TypeDefinitionIndex = 75517;

class OOBAHEDLHOI_BDLGKEDMMGO : public ::System::Object
{
public:
	::AFMMAIKKACF* AAOCANGHBDG; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18
	::System::Boolean FHGBBCFIBGF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_BDLGKEDMMGO__CTOR_OFFSET))(this);
	}

	::System::Void PACHIIOAOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_BDLGKEDMMGO_PACHIIOAOGH_OFFSET))(this);
	}
};
