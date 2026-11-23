#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

namespace System { class String; }

#define B455CE035DFF6D6C_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1FD8780)
#define B455CE035DFF6D6C__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B455CE035DFF6D6C_TypeDefinitionIndex = 8011;

class B455CE035DFF6D6C : public ::System::Object
{
public:
	::System::String* FBE6CBAE827D91A5; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B455CE035DFF6D6C__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::B455CE035DFF6D6C* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::B455CE035DFF6D6C*))((::PBYTE)hIl2Cpp + B455CE035DFF6D6C_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
