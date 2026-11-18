#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define JKLLGBHAIPP_LEFHGJHAAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x14FC1620)

inline static constexpr unsigned int JKLLGBHAIPP_LEFHGJHAAIN_TypeDefinitionIndex = 56652;

class JKLLGBHAIPP_LEFHGJHAAIN : public ::System::Object
{
public:
	::System::Action* JLPNMCINKOP; // 0x10
	::System::Action* KCFPBEBEAFE; // 0x18
	::System::Action* KPFKDDMENIP; // 0x20
	::System::Boolean PHLECPEJKJM; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLLGBHAIPP_LEFHGJHAAIN__CTOR_OFFSET))(this);
	}
};
