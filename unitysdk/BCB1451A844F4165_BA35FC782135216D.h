#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define BCB1451A844F4165_BA35FC782135216D__CTOR_OFFSET UNITYSDK_OFFSET(0x3C51D20)

inline static constexpr unsigned int BCB1451A844F4165_BA35FC782135216D_TypeDefinitionIndex = 11601;

class BCB1451A844F4165_BA35FC782135216D : public ::System::Object
{
public:
	::System::String* A1AD49ABC0442489; // 0x10
	::System::String* E8F3148A854C0045; // 0x18

	::System::Void _ctor(::System::String* F79B4D487F303AB2, ::System::String* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + BCB1451A844F4165_BA35FC782135216D__CTOR_OFFSET))(this, F79B4D487F303AB2, E937D4885DAA1AE8);
	}
};
