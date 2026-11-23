#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class AccountList; }
namespace UnityEngine { class GameObject; }

#define MIHOYO_SDK_WIN_ACCOUNTLIST_A0FEB8C477330569_A1AF85D7C35C080F_OFFSET UNITYSDK_OFFSET(0x3976590)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_A0FEB8C477330569__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int AccountList_A0FEB8C477330569_TypeDefinitionIndex = 12451;

	class AccountList_A0FEB8C477330569 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::AccountList* A544919C800E2923; // 0x10
		::UnityEngine::GameObject* BC63F4052E4478D7; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_A0FEB8C477330569__CTOR_OFFSET))(this);
		}

		::System::Void A1AF85D7C35C080F(::System::Int32 B178D92F8F7EFDB4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_A0FEB8C477330569_A1AF85D7C35C080F_OFFSET))(this, B178D92F8F7EFDB4);
		}
	};
}
