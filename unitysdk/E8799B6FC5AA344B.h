#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E1F93AB18BCDCBA2/E7B8983A1811B02F.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define E8799B6FC5AA344B_EA28CF291EBB2931_OFFSET UNITYSDK_OFFSET(0x3E157A0)
#define E8799B6FC5AA344B__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3E15840)
#define E8799B6FC5AA344B__CTOR_OFFSET UNITYSDK_OFFSET(0x3E15820)

inline static constexpr unsigned int E8799B6FC5AA344B_TypeDefinitionIndex = 14745;

class E8799B6FC5AA344B : public ::System::Object
{
public:
	::E1F93AB18BCDCBA2::E7B8983A1811B02F BA7DCDD2238774EE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E8799B6FC5AA344B__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::E1F93AB18BCDCBA2::E7B8983A1811B02F F3851C787B08F75B)
	{
		return ((::System::Void(*)(::PVOID, ::E1F93AB18BCDCBA2::E7B8983A1811B02F))((::PBYTE)hIl2Cpp + E8799B6FC5AA344B__CTOR_1_OFFSET))(this, F3851C787B08F75B);
	}

	::System::String* EA28CF291EBB2931()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + E8799B6FC5AA344B_EA28CF291EBB2931_OFFSET))(this);
	}
};
