#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::Events { class UnityAction; }

#define AGEJMDMLAKO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCF27F40)
#define AGEJMDMLAKO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCF27F80)
#define AGEJMDMLAKO___C__ASOBSERVABLE_B__0_0_OFFSET UNITYSDK_OFFSET(0xCF27F90)

inline static constexpr unsigned int AGEJMDMLAKO___c_TypeDefinitionIndex = 49984;

	class AGEJMDMLAKO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53210);
		}

		static ::System::Func_2<::System::Action*, ::UnityEngine::Events::UnityAction*>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::System::Action*, ::UnityEngine::Events::UnityAction*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53218);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGEJMDMLAKO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGEJMDMLAKO___C_CTOR_OFFSET))(this);
		}

		::UnityEngine::Events::UnityAction* _AsObservable_b__0_0(::System::Action* a1)
		{
			return ((::UnityEngine::Events::UnityAction*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + AGEJMDMLAKO___C__ASOBSERVABLE_B__0_0_OFFSET))(this, a1);
		}

	};
