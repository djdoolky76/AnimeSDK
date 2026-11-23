#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System { class String; }

#define FFFFB033CAA66690__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FFFFB033CAA66690_TypeDefinitionIndex = 8599;

class FFFFB033CAA66690 : public ::E379DE61A548837D
{
public:
	::System::String* B7E0D3E06D23BA27; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFFFB033CAA66690__CTOR_OFFSET))(this);
	}
};
