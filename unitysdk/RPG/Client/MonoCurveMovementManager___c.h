#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class CurveMovementHandler; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MONOCURVEMOVEMENTMANAGER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x140184A0)
#define RPG_CLIENT_MONOCURVEMOVEMENTMANAGER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x140184E0)
#define RPG_CLIENT_MONOCURVEMOVEMENTMANAGER___C__ISALLMOVEMENTHANDLERCOMPLETED_B__21_0_OFFSET UNITYSDK_OFFSET(0x14018510)
#define RPG_CLIENT_MONOCURVEMOVEMENTMANAGER___C__ISANYMOVEMENTHANDLERMOVING_B__20_0_OFFSET UNITYSDK_OFFSET(0x140184F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoCurveMovementManager___c_TypeDefinitionIndex = 70498;

	class MonoCurveMovementManager___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::CurveMovementHandler*, ::System::Boolean>** StaticGet___9__21_0()
		{
			return (::System::Func_2<::RPG::Client::CurveMovementHandler*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x681B0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x681B8);
		}

		static ::System::Func_2<::RPG::Client::CurveMovementHandler*, ::System::Boolean>** StaticGet___9__20_0()
		{
			return (::System::Func_2<::RPG::Client::CurveMovementHandler*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x681C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTMANAGER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTMANAGER___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _IsAnyMovementHandlerMoving_b__20_0(::RPG::Client::CurveMovementHandler* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CurveMovementHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTMANAGER___C__ISANYMOVEMENTHANDLERMOVING_B__20_0_OFFSET))(this, a1);
		}

		::System::Boolean _IsAllMovementHandlerCompleted_b__21_0(::RPG::Client::CurveMovementHandler* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CurveMovementHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTMANAGER___C__ISALLMOVEMENTHANDLERCOMPLETED_B__21_0_OFFSET))(this, a1);
		}

	};
}
