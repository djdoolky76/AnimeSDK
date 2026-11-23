#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class EBDA1E8754ACD9FC;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define E5A8CA498DDF6472_AAD63C5D06712326_OFFSET UNITYSDK_OFFSET(0x2349800)
#define E5A8CA498DDF6472__CTOR_OFFSET UNITYSDK_OFFSET(0x22631D0)

inline static constexpr unsigned int E5A8CA498DDF6472_TypeDefinitionIndex = 3232;

struct alignas(8) E5A8CA498DDF6472
{
	::System::Collections::Generic::List_1<::EBDA1E8754ACD9FC*>* B9D253C2479CAC09; // 0x10
	::System::Int32 F5121818156EB15A; // 0x18

	::System::Void _ctor(::System::Collections::Generic::List_1<::EBDA1E8754ACD9FC*>* BAA111F2AB65743F, ::System::Int32 ED2B44D24CFB4E57)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::EBDA1E8754ACD9FC*>*, ::System::Int32))((::PBYTE)hIl2Cpp + E5A8CA498DDF6472__CTOR_OFFSET))(this, BAA111F2AB65743F, ED2B44D24CFB4E57);
	}

	::EBDA1E8754ACD9FC* AAD63C5D06712326()
	{
		return ((::EBDA1E8754ACD9FC*(*)(::PVOID))((::PBYTE)hIl2Cpp + E5A8CA498DDF6472_AAD63C5D06712326_OFFSET))(this);
	}
};
