#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Func_1; }

#define GKKLKLCOOHA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A8DB430)
#define GKKLKLCOOHA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1A8DB470)
#define GKKLKLCOOHA___C__BUILDBATTLELOADINGGRAPH_B__7_0_OFFSET UNITYSDK_OFFSET(0x1A8DB480)
#define GKKLKLCOOHA___C__BUILDBATTLELOADINGGRAPH_B__7_2_OFFSET UNITYSDK_OFFSET(0x1A8DB5C0)
#define GKKLKLCOOHA___C__BUILDBATTLELOADINGGRAPH_B__7_3_OFFSET UNITYSDK_OFFSET(0x1A8DB620)
#define GKKLKLCOOHA___C__BUILDBATTLELOADINGGRAPH_B__7_4_OFFSET UNITYSDK_OFFSET(0x1A8DB6F0)

inline static constexpr unsigned int GKKLKLCOOHA___c_TypeDefinitionIndex = 75380;

	class GKKLKLCOOHA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x702F0);
		}

		static ::System::Func_1<::System::Boolean>** StaticGet___9__7_2()
		{
			return (::System::Func_1<::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x702F8);
		}

		static ::System::Action** StaticGet___9__7_3()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x70300);
		}

		static ::System::Action** StaticGet___9__7_4()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x70308);
		}

		static ::System::Action** StaticGet___9__7_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x70310);
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
