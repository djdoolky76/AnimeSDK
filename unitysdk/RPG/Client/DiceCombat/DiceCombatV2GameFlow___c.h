#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCCA3E00)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCCA3E40)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW___C___ONEXITED_B__8_0_OFFSET UNITYSDK_OFFSET(0xCCA3E50)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2GameFlow___c_TypeDefinitionIndex = 76183;

	class DiceCombatV2GameFlow___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.DiceCombat", "<>c")->GetStaticField(0x2C340);
		}

		static ::System::Action** StaticGet___9__8_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.DiceCombat", "<>c")->GetStaticField(0x2C348);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW___C_CTOR_OFFSET))(this);
		}

		::System::Void __OnExited_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW___C___ONEXITED_B__8_0_OFFSET))(this);
		}

	};
}
