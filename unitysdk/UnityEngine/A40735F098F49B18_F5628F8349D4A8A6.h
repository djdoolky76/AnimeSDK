#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class F95C599E59F9C867; }
namespace System { class FE438F7690E41ABA; }

#define UNITYENGINE_A40735F098F49B18_F5628F8349D4A8A6_FBAD6B9CA78CAC92_OFFSET UNITYSDK_OFFSET(0x4141780)
#define UNITYENGINE_A40735F098F49B18_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x41418E0)
#define UNITYENGINE_A40735F098F49B18_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine
{
	inline static constexpr unsigned int A40735F098F49B18_F5628F8349D4A8A6_TypeDefinitionIndex = 17271;

	class A40735F098F49B18_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::UnityEngine::A40735F098F49B18_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::UnityEngine::A40735F098F49B18_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(A40735F098F49B18_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::F95C599E59F9C867** StaticGet_A7539CEF38B4E00D()
		{
			return (::System::F95C599E59F9C867**)Il2CppClass::FromTypeDefinitionIndex(A40735F098F49B18_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_A40735F098F49B18_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_A40735F098F49B18_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void FBAD6B9CA78CAC92(::System::Object* AD0CAFBAFB8B01EA, ::System::FE438F7690E41ABA* A5FB7225DA5C5A9B)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::FE438F7690E41ABA*))((::PBYTE)hIl2Cpp + UNITYENGINE_A40735F098F49B18_F5628F8349D4A8A6_FBAD6B9CA78CAC92_OFFSET))(this, AD0CAFBAFB8B01EA, A5FB7225DA5C5A9B);
		}
	};
}
