#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AA50C9FA59D35210; }
namespace UnityEngine { class B07D27203C69A8A5; }

#define ABC_COROUTINE_MONOCOROUTINE_A394279F0714B85B_OFFSET UNITYSDK_OFFSET(0x1F9DD80)
#define ABC_COROUTINE_MONOCOROUTINE_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x1F9DC70)
#define ABC_COROUTINE_MONOCOROUTINE_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x1F9DCC0)
#define ABC_COROUTINE_MONOCOROUTINE_FE0616BA9F77676D_OFFSET UNITYSDK_OFFSET(0x1F9DE40)
#define ABC_COROUTINE_MONOCOROUTINE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9DFA0)
#define ABC_COROUTINE_MONOCOROUTINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9E020)

namespace ABC::Coroutine
{
	inline static constexpr unsigned int MonoCoroutine_TypeDefinitionIndex = 7955;

	class MonoCoroutine
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Single, ::UnityEngine::AA50C9FA59D35210*>** StaticGet_B4D50898C8CFFB19()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Single, ::UnityEngine::AA50C9FA59D35210*>**)Il2CppClass::FromTypeDefinitionIndex(MonoCoroutine_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		static ::UnityEngine::AA50C9FA59D35210* FE0616BA9F77676D(::System::Single FF0A37159A523E06)
		{
			return ((::UnityEngine::AA50C9FA59D35210*(*)(::System::Single))((::PBYTE)hIl2Cpp + ABC_COROUTINE_MONOCOROUTINE_FE0616BA9F77676D_OFFSET))(FF0A37159A523E06);
		}

		static ::System::Void A394279F0714B85B(::UnityEngine::B07D27203C69A8A5* A75F283EBA029CB1)
		{
			return ((::System::Void(*)(::UnityEngine::B07D27203C69A8A5*))((::PBYTE)hIl2Cpp + ABC_COROUTINE_MONOCOROUTINE_A394279F0714B85B_OFFSET))(A75F283EBA029CB1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABC_COROUTINE_MONOCOROUTINE__CCTOR_OFFSET))();
		}

		static ::UnityEngine::B07D27203C69A8A5* F328E4D8818B1E12(::System::Collections::IEnumerator* A75F283EBA029CB1)
		{
			return ((::UnityEngine::B07D27203C69A8A5*(*)(::System::Collections::IEnumerator*))((::PBYTE)hIl2Cpp + ABC_COROUTINE_MONOCOROUTINE_F328E4D8818B1E12_OFFSET))(A75F283EBA029CB1);
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_COROUTINE_MONOCOROUTINE_AB36E0EE549986E5_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_COROUTINE_MONOCOROUTINE__CTOR_OFFSET))(this);
		}
	};
}
