#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_DICECOMBATACTIVITYDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C53F460)
#define RPG_CLIENT_DICECOMBATACTIVITYDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C53F4A0)
#define RPG_CLIENT_DICECOMBATACTIVITYDATA___C___GOTOENTRANCEPAGE_B__8_1_OFFSET UNITYSDK_OFFSET(0x1C53F4B0)

namespace RPG::Client
{
	inline static constexpr unsigned int DiceCombatActivityData___c_TypeDefinitionIndex = 63009;

	class DiceCombatActivityData___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2D3F0);
		}

		static ::System::Action** StaticGet___9__8_1()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2D3F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATACTIVITYDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATACTIVITYDATA___C_CTOR_OFFSET))(this);
		}

		::System::Void __GotoEntrancePage_b__8_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATACTIVITYDATA___C___GOTOENTRANCEPAGE_B__8_1_OFFSET))(this);
		}

	};
}
