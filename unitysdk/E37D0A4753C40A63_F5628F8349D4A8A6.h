#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B07850EA97DBB75A.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace UnityEngine { class Transform; }

#define E37D0A4753C40A63_F5628F8349D4A8A6_E065BB7589252EB0_OFFSET UNITYSDK_OFFSET(0x1EABE40)
#define E37D0A4753C40A63_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAC340)
#define E37D0A4753C40A63_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E37D0A4753C40A63_F5628F8349D4A8A6_TypeDefinitionIndex = 6708;

class E37D0A4753C40A63_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::E37D0A4753C40A63_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::E37D0A4753C40A63_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(E37D0A4753C40A63_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Func_3<::B07850EA97DBB75A<::System::String*, ::UnityEngine::Transform*>, ::B07850EA97DBB75A<::System::String*, ::UnityEngine::Transform*>, ::System::Int32>** StaticGet_B3B5BB714B5D4029()
	{
		return (::System::Func_3<::B07850EA97DBB75A<::System::String*, ::UnityEngine::Transform*>, ::B07850EA97DBB75A<::System::String*, ::UnityEngine::Transform*>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(E37D0A4753C40A63_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E37D0A4753C40A63_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E37D0A4753C40A63_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Int32 E065BB7589252EB0(::B07850EA97DBB75A<::System::String*, ::UnityEngine::Transform*> B35BBBE7E39341A2, ::B07850EA97DBB75A<::System::String*, ::UnityEngine::Transform*> AE40CAA6BBFEAD2C)
	{
		return ((::System::Int32(*)(::PVOID, ::B07850EA97DBB75A<::System::String*, ::UnityEngine::Transform*>, ::B07850EA97DBB75A<::System::String*, ::UnityEngine::Transform*>))((::PBYTE)hIl2Cpp + E37D0A4753C40A63_F5628F8349D4A8A6_E065BB7589252EB0_OFFSET))(this, B35BBBE7E39341A2, AE40CAA6BBFEAD2C);
	}
};
