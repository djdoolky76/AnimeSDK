#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightTraitChallenge; }
namespace RPG::Client { class GridFightTraitConfig; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D4FC380)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4FC3C0)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT___C__ANYQUESTFINISHED_B__7_0_OFFSET UNITYSDK_OFFSET(0x1D4FC4A0)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT___C__CHECKHASANYTRAITQUESTFINISHEDBYTYPE_B__2_0_OFFSET UNITYSDK_OFFSET(0x1D4FC3D0)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT___C__GETTRAITCONFIGSWITHOUTCHECKCOMPLETED_B__5_1_OFFSET UNITYSDK_OFFSET(0x1D4FC410)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT___C__GETTRAITCONFIGSWITHOUTCHECKCOMPLETED_B__5_2_OFFSET UNITYSDK_OFFSET(0x1D4FC480)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT___C__GETTRAITCONFIGS_B__4_1_OFFSET UNITYSDK_OFFSET(0x1D4FC3F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSeasonTrait___c_TypeDefinitionIndex = 67315;

	class GridFightSeasonTrait___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::GridFightTraitChallenge*>** StaticGet___9__5_1()
		{
			return (::System::Comparison_1<::RPG::Client::GridFightTraitChallenge*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xE140);
		}

		static ::System::Func_2<::RPG::Client::GridFightTraitChallenge*, ::RPG::Client::GridFightTraitConfig*>** StaticGet___9__5_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightTraitChallenge*, ::RPG::Client::GridFightTraitConfig*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xE148);
		}

		static ::System::Func_2<::RPG::Client::GridFightTraitChallenge*, ::RPG::Client::GridFightTraitConfig*>** StaticGet___9__4_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightTraitChallenge*, ::RPG::Client::GridFightTraitConfig*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xE150);
		}

		static ::System::Func_2<::RPG::Client::GridFightTraitChallenge*, ::System::Boolean>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTraitChallenge*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xE158);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xE160);
		}

		static ::System::Func_2<::RPG::Client::GridFightTraitChallenge*, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTraitChallenge*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xE168);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _CheckHasAnyTraitQuestFinishedByType_b__2_0(::RPG::Client::GridFightTraitChallenge* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitChallenge*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT___C__CHECKHASANYTRAITQUESTFINISHEDBYTYPE_B__2_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTraitConfig* _GetTraitConfigs_b__4_1(::RPG::Client::GridFightTraitChallenge* a1)
		{
			return ((::RPG::Client::GridFightTraitConfig*(*)(::PVOID, ::RPG::Client::GridFightTraitChallenge*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT___C__GETTRAITCONFIGS_B__4_1_OFFSET))(this, a1);
		}

		::System::Int32 _GetTraitConfigsWithoutCheckCompleted_b__5_1(::RPG::Client::GridFightTraitChallenge* a1, ::RPG::Client::GridFightTraitChallenge* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightTraitChallenge*, ::RPG::Client::GridFightTraitChallenge*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT___C__GETTRAITCONFIGSWITHOUTCHECKCOMPLETED_B__5_1_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightTraitConfig* _GetTraitConfigsWithoutCheckCompleted_b__5_2(::RPG::Client::GridFightTraitChallenge* a1)
		{
			return ((::RPG::Client::GridFightTraitConfig*(*)(::PVOID, ::RPG::Client::GridFightTraitChallenge*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT___C__GETTRAITCONFIGSWITHOUTCHECKCOMPLETED_B__5_2_OFFSET))(this, a1);
		}

		::System::Boolean _AnyQuestFinished_b__7_0(::RPG::Client::GridFightTraitChallenge* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitChallenge*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT___C__ANYQUESTFINISHED_B__7_0_OFFSET))(this, a1);
		}

	};
}
