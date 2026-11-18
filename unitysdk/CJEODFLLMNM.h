#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CJEODFLLMNM__CTOR_OFFSET UNITYSDK_OFFSET(0x13265DC0)

inline static constexpr unsigned int CJEODFLLMNM_TypeDefinitionIndex = 42213;

class CJEODFLLMNM : public ::System::Object
{
public:
	::System::Action* APOLHIKALHK; // 0x10
	::System::Action* FLMHIPABPHL; // 0x18
	::System::Action* GKBNEEMCJFM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEODFLLMNM__CTOR_OFFSET))(this);
	}
};
