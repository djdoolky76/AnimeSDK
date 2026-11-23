#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class AccountList; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define MIHOYO_SDK_WIN_ACCOUNTLIST_F5628F8349D4A8A6_BDA59A2537A449C5_OFFSET UNITYSDK_OFFSET(0x3974BC0)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_F5628F8349D4A8A6_F976D804502989FD_OFFSET UNITYSDK_OFFSET(0x3974B70)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3976730)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int AccountList_F5628F8349D4A8A6_TypeDefinitionIndex = 12450;

	class AccountList_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::AccountList_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::MiHoYo::SDK::Win::AccountList_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(AccountList_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::MiHoYo::SDK::Win::AccountList*>** StaticGet_F87BF241DEE8759A()
		{
			return (::System::Action_1<::MiHoYo::SDK::Win::AccountList*>**)Il2CppClass::FromTypeDefinitionIndex(AccountList_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::Action_2<::UnityEngine::GameObject*, ::System::String*>** StaticGet_A1993C2C7C3918AA()
		{
			return (::System::Action_2<::UnityEngine::GameObject*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AccountList_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void F976D804502989FD(::MiHoYo::SDK::Win::AccountList* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::AccountList*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_F5628F8349D4A8A6_F976D804502989FD_OFFSET))(this, F9ADA718944F49ED);
		}

		::System::Void BDA59A2537A449C5(::UnityEngine::GameObject* BC021E2DE715AC7D, ::System::String* E7814E933F0D3154)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_F5628F8349D4A8A6_BDA59A2537A449C5_OFFSET))(this, BC021E2DE715AC7D, E7814E933F0D3154);
		}
	};
}
