#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }

#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE6AF930)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE6AF960)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__101_0_OFFSET UNITYSDK_OFFSET(0xE6AF970)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__101_1_OFFSET UNITYSDK_OFFSET(0xE6AFA20)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__101_2_OFFSET UNITYSDK_OFFSET(0xE6AFAC0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__101_3_OFFSET UNITYSDK_OFFSET(0xE6AFAF0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__101_4_OFFSET UNITYSDK_OFFSET(0xE6AFB60)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__101_5_OFFSET UNITYSDK_OFFSET(0xE6AFB90)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__101_6_OFFSET UNITYSDK_OFFSET(0xE6AFBC0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__101_7_OFFSET UNITYSDK_OFFSET(0xE6AFC90)

namespace RPG::GameCore
{
	class GameEntityExtensions___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x5FF70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __cctor_b__101_0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__101_0_OFFSET))(this, a1);
		}

		::System::Boolean __cctor_b__101_1(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__101_1_OFFSET))(this, a1);
		}

		::System::Boolean __cctor_b__101_2(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__101_2_OFFSET))(this, a1);
		}

		::System::Boolean __cctor_b__101_3(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__101_3_OFFSET))(this, a1);
		}

		::System::Boolean __cctor_b__101_4(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__101_4_OFFSET))(this, a1);
		}

		::System::Boolean __cctor_b__101_5(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__101_5_OFFSET))(this, a1);
		}

		::System::Boolean __cctor_b__101_6(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__101_6_OFFSET))(this, a1);
		}

		::System::Boolean __cctor_b__101_7(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__101_7_OFFSET))(this, a1);
		}

	};
}
