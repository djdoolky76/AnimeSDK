#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define EMAFOGNODKM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1552FE20)
#define EMAFOGNODKM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1552FE50)
#define EMAFOGNODKM___C___REFRESHHUDACTIVESTATE_B__55_0_OFFSET UNITYSDK_OFFSET(0x1552FE60)

	class EMAFOGNODKM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49830);
		}

		static ::System::Func_2<::RPG::GameCore::GameEntity*, ::System::Boolean>** StaticGet___9__55_0()
		{
			return (::System::Func_2<::RPG::GameCore::GameEntity*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49838);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMAFOGNODKM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAFOGNODKM___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __RefreshHUDActiveState_b__55_0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EMAFOGNODKM___C___REFRESHHUDACTIVESTATE_B__55_0_OFFSET))(this, a1);
		}

	};
