#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DODPFANHNDG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCB12EF0)
#define RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCB12F30)
#define RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL___C___CREATEFORSESSIONBATTLE_B__20_0_OFFSET UNITYSDK_OFFSET(0xCB12F40)
#define RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL___C___CREATEFORSHOWCASEBATTLE_B__24_0_OFFSET UNITYSDK_OFFSET(0xCB12FD0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelBattlePageViewModel___c_TypeDefinitionIndex = 63400;

	class ChimeraDuelBattlePageViewModel___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::DODPFANHNDG*>** StaticGet___9__24_0()
		{
			return (::System::Action_1<::DODPFANHNDG*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xFC70);
		}

		static ::System::Action_1<::DODPFANHNDG*>** StaticGet___9__20_0()
		{
			return (::System::Action_1<::DODPFANHNDG*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xFC78);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xFC80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL___C_CTOR_OFFSET))(this);
		}

		::System::Void __CreateForSessionBattle_b__20_0(::DODPFANHNDG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DODPFANHNDG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL___C___CREATEFORSESSIONBATTLE_B__20_0_OFFSET))(this, a1);
		}

		::System::Void __CreateForShowcaseBattle_b__24_0(::DODPFANHNDG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DODPFANHNDG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL___C___CREATEFORSHOWCASEBATTLE_B__24_0_OFFSET))(this, a1);
		}

	};
}
