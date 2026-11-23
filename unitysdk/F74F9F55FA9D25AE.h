#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define F74F9F55FA9D25AE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3E2D010)
#define F74F9F55FA9D25AE__CTOR_OFFSET UNITYSDK_OFFSET(0x3E2D090)

inline static constexpr unsigned int F74F9F55FA9D25AE_TypeDefinitionIndex = 15309;

class F74F9F55FA9D25AE : public ::System::Object
{
public:
	::System::String* BD28E4AE47A807DD; // 0x10
	::System::Boolean F7463EBA671FB624; // 0x18
	::System::Byte _padding0[0x7];
	::System::String* B2AB11F2AA936DEC; // 0x20

	::System::Void _ctor(::System::String* BD2C65BCCC92F212, ::System::Boolean ACFBA03F9E31C599)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + F74F9F55FA9D25AE__CTOR_OFFSET))(this, BD2C65BCCC92F212, ACFBA03F9E31C599);
	}

	::System::Void _ctor_1(::System::String* BD2C65BCCC92F212)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + F74F9F55FA9D25AE__CTOR_1_OFFSET))(this, BD2C65BCCC92F212);
	}
};
