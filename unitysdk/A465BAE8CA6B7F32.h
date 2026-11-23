#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

namespace System { class String; }

#define A465BAE8CA6B7F32_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x220AEE0)
#define A465BAE8CA6B7F32__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A465BAE8CA6B7F32_TypeDefinitionIndex = 9063;

class A465BAE8CA6B7F32 : public ::System::Object
{
public:
	::System::String* BE37DF250CF08B02; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A465BAE8CA6B7F32__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::A465BAE8CA6B7F32* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::A465BAE8CA6B7F32*))((::PBYTE)hIl2Cpp + A465BAE8CA6B7F32_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
