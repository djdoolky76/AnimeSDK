#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E75C455E43F4478E;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define E75C455E43F4478E_B9380428097D90BB_F2B05E463E7B87F7_OFFSET UNITYSDK_OFFSET(0x3908F80)
#define E75C455E43F4478E_B9380428097D90BB__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E75C455E43F4478E_B9380428097D90BB_TypeDefinitionIndex = 12303;

class E75C455E43F4478E_B9380428097D90BB : public ::System::Object
{
public:
	::E75C455E43F4478E* A544919C800E2923; // 0x10
	::System::String* E41EB813C7FB644A; // 0x18
	::System::Action_1<::System::String*>* E04D2BE64FCE9814; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E75C455E43F4478E_B9380428097D90BB__CTOR_OFFSET))(this);
	}

	::System::Void F2B05E463E7B87F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E75C455E43F4478E_B9380428097D90BB_F2B05E463E7B87F7_OFFSET))(this);
	}
};
