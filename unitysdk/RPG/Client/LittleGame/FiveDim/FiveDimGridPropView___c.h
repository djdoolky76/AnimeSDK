#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LittleGame::FiveDim { class FiveDimGridPropView; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimGridPropView_IGANPFHBLJL; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD43CDA0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD43CDD0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW___C__POSTLOADASYNC_B__4_0_OFFSET UNITYSDK_OFFSET(0xD43CDE0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW___C___ONCELLASYNCLOADFINISH_B__16_0_OFFSET UNITYSDK_OFFSET(0xD43CE00)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW___C___TRYINITWATERREFLECTIONV2_B__26_0_OFFSET UNITYSDK_OFFSET(0xD43CE20)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimGridPropView___c_TypeDefinitionIndex = 77183;

	class FiveDimGridPropView___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.LittleGame.FiveDim", "<>c")->GetStaticField(0x2A250);
		}

		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.LittleGame.FiveDim", "<>c")->GetStaticField(0x2A258);
		}

		static ::System::Action_1<::RPG::Client::LittleGame::FiveDim::FiveDimGridPropView*>** StaticGet___9__26_0()
		{
			return (::System::Action_1<::RPG::Client::LittleGame::FiveDim::FiveDimGridPropView*>**)UnitySDK::FromName("RPG.Client.LittleGame.FiveDim", "<>c")->GetStaticField(0x2A260);
		}

		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.LittleGame.FiveDim", "<>c")->GetStaticField(0x2A268);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _PostLoadAsync_b__4_0(::RPG::Client::LittleGame::FiveDim::FiveDimGridPropView_IGANPFHBLJL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimGridPropView_IGANPFHBLJL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW___C__POSTLOADASYNC_B__4_0_OFFSET))(this, a1);
		}

		::System::Boolean __OnCellAsyncLoadFinish_b__16_0(::RPG::Client::LittleGame::FiveDim::FiveDimGridPropView_IGANPFHBLJL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimGridPropView_IGANPFHBLJL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW___C___ONCELLASYNCLOADFINISH_B__16_0_OFFSET))(this, a1);
		}

		::System::Void __TryInitWaterReflectionV2_b__26_0(::RPG::Client::LittleGame::FiveDim::FiveDimGridPropView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimGridPropView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW___C___TRYINITWATERREFLECTIONV2_B__26_0_OFFSET))(this, a1);
		}

	};
}
