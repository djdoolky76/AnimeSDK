#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/E8479911231216BD.h"
#include "unitysdk/System/Nullable_1.h"

namespace System { class String; }

#define F22946D20D16E543_A3BD228118E0B5D4_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define F22946D20D16E543_B2A534B56850F1F6_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define F22946D20D16E543_FFC8F57E8D4599A9_1_OFFSET UNITYSDK_OFFSET(0x2A00AD0)
#define F22946D20D16E543_FFC8F57E8D4599A9_OFFSET UNITYSDK_OFFSET(0x2A00A10)
#define F22946D20D16E543__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F22946D20D16E543_TypeDefinitionIndex = 15884;

class F22946D20D16E543 : public ::System::Object
{
public:
	::System::String* BA00E44E13D7CC7C; // 0x10

	::System::Void FFC8F57E8D4599A9(::System::Nullable_1<::E8479911231216BD> BEEE7A5A60941632)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::E8479911231216BD>))((::PBYTE)hIl2Cpp + F22946D20D16E543_FFC8F57E8D4599A9_OFFSET))(this, BEEE7A5A60941632);
	}

	::System::Void FFC8F57E8D4599A9_1(::System::Object* BEEE7A5A60941632)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + F22946D20D16E543_FFC8F57E8D4599A9_1_OFFSET))(this, BEEE7A5A60941632);
	}

	::System::Void B2A534B56850F1F6(::System::String* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + F22946D20D16E543_B2A534B56850F1F6_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F22946D20D16E543__CTOR_OFFSET))(this);
	}

	::System::String* A3BD228118E0B5D4()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + F22946D20D16E543_A3BD228118E0B5D4_OFFSET))(this);
	}
};
