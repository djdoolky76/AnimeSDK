#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }

#define MIHOYO_SDK_WIN_INTERNALACCOUNTLISTDROPDOWNITEMHANDLER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD295B0)
#define MIHOYO_SDK_WIN_INTERNALACCOUNTLISTDROPDOWNITEMHANDLER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BD295F0)
#define MIHOYO_SDK_WIN_INTERNALACCOUNTLISTDROPDOWNITEMHANDLER___C__PARSEACCOUNTINFO_B__21_0_OFFSET UNITYSDK_OFFSET(0x1BD29600)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int InternalAccountListDropdownItemHandler___c_TypeDefinitionIndex = 9300;

	class InternalAccountListDropdownItemHandler___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x32520);
		}

		static ::System::Action_2<::UnityEngine::GameObject*, ::System::String*>** StaticGet___9__21_0()
		{
			return (::System::Action_2<::UnityEngine::GameObject*, ::System::String*>**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x32528);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_INTERNALACCOUNTLISTDROPDOWNITEMHANDLER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_INTERNALACCOUNTLISTDROPDOWNITEMHANDLER___C_CTOR_OFFSET))(this);
		}

		::System::Void _ParseAccountInfo_b__21_0(::UnityEngine::GameObject* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_INTERNALACCOUNTLISTDROPDOWNITEMHANDLER___C__PARSEACCOUNTINFO_B__21_0_OFFSET))(this, a1, a2);
		}

	};
}
