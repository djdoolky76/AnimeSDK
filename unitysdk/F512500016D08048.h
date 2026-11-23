#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define F512500016D08048_EA28CF291EBB2931_OFFSET UNITYSDK_OFFSET(0x4051700)
#define F512500016D08048__CCTOR_OFFSET UNITYSDK_OFFSET(0x4051980)
#define F512500016D08048__CTOR_OFFSET UNITYSDK_OFFSET(0x2294A70)

inline static constexpr unsigned int F512500016D08048_TypeDefinitionIndex = 18164;

struct alignas(4) F512500016D08048
{
	static ::F512500016D08048* StaticGet_F2D13DDA221F99E3()
	{
		return (::F512500016D08048*)Il2CppClass::FromTypeDefinitionIndex(F512500016D08048_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::F512500016D08048* StaticGet_B9509F85B42F2152()
	{
		return (::F512500016D08048*)Il2CppClass::FromTypeDefinitionIndex(F512500016D08048_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	::UnityEngine::Vector2 BDD0BFB63061789A; // 0x10
	::UnityEngine::Vector2 BD80BAA77F7F7D95; // 0x18

	::System::Void _ctor(::UnityEngine::Vector2 BDD0BFB63061789A, ::UnityEngine::Vector2 BD80BAA77F7F7D95)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + F512500016D08048__CTOR_OFFSET))(this, BDD0BFB63061789A, BD80BAA77F7F7D95);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F512500016D08048__CCTOR_OFFSET))();
	}

	::System::String* EA28CF291EBB2931()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + F512500016D08048_EA28CF291EBB2931_OFFSET))(this);
	}
};
