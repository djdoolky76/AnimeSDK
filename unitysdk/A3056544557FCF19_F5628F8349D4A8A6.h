#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class E891BA3236FD13E7; }
namespace UnityEngine { class GameObject; }

#define A3056544557FCF19_F5628F8349D4A8A6_B25EDD3B2432D169_OFFSET UNITYSDK_OFFSET(0x1EDB0A0)
#define A3056544557FCF19_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EDB790)
#define A3056544557FCF19_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A3056544557FCF19_F5628F8349D4A8A6_TypeDefinitionIndex = 7346;

class A3056544557FCF19_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::A3056544557FCF19_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::A3056544557FCF19_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(A3056544557FCF19_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::E891BA3236FD13E7<::UnityEngine::GameObject*>** StaticGet_E354E9AE74DDD48C()
	{
		return (::System::E891BA3236FD13E7<::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(A3056544557FCF19_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A3056544557FCF19_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A3056544557FCF19_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Boolean B25EDD3B2432D169(::UnityEngine::GameObject* AD1247287D2D9217)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + A3056544557FCF19_F5628F8349D4A8A6_B25EDD3B2432D169_OFFSET))(this, AD1247287D2D9217);
	}
};
