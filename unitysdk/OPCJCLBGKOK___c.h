#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define OPCJCLBGKOK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x18AB45C0)
#define OPCJCLBGKOK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x18AB4600)
#define OPCJCLBGKOK___C___ONBATTLETOGGLESKILLPRESHOW_B__73_0_OFFSET UNITYSDK_OFFSET(0x18AB4610)

inline static constexpr unsigned int OPCJCLBGKOK___c_TypeDefinitionIndex = 73935;

	class OPCJCLBGKOK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69900);
		}

		static ::System::Func_2<::RPG::GameCore::GameEntity*, ::System::Boolean>** StaticGet___9__73_0()
		{
			return (::System::Func_2<::RPG::GameCore::GameEntity*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69908);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPCJCLBGKOK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCJCLBGKOK___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __OnBattleToggleSkillPreShow_b__73_0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OPCJCLBGKOK___C___ONBATTLETOGGLESKILLPRESHOW_B__73_0_OFFSET))(this, a1);
		}

	};
