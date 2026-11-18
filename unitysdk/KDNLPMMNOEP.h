#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define KDNLPMMNOEP__CTOR_OFFSET UNITYSDK_OFFSET(0x15156B80)

inline static constexpr unsigned int KDNLPMMNOEP_TypeDefinitionIndex = 80723;

class KDNLPMMNOEP : public ::System::Object
{
public:
	::System::String* OGLGLMCCLEJ; // 0x10
	::System::String* HAMIDAGPIFG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDNLPMMNOEP__CTOR_OFFSET))(this);
	}
};
