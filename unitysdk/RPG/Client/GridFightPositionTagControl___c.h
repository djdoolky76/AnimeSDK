#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightPreset.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
class AGKODPKMDMA;
namespace R3 { template <typename T> class Observable_1; }
namespace RPG::Client { class MonoUIColorSwitcher; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF32600)
#define RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF32640)
#define RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL___C___BINDCOLORSTATE_B__8_0_OFFSET UNITYSDK_OFFSET(0x1DF33030)
#define RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL___C___BINDCOLORSTATE_B__8_1_OFFSET UNITYSDK_OFFSET(0x1DF33140)
#define RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL___C___BINDDISPLAYTYPE_B__7_0_OFFSET UNITYSDK_OFFSET(0x1DF32650)
#define RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL___C___BINDDISPLAYTYPE_B__7_1_OFFSET UNITYSDK_OFFSET(0x1DF32860)
#define RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL___C___BINDDISPLAYTYPE_B__7_2_OFFSET UNITYSDK_OFFSET(0x1DF32A70)
#define RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL___C___BINDDISPLAYTYPE_B__7_3_OFFSET UNITYSDK_OFFSET(0x1DF32C90)
#define RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL___C___BINDDISPLAYTYPE_B__7_4_OFFSET UNITYSDK_OFFSET(0x1DF32EA0)
#define RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL___C___BINDDISPLAYTYPE_B__7_5_OFFSET UNITYSDK_OFFSET(0x1DF32850)
#define RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL___C___BINDDISPLAYTYPE_B__7_6_OFFSET UNITYSDK_OFFSET(0x1DF32A60)
#define RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL___C___BINDDISPLAYTYPE_B__7_7_OFFSET UNITYSDK_OFFSET(0x1DF32C70)
#define RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL___C___BINDDISPLAYTYPE_B__7_8_OFFSET UNITYSDK_OFFSET(0x1DF32E90)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPositionTagControl___c_TypeDefinitionIndex = 61387;

	class GridFightPositionTagControl___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::AGKODPKMDMA*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::AGKODPKMDMA*, ::R3::Observable_1<::System::Boolean>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72D20);
		}

		static ::System::Func_2<::AGKODPKMDMA*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__7_3()
		{
			return (::System::Func_2<::AGKODPKMDMA*, ::R3::Observable_1<::System::Boolean>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72D28);
		}

		static ::System::Func_2<::System::Nullable_1<::RPG::GameCore::GridFightPreset>, ::System::Boolean>** StaticGet___9__7_8()
		{
			return (::System::Func_2<::System::Nullable_1<::RPG::GameCore::GridFightPreset>, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72D30);
		}

		static ::System::Func_2<::System::Nullable_1<::RPG::GameCore::GridFightPreset>, ::System::Boolean>** StaticGet___9__7_7()
		{
			return (::System::Func_2<::System::Nullable_1<::RPG::GameCore::GridFightPreset>, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72D38);
		}

		static ::System::Func_2<::AGKODPKMDMA*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__7_2()
		{
			return (::System::Func_2<::AGKODPKMDMA*, ::R3::Observable_1<::System::Boolean>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72D40);
		}

		static ::System::Func_2<::AGKODPKMDMA*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::AGKODPKMDMA*, ::R3::Observable_1<::System::String*>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72D48);
		}

		static ::System::Func_2<::System::Nullable_1<::RPG::GameCore::GridFightPreset>, ::System::Boolean>** StaticGet___9__7_5()
		{
			return (::System::Func_2<::System::Nullable_1<::RPG::GameCore::GridFightPreset>, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72D50);
		}

		static ::System::Func_2<::System::Nullable_1<::RPG::GameCore::GridFightPreset>, ::System::Boolean>** StaticGet___9__7_6()
		{
			return (::System::Func_2<::System::Nullable_1<::RPG::GameCore::GridFightPreset>, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72D58);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72D60);
		}

		static ::System::Func_2<::AGKODPKMDMA*, ::R3::Observable_1<::RPG::Client::TextID>*>** StaticGet___9__7_4()
		{
			return (::System::Func_2<::AGKODPKMDMA*, ::R3::Observable_1<::RPG::Client::TextID>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72D68);
		}

		static ::System::Action_2<::RPG::Client::MonoUIColorSwitcher*, ::System::String*>** StaticGet___9__8_1()
		{
			return (::System::Action_2<::RPG::Client::MonoUIColorSwitcher*, ::System::String*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72D70);
		}

		static ::System::Func_2<::AGKODPKMDMA*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__7_1()
		{
			return (::System::Func_2<::AGKODPKMDMA*, ::R3::Observable_1<::System::Boolean>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72D78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL___C_CTOR_OFFSET))(this);
		}

		::R3::Observable_1<::System::Boolean>* __BindDisplayType_b__7_0(::AGKODPKMDMA* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::AGKODPKMDMA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL___C___BINDDISPLAYTYPE_B__7_0_OFFSET))(this, a1);
		}

		::System::Boolean __BindDisplayType_b__7_5(::System::Nullable_1<::RPG::GameCore::GridFightPreset> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Nullable_1<::RPG::GameCore::GridFightPreset>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL___C___BINDDISPLAYTYPE_B__7_5_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindDisplayType_b__7_1(::AGKODPKMDMA* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::AGKODPKMDMA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL___C___BINDDISPLAYTYPE_B__7_1_OFFSET))(this, a1);
		}

		::System::Boolean __BindDisplayType_b__7_6(::System::Nullable_1<::RPG::GameCore::GridFightPreset> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Nullable_1<::RPG::GameCore::GridFightPreset>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL___C___BINDDISPLAYTYPE_B__7_6_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindDisplayType_b__7_2(::AGKODPKMDMA* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::AGKODPKMDMA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL___C___BINDDISPLAYTYPE_B__7_2_OFFSET))(this, a1);
		}

		::System::Boolean __BindDisplayType_b__7_7(::System::Nullable_1<::RPG::GameCore::GridFightPreset> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Nullable_1<::RPG::GameCore::GridFightPreset>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL___C___BINDDISPLAYTYPE_B__7_7_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindDisplayType_b__7_3(::AGKODPKMDMA* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::AGKODPKMDMA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL___C___BINDDISPLAYTYPE_B__7_3_OFFSET))(this, a1);
		}

		::System::Boolean __BindDisplayType_b__7_8(::System::Nullable_1<::RPG::GameCore::GridFightPreset> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Nullable_1<::RPG::GameCore::GridFightPreset>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL___C___BINDDISPLAYTYPE_B__7_8_OFFSET))(this, a1);
		}

		::R3::Observable_1<::RPG::Client::TextID>* __BindDisplayType_b__7_4(::AGKODPKMDMA* a1)
		{
			return ((::R3::Observable_1<::RPG::Client::TextID>*(*)(::PVOID, ::AGKODPKMDMA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL___C___BINDDISPLAYTYPE_B__7_4_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __BindColorState_b__8_0(::AGKODPKMDMA* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::AGKODPKMDMA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL___C___BINDCOLORSTATE_B__8_0_OFFSET))(this, a1);
		}

		::System::Void __BindColorState_b__8_1(::RPG::Client::MonoUIColorSwitcher* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoUIColorSwitcher*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL___C___BINDCOLORSTATE_B__8_1_OFFSET))(this, a1, a2);
		}

	};
}
