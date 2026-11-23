#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class E891BA3236FD13E7; }

#define B393860B070D1CD7_B29534C51C610AF1_EA1766B83C8E5BB7_OFFSET UNITYSDK_OFFSET(0x3843A30)
#define B393860B070D1CD7_B29534C51C610AF1__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B393860B070D1CD7_B29534C51C610AF1_TypeDefinitionIndex = 17959;

class B393860B070D1CD7_B29534C51C610AF1 : public ::System::Object
{
public:
	::Il2CppArray<::System::Int32>* FA02BFB4F2A39143; // 0x10
	::System::Int32 AA292D26F1CE96C4; // 0x18
	::System::Byte _padding0[0x4];
	::System::E891BA3236FD13E7<::System::Int32>* F422651CC4956382; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B393860B070D1CD7_B29534C51C610AF1__CTOR_OFFSET))(this);
	}

	::System::Boolean EA1766B83C8E5BB7(::System::Int32 F5AEFA05C9F71B82)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + B393860B070D1CD7_B29534C51C610AF1_EA1766B83C8E5BB7_OFFSET))(this, F5AEFA05C9F71B82);
	}
};
