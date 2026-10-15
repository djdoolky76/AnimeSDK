#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCC1FCE0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCC1FD20)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW___C___ONEXITED_B__7_0_OFFSET UNITYSDK_OFFSET(0xCC1FD30)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatGameFlow___c_TypeDefinitionIndex = 76106;

	class DiceCombatGameFlow___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.DiceCombat", "<>c")->GetStaticField(0x20B00);
		}

		static ::System::Action** StaticGet___9__7_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.DiceCombat", "<>c")->GetStaticField(0x20B08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW___C_CTOR_OFFSET))(this);
		}

		::System::Void __OnExited_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW___C___ONEXITED_B__7_0_OFFSET))(this);
		}

	};
}
