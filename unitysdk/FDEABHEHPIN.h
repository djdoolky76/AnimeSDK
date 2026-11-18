#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define FDEABHEHPIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1C31E0)

inline static constexpr unsigned int FDEABHEHPIN_TypeDefinitionIndex = 94146;

class FDEABHEHPIN : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::System::Single DLBFEAOALML; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDEABHEHPIN__CTOR_OFFSET))(this);
	}
};
