#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define F5B377BE177AA795_A73C54BBC805BA5E_OFFSET UNITYSDK_OFFSET(0x2504A60)
#define F5B377BE177AA795_EA28CF291EBB2931_OFFSET UNITYSDK_OFFSET(0x26531E0)
#define F5B377BE177AA795__CTOR_OFFSET UNITYSDK_OFFSET(0x1FCB750)

inline static constexpr unsigned int F5B377BE177AA795_TypeDefinitionIndex = 6141;

struct alignas(4) F5B377BE177AA795
{
	::System::UInt32 B607049B28E13FE9; // 0x10
	::System::UInt32 A258384B21F30389; // 0x14

	::System::Boolean A73C54BBC805BA5E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + F5B377BE177AA795_A73C54BBC805BA5E_OFFSET))(this);
	}

	::System::Void _ctor(::System::UInt32 B66188ED5BB6ED20, ::System::UInt32 AB8EADAD402FF352)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + F5B377BE177AA795__CTOR_OFFSET))(this, B66188ED5BB6ED20, AB8EADAD402FF352);
	}

	::System::String* EA28CF291EBB2931()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + F5B377BE177AA795_EA28CF291EBB2931_OFFSET))(this);
	}
};
