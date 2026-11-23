#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class F9B0FAE4277E552E;
namespace System { class String; }

#define A59C3BBA1EE7528A__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A59C3BBA1EE7528A_TypeDefinitionIndex = 1277;

class A59C3BBA1EE7528A : public ::E379DE61A548837D
{
public:
	::System::String* A339137B0282189F; // 0x38
	::F9B0FAE4277E552E* AA92EBAC493D1981; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A59C3BBA1EE7528A__CTOR_OFFSET))(this);
	}
};
