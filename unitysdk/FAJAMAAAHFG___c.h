#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define FAJAMAAAHFG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x156813D0)
#define FAJAMAAAHFG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15681400)
#define FAJAMAAAHFG___C___CTOR_B__39_0_OFFSET UNITYSDK_OFFSET(0x15681410)

	class FAJAMAAAHFG___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::GameEntity*, ::System::Boolean>** StaticGet___9__39_0()
		{
			return (::System::Func_2<::RPG::GameCore::GameEntity*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C880);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C888);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAJAMAAAHFG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAJAMAAAHFG___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __ctor_b__39_0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FAJAMAAAHFG___C___CTOR_B__39_0_OFFSET))(this, a1);
		}

	};
