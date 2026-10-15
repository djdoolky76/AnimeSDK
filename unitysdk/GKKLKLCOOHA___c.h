#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Func_1; }

#define GKKLKLCOOHA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15A9FF60)
#define GKKLKLCOOHA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15A9FFA0)
#define GKKLKLCOOHA___C__BUILDBATTLELOADINGGRAPH_B__7_0_OFFSET UNITYSDK_OFFSET(0x15A9FFB0)
#define GKKLKLCOOHA___C__BUILDBATTLELOADINGGRAPH_B__7_2_OFFSET UNITYSDK_OFFSET(0x15AA00F0)
#define GKKLKLCOOHA___C__BUILDBATTLELOADINGGRAPH_B__7_3_OFFSET UNITYSDK_OFFSET(0x15AA0150)
#define GKKLKLCOOHA___C__BUILDBATTLELOADINGGRAPH_B__7_4_OFFSET UNITYSDK_OFFSET(0x15AA0220)

	class GKKLKLCOOHA___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__7_4()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x644C0);
		}

		static ::System::Func_1<::System::Boolean>** StaticGet___9__7_2()
		{
			return (::System::Func_1<::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x644C8);
		}

		static ::System::Action** StaticGet___9__7_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x644D0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x644D8);
		}

		static ::System::Action** StaticGet___9__7_3()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x644E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKKLKLCOOHA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKKLKLCOOHA___C_CTOR_OFFSET))(this);
		}

		::System::Void _BuildBattleLoadingGraph_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKKLKLCOOHA___C__BUILDBATTLELOADINGGRAPH_B__7_0_OFFSET))(this);
		}

		::System::Boolean _BuildBattleLoadingGraph_b__7_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKKLKLCOOHA___C__BUILDBATTLELOADINGGRAPH_B__7_2_OFFSET))(this);
		}

		::System::Void _BuildBattleLoadingGraph_b__7_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKKLKLCOOHA___C__BUILDBATTLELOADINGGRAPH_B__7_3_OFFSET))(this);
		}

		::System::Void _BuildBattleLoadingGraph_b__7_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKKLKLCOOHA___C__BUILDBATTLELOADINGGRAPH_B__7_4_OFFSET))(this);
		}

	};
