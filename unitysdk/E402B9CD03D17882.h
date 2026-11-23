#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

namespace System { class String; }

#define E402B9CD03D17882_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x20A9E60)
#define E402B9CD03D17882__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E402B9CD03D17882_TypeDefinitionIndex = 8602;

class E402B9CD03D17882 : public ::System::Object
{
public:
	::System::UInt32 F6DB1DF39B5DB8AB; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* EFCC378D42892A51; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E402B9CD03D17882__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::E402B9CD03D17882* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::E402B9CD03D17882*))((::PBYTE)hIl2Cpp + E402B9CD03D17882_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
