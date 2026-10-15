#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACHNEAMCCEC;
class BJDBKICFGAM;
class CEEGMMCFCBG;
namespace R3 { class Observable; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETCONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD638C70)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETCONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD638CB0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETCONTROL___C___BINDATTRIBUTES_B__8_0_OFFSET UNITYSDK_OFFSET(0xD638CE0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETCONTROL___C___BINDATTRIBUTES_B__8_1_OFFSET UNITYSDK_OFFSET(0xD638D00)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETCONTROL___C___BINDATTRIBUTES_B__8_2_OFFSET UNITYSDK_OFFSET(0xD638D20)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETCONTROL___C___BINDATTRIBUTES_B__8_3_OFFSET UNITYSDK_OFFSET(0xD638D40)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETCONTROL___C___BINDATTRIBUTES_B__8_4_OFFSET UNITYSDK_OFFSET(0xD638D60)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETCONTROL___C___BINDCOMMANDS_B__7_0_OFFSET UNITYSDK_OFFSET(0xD638CC0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETCONTROL___C___BINDTRAITS_B__9_0_OFFSET UNITYSDK_OFFSET(0xD638D80)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETCONTROL___C___BINDTRAITS_B__9_1_OFFSET UNITYSDK_OFFSET(0xD638DA0)

namespace RPG::Client::MechCraft::View
{
	class MechCraftCraftTargetControl___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::BJDBKICFGAM*, ::ACHNEAMCCEC*>** StaticGet___9__8_2()
		{
			return (::System::Func_2<::BJDBKICFGAM*, ::ACHNEAMCCEC*>**)UnitySDK::FromName("RPG.Client.MechCraft.View", "<>c")->GetStaticField(0x599B0);
		}

		static ::System::Func_2<::BJDBKICFGAM*, ::ACHNEAMCCEC*>** StaticGet___9__8_4()
		{
			return (::System::Func_2<::BJDBKICFGAM*, ::ACHNEAMCCEC*>**)UnitySDK::FromName("RPG.Client.MechCraft.View", "<>c")->GetStaticField(0x599B8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.MechCraft.View", "<>c")->GetStaticField(0x599C0);
		}

		static ::System::Func_2<::BJDBKICFGAM*, ::R3::Observable*>** StaticGet___9__9_1()
		{
			return (::System::Func_2<::BJDBKICFGAM*, ::R3::Observable*>**)UnitySDK::FromName("RPG.Client.MechCraft.View", "<>c")->GetStaticField(0x599C8);
		}

		static ::System::Func_2<::BJDBKICFGAM*, ::R3::Observable*>** StaticGet___9__8_3()
		{
			return (::System::Func_2<::BJDBKICFGAM*, ::R3::Observable*>**)UnitySDK::FromName("RPG.Client.MechCraft.View", "<>c")->GetStaticField(0x599D0);
		}

		static ::System::Func_2<::BJDBKICFGAM*, ::R3::Observable*>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::BJDBKICFGAM*, ::R3::Observable*>**)UnitySDK::FromName("RPG.Client.MechCraft.View", "<>c")->GetStaticField(0x599D8);
		}

		static ::System::Func_2<::BJDBKICFGAM*, ::R3::Observable*>** StaticGet___9__8_1()
		{
			return (::System::Func_2<::BJDBKICFGAM*, ::R3::Observable*>**)UnitySDK::FromName("RPG.Client.MechCraft.View", "<>c")->GetStaticField(0x599E0);
		}

		static ::System::Func_2<::BJDBKICFGAM*, ::R3::Observable*>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::BJDBKICFGAM*, ::R3::Observable*>**)UnitySDK::FromName("RPG.Client.MechCraft.View", "<>c")->GetStaticField(0x599E8);
		}

		static ::System::Func_2<::BJDBKICFGAM*, ::CEEGMMCFCBG*>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::BJDBKICFGAM*, ::CEEGMMCFCBG*>**)UnitySDK::FromName("RPG.Client.MechCraft.View", "<>c")->GetStaticField(0x599F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETCONTROL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETCONTROL___C_CTOR_OFFSET))(this);
		}

		::CEEGMMCFCBG* __BindCommands_b__7_0(::BJDBKICFGAM* a1)
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID, ::BJDBKICFGAM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETCONTROL___C___BINDCOMMANDS_B__7_0_OFFSET))(this, a1);
		}

		::R3::Observable* __BindAttributes_b__8_0(::BJDBKICFGAM* a1)
		{
			return ((::R3::Observable*(*)(::PVOID, ::BJDBKICFGAM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETCONTROL___C___BINDATTRIBUTES_B__8_0_OFFSET))(this, a1);
		}

		::R3::Observable* __BindAttributes_b__8_1(::BJDBKICFGAM* a1)
		{
			return ((::R3::Observable*(*)(::PVOID, ::BJDBKICFGAM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETCONTROL___C___BINDATTRIBUTES_B__8_1_OFFSET))(this, a1);
		}

		::ACHNEAMCCEC* __BindAttributes_b__8_2(::BJDBKICFGAM* a1)
		{
			return ((::ACHNEAMCCEC*(*)(::PVOID, ::BJDBKICFGAM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETCONTROL___C___BINDATTRIBUTES_B__8_2_OFFSET))(this, a1);
		}

		::R3::Observable* __BindAttributes_b__8_3(::BJDBKICFGAM* a1)
		{
			return ((::R3::Observable*(*)(::PVOID, ::BJDBKICFGAM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETCONTROL___C___BINDATTRIBUTES_B__8_3_OFFSET))(this, a1);
		}

		::ACHNEAMCCEC* __BindAttributes_b__8_4(::BJDBKICFGAM* a1)
		{
			return ((::ACHNEAMCCEC*(*)(::PVOID, ::BJDBKICFGAM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETCONTROL___C___BINDATTRIBUTES_B__8_4_OFFSET))(this, a1);
		}

		::R3::Observable* __BindTraits_b__9_0(::BJDBKICFGAM* a1)
		{
			return ((::R3::Observable*(*)(::PVOID, ::BJDBKICFGAM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETCONTROL___C___BINDTRAITS_B__9_0_OFFSET))(this, a1);
		}

		::R3::Observable* __BindTraits_b__9_1(::BJDBKICFGAM* a1)
		{
			return ((::R3::Observable*(*)(::PVOID, ::BJDBKICFGAM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETCONTROL___C___BINDTRAITS_B__9_1_OFFSET))(this, a1);
		}

	};
}
