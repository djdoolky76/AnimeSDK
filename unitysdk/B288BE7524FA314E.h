#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System { class String; }

#define B288BE7524FA314E__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B288BE7524FA314E_TypeDefinitionIndex = 1293;

class B288BE7524FA314E : public ::E379DE61A548837D
{
public:
	::System::String* E31845CE1465720D; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B288BE7524FA314E__CTOR_OFFSET))(this);
	}
};
