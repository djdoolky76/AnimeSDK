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

#define RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDC34780)
#define RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDC347C0)
#define RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL___C___BINDCOLORSTATE_B__8_0_OFFSET UNITYSDK_OFFSET(0xDC351B0)
#define RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL___C___BINDCOLORSTATE_B__8_1_OFFSET UNITYSDK_OFFSET(0xDC352C0)
#define RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL___C___BINDDISPLAYTYPE_B__7_0_OFFSET UNITYSDK_OFFSET(0xDC347D0)
#define RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL___C___BINDDISPLAYTYPE_B__7_1_OFFSET UNITYSDK_OFFSET(0xDC349E0)
#define RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL___C___BINDDISPLAYTYPE_B__7_2_OFFSET UNITYSDK_OFFSET(0xDC34BF0)
#define RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL___C___BINDDISPLAYTYPE_B__7_3_OFFSET UNITYSDK_OFFSET(0xDC34E10)
#define RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL___C___BINDDISPLAYTYPE_B__7_4_OFFSET UNITYSDK_OFFSET(0xDC35020)
#define RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL___C___BINDDISPLAYTYPE_B__7_5_OFFSET UNITYSDK_OFFSET(0xDC349D0)
#define RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL___C___BINDDISPLAYTYPE_B__7_6_OFFSET UNITYSDK_OFFSET(0xDC34BE0)
#define RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL___C___BINDDISPLAYTYPE_B__7_7_OFFSET UNITYSDK_OFFSET(0xDC34DF0)
#define RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL___C___BINDDISPLAYTYPE_B__7_8_OFFSET UNITYSDK_OFFSET(0xDC35010)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPositionTagControl___c_TypeDefinitionIndex = 61387;

	class GridFightPositionTagControl___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Nullable_1<::RPG::GameCore::GridFightPreset>, ::System::Boolean>** StaticGet___9__7_6()
		{
			return (::System::Func_2<::System::Nullable_1<::RPG::GameCore::GridFightPreset>, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x73140);
		}

		static ::System::Func_2<::AGKODPKMDMA*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::AGKODPKMDMA*, ::R3::Observable_1<::System::Boolean>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x73148);
		}

		static ::System::Func_2<::AGKODPKMDMA*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::AGKODPKMDMA*, ::R3::Observable_1<::System::String*>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x73150);
		}

		static ::System::Func_2<::AGKODPKMDMA*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__7_1()
		{
			return (::System::Func_2<::AGKODPKMDMA*, ::R3::Observable_1<::System::Boolean>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x73158);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x73160);
		}

		static ::System::Func_2<::AGKODPKMDMA*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__7_3()
		{
			return (::System::Func_2<::AGKODPKMDMA*, ::R3::Observable_1<::System::Boolean>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x73168);
		}

		static ::System::Func_2<::AGKODPKMDMA*, ::R3::Observable_1<::RPG::Client::TextID>*>** StaticGet___9__7_4()
		{
			return (::System::Func_2<::AGKODPKMDMA*, ::R3::Observable_1<::RPG::Client::TextID>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x73170);
		}

		static ::System::Func_2<::System::Nullable_1<::RPG::GameCore::GridFightPreset>, ::System::Boolean>** StaticGet___9__7_5()
		{
			return (::System::Func_2<::System::Nullable_1<::RPG::GameCore::GridFightPreset>, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x73178);
		}

		static ::System::Func_2<::System::Nullable_1<::RPG::GameCore::GridFightPreset>, ::System::Boolean>** StaticGet___9__7_8()
		{
			return (::System::Func_2<::System::Nullable_1<::RPG::GameCore::GridFightPreset>, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x73180);
		}

		static ::System::Action_2<::RPG::Client::MonoUIColorSwitcher*, ::System::String*>** StaticGet___9__8_1()
		{
			return (::System::Action_2<::RPG::Client::MonoUIColorSwitcher*, ::System::String*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x73188);
		}

		static ::System::Func_2<::AGKODPKMDMA*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__7_2()
		{
			return (::System::Func_2<::AGKODPKMDMA*, ::R3::Observable_1<::System::Boolean>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x73190);
		}

		static ::System::Func_2<::System::Nullable_1<::RPG::GameCore::GridFightPreset>, ::System::Boolean>** StaticGet___9__7_7()
		{
			return (::System::Func_2<::System::Nullable_1<::RPG::GameCore::GridFightPreset>, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x73198);
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
