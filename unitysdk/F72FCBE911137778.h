#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

namespace System { class String; }

#define F72FCBE911137778_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x22B5DF0)
#define F72FCBE911137778__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F72FCBE911137778_TypeDefinitionIndex = 7213;

class F72FCBE911137778 : public ::System::Object
{
public:
	::System::UInt32 B6D830E728161DE3; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* F1AD39C8B00EB5DB; // 0x18
	::System::String* E2D96E7BBAB50BB5; // 0x20
	::System::UInt32 BB717F5618C308EA; // 0x28
	::System::Byte _padding1[0x4];
	::System::String* BE21D76A77357064; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F72FCBE911137778__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::F72FCBE911137778* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::F72FCBE911137778*))((::PBYTE)hIl2Cpp + F72FCBE911137778_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
