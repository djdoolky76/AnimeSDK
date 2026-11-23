#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System { class String; }

#define B27CF5593AF84361__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B27CF5593AF84361_TypeDefinitionIndex = 756;

class B27CF5593AF84361 : public ::E379DE61A548837D
{
public:
	::System::String* B22024564E8C495E; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B27CF5593AF84361__CTOR_OFFSET))(this);
	}
};
