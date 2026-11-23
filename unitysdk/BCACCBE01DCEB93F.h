#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define BCACCBE01DCEB93F__CTOR_OFFSET UNITYSDK_OFFSET(0x3C6A6A0)

inline static constexpr unsigned int BCACCBE01DCEB93F_TypeDefinitionIndex = 10618;

class BCACCBE01DCEB93F : public ::System::Object
{
public:
	::System::String* EA13ED3B97933823; // 0x10
	::System::String* F0332E54BE3EB603; // 0x18
	::System::Boolean BBBBA7ACC398147A; // 0x20

	::System::Void _ctor(::System::String* EA13ED3B97933823, ::System::String* F0332E54BE3EB603, ::System::Boolean BBBBA7ACC398147A)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + BCACCBE01DCEB93F__CTOR_OFFSET))(this, EA13ED3B97933823, F0332E54BE3EB603, BBBBA7ACC398147A);
	}
};
