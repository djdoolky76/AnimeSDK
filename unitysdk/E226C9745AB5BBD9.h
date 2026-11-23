#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class F85E9E1EC79218CF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define E226C9745AB5BBD9_AAD63C5D06712326_OFFSET UNITYSDK_OFFSET(0x23D9390)
#define E226C9745AB5BBD9_B8BCCA484C1FC609_OFFSET UNITYSDK_OFFSET(0x23D92E0)
#define E226C9745AB5BBD9__CTOR_OFFSET UNITYSDK_OFFSET(0x22631D0)

inline static constexpr unsigned int E226C9745AB5BBD9_TypeDefinitionIndex = 3818;

struct alignas(8) E226C9745AB5BBD9
{
	::System::Collections::Generic::List_1<::F85E9E1EC79218CF*>* B9D253C2479CAC09; // 0x10
	::System::Int32 F5121818156EB15A; // 0x18

	::System::Void _ctor(::System::Collections::Generic::List_1<::F85E9E1EC79218CF*>* BAA111F2AB65743F, ::System::Int32 ED2B44D24CFB4E57)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::F85E9E1EC79218CF*>*, ::System::Int32))((::PBYTE)hIl2Cpp + E226C9745AB5BBD9__CTOR_OFFSET))(this, BAA111F2AB65743F, ED2B44D24CFB4E57);
	}

	::System::Boolean B8BCCA484C1FC609(::F85E9E1EC79218CF* AFE8F10692F5139F)
	{
		return ((::System::Boolean(*)(::PVOID, ::F85E9E1EC79218CF*))((::PBYTE)hIl2Cpp + E226C9745AB5BBD9_B8BCCA484C1FC609_OFFSET))(this, AFE8F10692F5139F);
	}

	::F85E9E1EC79218CF* AAD63C5D06712326()
	{
		return ((::F85E9E1EC79218CF*(*)(::PVOID))((::PBYTE)hIl2Cpp + E226C9745AB5BBD9_AAD63C5D06712326_OFFSET))(this);
	}
};
