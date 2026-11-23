#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System { class String; }

#define BE890C7B4E7CE3B5__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int BE890C7B4E7CE3B5_TypeDefinitionIndex = 1434;

class BE890C7B4E7CE3B5 : public ::E379DE61A548837D
{
public:
	::System::String* A6592F4404D4B6B3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BE890C7B4E7CE3B5__CTOR_OFFSET))(this);
	}
};
