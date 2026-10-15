#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Func_1; }

#define GKKLKLCOOHA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15A943F0)
#define GKKLKLCOOHA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15A94430)
#define GKKLKLCOOHA___C__BUILDBATTLELOADINGGRAPH_B__7_0_OFFSET UNITYSDK_OFFSET(0x15A94440)
#define GKKLKLCOOHA___C__BUILDBATTLELOADINGGRAPH_B__7_2_OFFSET UNITYSDK_OFFSET(0x15A94580)
#define GKKLKLCOOHA___C__BUILDBATTLELOADINGGRAPH_B__7_3_OFFSET UNITYSDK_OFFSET(0x15A945E0)
#define GKKLKLCOOHA___C__BUILDBATTLELOADINGGRAPH_B__7_4_OFFSET UNITYSDK_OFFSET(0x15A946B0)

inline static constexpr unsigned int GKKLKLCOOHA___c_TypeDefinitionIndex = 73264;

	class GKKLKLCOOHA___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__7_3()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69E70);
		}

		static ::System::Func_1<::System::Boolean>** StaticGet___9__7_2()
		{
			return (::System::Func_1<::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69E78);
		}

		static ::System::Action** StaticGet___9__7_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69E80);
		}

		static ::System::Action** StaticGet___9__7_4()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69E88);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69E90);
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
