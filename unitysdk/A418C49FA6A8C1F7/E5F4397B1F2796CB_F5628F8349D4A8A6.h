#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Hash128.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define A418C49FA6A8C1F7_E5F4397B1F2796CB_F5628F8349D4A8A6_F25B2DADEF28F0D9_OFFSET UNITYSDK_OFFSET(0x4370E50)
#define A418C49FA6A8C1F7_E5F4397B1F2796CB_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x4371510)
#define A418C49FA6A8C1F7_E5F4397B1F2796CB_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace A418C49FA6A8C1F7
{
	inline static constexpr unsigned int E5F4397B1F2796CB_F5628F8349D4A8A6_TypeDefinitionIndex = 13712;

	class E5F4397B1F2796CB_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::A418C49FA6A8C1F7::E5F4397B1F2796CB_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::A418C49FA6A8C1F7::E5F4397B1F2796CB_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(E5F4397B1F2796CB_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_3<::System::String*, ::UnityEngine::Hash128, ::UnityEngine::Hash128>** StaticGet_BD38FA80B668E0D5()
		{
			return (::System::Func_3<::System::String*, ::UnityEngine::Hash128, ::UnityEngine::Hash128>**)Il2CppClass::FromTypeDefinitionIndex(E5F4397B1F2796CB_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_E5F4397B1F2796CB_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_E5F4397B1F2796CB_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::UnityEngine::Hash128 F25B2DADEF28F0D9(::System::String* B9AEC57275825552, ::UnityEngine::Hash128 FC300ADBDFF24726)
		{
			return ((::UnityEngine::Hash128(*)(::PVOID, ::System::String*, ::UnityEngine::Hash128))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_E5F4397B1F2796CB_F5628F8349D4A8A6_F25B2DADEF28F0D9_OFFSET))(this, B9AEC57275825552, FC300ADBDFF24726);
		}
	};
}
