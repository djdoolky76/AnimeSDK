#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E08A082FFF7F8B5C.h"
#include "unitysdk/AA2A61A7920B77D2.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define A53054E5B4B4E06C_E34134935634EBF5_OFFSET UNITYSDK_OFFSET(0x23E2BA0)
#define A53054E5B4B4E06C_E721874F8CEF553A_OFFSET UNITYSDK_OFFSET(0x23E2A80)
#define A53054E5B4B4E06C_F148CB80B7853B2B_OFFSET UNITYSDK_OFFSET(0x23E2B10)
#define A53054E5B4B4E06C__CTOR_OFFSET UNITYSDK_OFFSET(0x23E2C70)

inline static constexpr unsigned int A53054E5B4B4E06C_TypeDefinitionIndex = 3951;

class A53054E5B4B4E06C : public ::E08A082FFF7F8B5C
{
public:
	static ::A53054E5B4B4E06C** StaticGet_F2EC524D6D748B5F()
	{
		return (::A53054E5B4B4E06C**)Il2CppClass::FromTypeDefinitionIndex(A53054E5B4B4E06C_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	::System::Void F148CB80B7853B2B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A53054E5B4B4E06C_F148CB80B7853B2B_OFFSET))(this);
	}

	::AA2A61A7920B77D2 E34134935634EBF5(::System::Action_1<::System::Single>* A8BC2E28FE51AC6D, ::System::Action* B294FBF5AC6D3546)
	{
		return ((::AA2A61A7920B77D2(*)(::PVOID, ::System::Action_1<::System::Single>*, ::System::Action*))((::PBYTE)hIl2Cpp + A53054E5B4B4E06C_E34134935634EBF5_OFFSET))(this, A8BC2E28FE51AC6D, B294FBF5AC6D3546);
	}

	::System::Void E721874F8CEF553A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A53054E5B4B4E06C_E721874F8CEF553A_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A53054E5B4B4E06C__CTOR_OFFSET))(this);
	}
};
