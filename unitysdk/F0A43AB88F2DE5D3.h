#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

namespace System { class String; }

#define F0A43AB88F2DE5D3_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1F59B60)
#define F0A43AB88F2DE5D3__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F0A43AB88F2DE5D3_TypeDefinitionIndex = 7781;

class F0A43AB88F2DE5D3 : public ::System::Object
{
public:
	::System::UInt32 FE2FB0D55556BFD9; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* EE1F6B2D64076FFA; // 0x18
	::System::UInt32 F48717168EFBC596; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F0A43AB88F2DE5D3__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::F0A43AB88F2DE5D3* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::F0A43AB88F2DE5D3*))((::PBYTE)hIl2Cpp + F0A43AB88F2DE5D3_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
