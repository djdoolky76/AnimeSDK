#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class FightFestPaper; }
namespace RPG::Client { class FightFestPaperInterview; }
namespace RPG::Client { class FightFestPhase; }
namespace RPG::Client { class FightFestScoreRace; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_FIGHTFESTMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD9803E0)
#define RPG_CLIENT_FIGHTFESTMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD980410)
#define RPG_CLIENT_FIGHTFESTMODULE___C__GETAVAILABLEPAPERIDS_B__78_0_OFFSET UNITYSDK_OFFSET(0xD980520)
#define RPG_CLIENT_FIGHTFESTMODULE___C__GETAVAILABLEPAPERIDS_B__78_1_OFFSET UNITYSDK_OFFSET(0xD980540)
#define RPG_CLIENT_FIGHTFESTMODULE___C__GETPAPERPROGRESS_B__183_0_OFFSET UNITYSDK_OFFSET(0xD980700)
#define RPG_CLIENT_FIGHTFESTMODULE___C__ISSHOWSCORERACENEWTIPS_B__135_0_OFFSET UNITYSDK_OFFSET(0xD9806A0)
#define RPG_CLIENT_FIGHTFESTMODULE___C___INITPAPERS_B__77_0_OFFSET UNITYSDK_OFFSET(0xD980420)
#define RPG_CLIENT_FIGHTFESTMODULE___C___INITPHASES_B__86_0_OFFSET UNITYSDK_OFFSET(0xD9805A0)

namespace RPG::Client
{
	inline static constexpr unsigned int FightFestModule___c_TypeDefinitionIndex = 65633;

	class FightFestModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::FightFestPaper*, ::System::UInt32>** StaticGet___9__78_1()
		{
			return (::System::Func_2<::RPG::Client::FightFestPaper*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x66DE0);
		}

		static ::System::Func_2<::RPG::Client::FightFestPaper*, ::System::Boolean>** StaticGet___9__78_0()
		{
			return (::System::Func_2<::RPG::Client::FightFestPaper*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x66DE8);
		}

		static ::System::Func_2<::RPG::Client::FightFestScoreRace*, ::System::Boolean>** StaticGet___9__135_0()
		{
			return (::System::Func_2<::RPG::Client::FightFestScoreRace*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x66DF0);
		}

		static ::System::Func_2<::RPG::Client::FightFestPaper*, ::System::Boolean>** StaticGet___9__183_0()
		{
			return (::System::Func_2<::RPG::Client::FightFestPaper*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x66DF8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x66E00);
		}

		static ::System::Comparison_1<::RPG::Client::FightFestPaperInterview*>** StaticGet___9__77_0()
		{
			return (::System::Comparison_1<::RPG::Client::FightFestPaperInterview*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x66E08);
		}

		static ::System::Comparison_1<::RPG::Client::FightFestPhase*>** StaticGet___9__86_0()
		{
			return (::System::Comparison_1<::RPG::Client::FightFestPhase*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x66E10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __InitPapers_b__77_0(::RPG::Client::FightFestPaperInterview* a1, ::RPG::Client::FightFestPaperInterview* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FightFestPaperInterview*, ::RPG::Client::FightFestPaperInterview*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE___C___INITPAPERS_B__77_0_OFFSET))(this, a1, a2);
		}

		::System::Boolean _GetAvailablePaperIDs_b__78_0(::RPG::Client::FightFestPaper* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FightFestPaper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE___C__GETAVAILABLEPAPERIDS_B__78_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetAvailablePaperIDs_b__78_1(::RPG::Client::FightFestPaper* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::FightFestPaper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE___C__GETAVAILABLEPAPERIDS_B__78_1_OFFSET))(this, a1);
		}

		::System::Int32 __InitPhases_b__86_0(::RPG::Client::FightFestPhase* a1, ::RPG::Client::FightFestPhase* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FightFestPhase*, ::RPG::Client::FightFestPhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE___C___INITPHASES_B__86_0_OFFSET))(this, a1, a2);
		}

		::System::Boolean _IsShowScoreRaceNewTips_b__135_0(::RPG::Client::FightFestScoreRace* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FightFestScoreRace*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE___C__ISSHOWSCORERACENEWTIPS_B__135_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetPaperProgress_b__183_0(::RPG::Client::FightFestPaper* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FightFestPaper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE___C__GETPAPERPROGRESS_B__183_0_OFFSET))(this, a1);
		}

	};
}
