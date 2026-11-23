#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }

#define MIHOYO_SDK_WIN_INTERNALACCOUNTLISTDROPDOWNITEMHANDLER_F5628F8349D4A8A6_E62B0756BAA5A32C_OFFSET UNITYSDK_OFFSET(0x3A298A0)
#define MIHOYO_SDK_WIN_INTERNALACCOUNTLISTDROPDOWNITEMHANDLER_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3A2BB30)
#define MIHOYO_SDK_WIN_INTERNALACCOUNTLISTDROPDOWNITEMHANDLER_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int InternalAccountListDropdownItemHandler_F5628F8349D4A8A6_TypeDefinitionIndex = 12838;

	class InternalAccountListDropdownItemHandler_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::InternalAccountListDropdownItemHandler_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::MiHoYo::SDK::Win::InternalAccountListDropdownItemHandler_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(InternalAccountListDropdownItemHandler_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_2<::UnityEngine::GameObject*, ::System::String*>** StaticGet_AF311A9CD59B0BEF()
		{
			return (::System::Action_2<::UnityEngine::GameObject*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(InternalAccountListDropdownItemHandler_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_INTERNALACCOUNTLISTDROPDOWNITEMHANDLER_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_INTERNALACCOUNTLISTDROPDOWNITEMHANDLER_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void E62B0756BAA5A32C(::UnityEngine::GameObject* BC021E2DE715AC7D, ::System::String* E7814E933F0D3154)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_INTERNALACCOUNTLISTDROPDOWNITEMHANDLER_F5628F8349D4A8A6_E62B0756BAA5A32C_OFFSET))(this, BC021E2DE715AC7D, E7814E933F0D3154);
		}
	};
}
