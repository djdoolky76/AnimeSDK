#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System { class String; }

#define AAE34BE7FE96E93E__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int AAE34BE7FE96E93E_TypeDefinitionIndex = 758;

class AAE34BE7FE96E93E : public ::E379DE61A548837D
{
public:
	::System::String* E31845CE1465720D; // 0x38
	::System::Single B3A3BC28DDF11033; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAE34BE7FE96E93E__CTOR_OFFSET))(this);
	}
};
