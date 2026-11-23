#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System { class String; }

#define FE301951CAD6D47D__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FE301951CAD6D47D_TypeDefinitionIndex = 6215;

class FE301951CAD6D47D : public ::E379DE61A548837D
{
public:
	::System::String* EFDBEA101A71D165; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FE301951CAD6D47D__CTOR_OFFSET))(this);
	}
};
