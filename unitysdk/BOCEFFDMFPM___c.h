#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOCEFFDMFPM;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class AsyncOperation; }

#define BOCEFFDMFPM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C441740)
#define BOCEFFDMFPM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C441770)
#define BOCEFFDMFPM___C___CTOR_B__68_0_OFFSET UNITYSDK_OFFSET(0x1C441780)

inline static constexpr unsigned int BOCEFFDMFPM___c_TypeDefinitionIndex = 41568;

	class BOCEFFDMFPM___c : public ::System::Object
	{
	public:
		static ::System::Action_2<::BOCEFFDMFPM*, ::UnityEngine::AsyncOperation*>** StaticGet___9__68_0()
		{
			return (::System::Action_2<::BOCEFFDMFPM*, ::UnityEngine::AsyncOperation*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x11590);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x11598);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOCEFFDMFPM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCEFFDMFPM___C_CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__68_0(::BOCEFFDMFPM* a1, ::UnityEngine::AsyncOperation* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BOCEFFDMFPM*, ::UnityEngine::AsyncOperation*))((::PBYTE)hIl2Cpp + BOCEFFDMFPM___C___CTOR_B__68_0_OFFSET))(this, a1, a2);
		}

	};
