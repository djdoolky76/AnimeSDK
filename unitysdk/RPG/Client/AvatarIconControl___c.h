#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarMarkFlags.h"
#include "unitysdk/RPG/Client/AvatarMaterialIndex.h"
#include "unitysdk/RPG/Client/AvatarSpecialMarkType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class AGKODPKMDMA;
class CBJILMHOMGP;
class CEEGMMCFCBG;
class GOKNJPBGBLE;
class JGBNDFAOIFC;
class PPHMLMHGOIJ;
namespace R3 { template <typename T> class Observable_1; }
namespace RPG::Client { class MonoMaterialSwitch; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_AVATARICONCONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD05B0E0)
#define RPG_CLIENT_AVATARICONCONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD05B120)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDBUTTON_B__41_0_OFFSET UNITYSDK_OFFSET(0xD05B130)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDBUTTON_B__41_1_OFFSET UNITYSDK_OFFSET(0xD05B250)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDBUTTON_B__41_2_OFFSET UNITYSDK_OFFSET(0xD05B370)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDBUTTON_B__41_3_OFFSET UNITYSDK_OFFSET(0xD05B490)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDCHILDCONTROLS_B__53_0_OFFSET UNITYSDK_OFFSET(0xD05F3D0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDCHILDCONTROLS_B__53_1_OFFSET UNITYSDK_OFFSET(0xD05F550)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDCHILDCONTROLS_B__53_2_OFFSET UNITYSDK_OFFSET(0xD05F670)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDCHILDCONTROLS_B__53_3_OFFSET UNITYSDK_OFFSET(0xD05F7F0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_0_OFFSET UNITYSDK_OFFSET(0xD05E610)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_1_OFFSET UNITYSDK_OFFSET(0xD05E730)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_2_OFFSET UNITYSDK_OFFSET(0xD05E850)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_3_OFFSET UNITYSDK_OFFSET(0xD05E970)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_4_OFFSET UNITYSDK_OFFSET(0xD05EA90)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_5_OFFSET UNITYSDK_OFFSET(0xD05EBB0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_6_OFFSET UNITYSDK_OFFSET(0xD05ECD0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_7_OFFSET UNITYSDK_OFFSET(0xD05EDF0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDIMAGES_B__42_0_OFFSET UNITYSDK_OFFSET(0xD05B5B0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDIMAGES_B__42_1_OFFSET UNITYSDK_OFFSET(0xD05B6D0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDIMAGES_B__42_2_OFFSET UNITYSDK_OFFSET(0xD05B7F0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDIMAGES_B__42_3_OFFSET UNITYSDK_OFFSET(0xD05BA10)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDIMAGES_B__42_4_OFFSET UNITYSDK_OFFSET(0xD05BB30)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDIMAGES_B__42_5_OFFSET UNITYSDK_OFFSET(0xD05B9F0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDLEVELPANEL_B__43_0_OFFSET UNITYSDK_OFFSET(0xD05BC50)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDLEVELPANEL_B__43_1_OFFSET UNITYSDK_OFFSET(0xD05BE70)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDLEVELPANEL_B__43_2_OFFSET UNITYSDK_OFFSET(0xD05BF90)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDLEVELPANEL_B__43_3_OFFSET UNITYSDK_OFFSET(0xD05C1E0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDLEVELPANEL_B__43_4_OFFSET UNITYSDK_OFFSET(0xD05BE50)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDLEVELPANEL_B__43_5_OFFSET UNITYSDK_OFFSET(0xD05C190)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDLEVELPANEL_B__43_6_OFFSET UNITYSDK_OFFSET(0xD05C3E0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_0_OFFSET UNITYSDK_OFFSET(0xD05C770)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_10_OFFSET UNITYSDK_OFFSET(0xD05CFA0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_11_OFFSET UNITYSDK_OFFSET(0xD05D1B0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_12_OFFSET UNITYSDK_OFFSET(0xD05D3C0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_13_OFFSET UNITYSDK_OFFSET(0xD05D5D0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_1_OFFSET UNITYSDK_OFFSET(0xD05C980)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_2_OFFSET UNITYSDK_OFFSET(0xD05CB90)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_3_OFFSET UNITYSDK_OFFSET(0xD05CDA0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_4_OFFSET UNITYSDK_OFFSET(0xD05CFB0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_5_OFFSET UNITYSDK_OFFSET(0xD05D1C0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_6_OFFSET UNITYSDK_OFFSET(0xD05D3D0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_7_OFFSET UNITYSDK_OFFSET(0xD05C970)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_8_OFFSET UNITYSDK_OFFSET(0xD05CB80)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_9_OFFSET UNITYSDK_OFFSET(0xD05CD90)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMATERIAL_B__52_0_OFFSET UNITYSDK_OFFSET(0xD05F270)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMATERIAL_B__52_1_OFFSET UNITYSDK_OFFSET(0xD05F390)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDNAMEPANEL_B__44_0_OFFSET UNITYSDK_OFFSET(0xD05C430)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDNAMEPANEL_B__44_1_OFFSET UNITYSDK_OFFSET(0xD05C650)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDNAMEPANEL_B__44_2_OFFSET UNITYSDK_OFFSET(0xD05C630)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDORDERANDCHECKMARK_B__48_0_OFFSET UNITYSDK_OFFSET(0xD05DAB0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDORDERANDCHECKMARK_B__48_1_OFFSET UNITYSDK_OFFSET(0xD05DF40)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDORDERANDCHECKMARK_B__48_2_OFFSET UNITYSDK_OFFSET(0xD05E060)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDORDERANDCHECKMARK_B__48_3_OFFSET UNITYSDK_OFFSET(0xD05E180)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDORDERANDCHECKMARK_B__48_4_OFFSET UNITYSDK_OFFSET(0xD05DF10)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDORDERANDCHECKMARK_B__48_5_OFFSET UNITYSDK_OFFSET(0xD05E5E0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDREDDOT_B__51_0_OFFSET UNITYSDK_OFFSET(0xD05F150)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDROGUEHEX_B__50_0_OFFSET UNITYSDK_OFFSET(0xD05EF10)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDROGUEHEX_B__50_1_OFFSET UNITYSDK_OFFSET(0xD05F030)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDSPECIALMARK_B__46_0_OFFSET UNITYSDK_OFFSET(0xD05D5E0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDSPECIALMARK_B__46_1_OFFSET UNITYSDK_OFFSET(0xD05D7F0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDSPECIALMARK_B__46_2_OFFSET UNITYSDK_OFFSET(0xD05D990)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDSPECIALMARK_B__46_3_OFFSET UNITYSDK_OFFSET(0xD05D7E0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDTUTORIAL_B__54_0_OFFSET UNITYSDK_OFFSET(0xD05F910)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarIconControl___c_TypeDefinitionIndex = 61383;

	class AvatarIconControl___c : public ::System::Object
	{
	public:
		static ::System::Action_2<::RPG::Client::MonoMaterialSwitch*, ::RPG::Client::AvatarMaterialIndex>** StaticGet___9__52_1()
		{
			return (::System::Action_2<::RPG::Client::MonoMaterialSwitch*, ::RPG::Client::AvatarMaterialIndex>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57F00);
		}

		static ::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::RPG::Client::TextID>*>** StaticGet___9__44_1()
		{
			return (::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::RPG::Client::TextID>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57F08);
		}

		static ::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__42_0()
		{
			return (::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::String*>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57F10);
		}

		static ::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__49_3()
		{
			return (::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::String*>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57F18);
		}

		static ::System::Func_2<::PPHMLMHGOIJ*, ::System::Boolean>** StaticGet___9__44_2()
		{
			return (::System::Func_2<::PPHMLMHGOIJ*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57F20);
		}

		static ::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__49_4()
		{
			return (::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Boolean>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57F28);
		}

		static ::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__43_3()
		{
			return (::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::String*>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57F30);
		}

		static ::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Int32>*>** StaticGet___9__48_2()
		{
			return (::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Int32>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57F38);
		}

		static ::System::Func_2<::PPHMLMHGOIJ*, ::System::Boolean>** StaticGet___9__43_4()
		{
			return (::System::Func_2<::PPHMLMHGOIJ*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57F40);
		}

		static ::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__44_0()
		{
			return (::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Boolean>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57F48);
		}

		static ::System::Func_2<::PPHMLMHGOIJ*, ::System::Boolean>** StaticGet___9__42_5()
		{
			return (::System::Func_2<::PPHMLMHGOIJ*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57F50);
		}

		static ::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::ValueTuple_2<::System::String*, ::System::UInt32>>*>** StaticGet___9__51_0()
		{
			return (::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::ValueTuple_2<::System::String*, ::System::UInt32>>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57F58);
		}

		static ::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Int32>*>** StaticGet___9__50_1()
		{
			return (::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Int32>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57F60);
		}

		static ::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::RPG::Client::TextID>*>** StaticGet___9__46_2()
		{
			return (::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::RPG::Client::TextID>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57F68);
		}

		static ::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__42_4()
		{
			return (::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Boolean>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57F70);
		}

		static ::System::Func_2<::JGBNDFAOIFC*, ::GOKNJPBGBLE*>** StaticGet___9__53_1()
		{
			return (::System::Func_2<::JGBNDFAOIFC*, ::GOKNJPBGBLE*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57F78);
		}

		static ::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__46_1()
		{
			return (::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::String*>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57F80);
		}

		static ::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__43_0()
		{
			return (::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Boolean>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57F88);
		}

		static ::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__45_1()
		{
			return (::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Boolean>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57F90);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57F98);
		}

		static ::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>** StaticGet___9__45_13()
		{
			return (::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57FA0);
		}

		static ::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::RPG::Client::TextID>*>** StaticGet___9__49_5()
		{
			return (::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::RPG::Client::TextID>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57FA8);
		}

		static ::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__41_1()
		{
			return (::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Boolean>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57FB0);
		}

		static ::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__49_1()
		{
			return (::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Boolean>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57FB8);
		}

		static ::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>** StaticGet___9__45_11()
		{
			return (::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57FC0);
		}

		static ::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__41_2()
		{
			return (::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Boolean>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57FC8);
		}

		static ::System::Func_2<::JGBNDFAOIFC*, ::AGKODPKMDMA*>** StaticGet___9__53_3()
		{
			return (::System::Func_2<::JGBNDFAOIFC*, ::AGKODPKMDMA*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57FD0);
		}

		static ::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__42_3()
		{
			return (::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::String*>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57FD8);
		}

		static ::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__45_4()
		{
			return (::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Boolean>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57FE0);
		}

		static ::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::String*>** StaticGet___9__43_5()
		{
			return (::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::String*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57FE8);
		}

		static ::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__45_6()
		{
			return (::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Boolean>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57FF0);
		}

		static ::System::Func_4<::PPHMLMHGOIJ*, ::System::Boolean, ::System::Int32, ::System::Boolean>** StaticGet___9__48_4()
		{
			return (::System::Func_4<::PPHMLMHGOIJ*, ::System::Boolean, ::System::Int32, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57FF8);
		}

		static ::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__48_0()
		{
			return (::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Boolean>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x58000);
		}

		static ::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__42_2()
		{
			return (::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Boolean>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x58008);
		}

		static ::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Int32>*>** StaticGet___9__43_1()
		{
			return (::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Int32>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x58010);
		}

		static ::System::Func_4<::PPHMLMHGOIJ*, ::System::Boolean, ::System::Int32, ::System::Boolean>** StaticGet___9__48_5()
		{
			return (::System::Func_4<::PPHMLMHGOIJ*, ::System::Boolean, ::System::Int32, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x58018);
		}

		static ::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::UInt32>*>** StaticGet___9__54_0()
		{
			return (::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::UInt32>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x58020);
		}

		static ::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__53_2()
		{
			return (::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Boolean>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x58028);
		}

		static ::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>** StaticGet___9__45_8()
		{
			return (::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x58030);
		}

		static ::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__45_3()
		{
			return (::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Boolean>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x58038);
		}

		static ::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::RPG::Client::AvatarMaterialIndex>*>** StaticGet___9__52_0()
		{
			return (::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::RPG::Client::AvatarMaterialIndex>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x58040);
		}

		static ::System::Func_2<::JGBNDFAOIFC*, ::CBJILMHOMGP*>** StaticGet___9__41_3()
		{
			return (::System::Func_2<::JGBNDFAOIFC*, ::CBJILMHOMGP*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x58048);
		}

		static ::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__42_1()
		{
			return (::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::String*>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x58050);
		}

		static ::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__45_2()
		{
			return (::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Boolean>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x58058);
		}

		static ::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__50_0()
		{
			return (::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Boolean>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x58060);
		}

		static ::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>** StaticGet___9__45_7()
		{
			return (::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x58068);
		}

		static ::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__46_0()
		{
			return (::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Boolean>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x58070);
		}

		static ::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__49_0()
		{
			return (::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Boolean>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x58078);
		}

		static ::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>** StaticGet___9__45_12()
		{
			return (::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x58080);
		}

		static ::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>** StaticGet___9__45_10()
		{
			return (::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x58088);
		}

		static ::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>** StaticGet___9__45_9()
		{
			return (::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x58090);
		}

		static ::System::Func_2<::RPG::Client::AvatarSpecialMarkType, ::System::Boolean>** StaticGet___9__46_3()
		{
			return (::System::Func_2<::RPG::Client::AvatarSpecialMarkType, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x58098);
		}

		static ::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__48_1()
		{
			return (::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Boolean>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x580A0);
		}

		static ::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__45_5()
		{
			return (::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Boolean>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x580A8);
		}

		static ::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::RPG::Client::TextID>*>** StaticGet___9__49_2()
		{
			return (::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::RPG::Client::TextID>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x580B0);
		}

		static ::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__48_3()
		{
			return (::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Boolean>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x580B8);
		}

		static ::System::Func_2<::JGBNDFAOIFC*, ::CEEGMMCFCBG*>** StaticGet___9__41_0()
		{
			return (::System::Func_2<::JGBNDFAOIFC*, ::CEEGMMCFCBG*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x580C0);
		}

		static ::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::RPG::Client::TextID>*>** StaticGet___9__49_7()
		{
			return (::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::RPG::Client::TextID>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x580C8);
		}

		static ::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__43_2()
		{
			return (::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::String*>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x580D0);
		}

		static ::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__53_0()
		{
			return (::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Boolean>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x580D8);
		}

		static ::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::String*>** StaticGet___9__43_6()
		{
			return (::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::String*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x580E0);
		}

		static ::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__49_6()
		{
			return (::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Boolean>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x580E8);
		}

		static ::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__45_0()
		{
			return (::System::Func_2<::JGBNDFAOIFC*, ::R3::Observable_1<::System::Boolean>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x580F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C_CTOR_OFFSET))(this);
		}

		::CEEGMMCFCBG* __BindButton_b__41_0(::JGBNDFAOIFC* a1)
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID, ::JGBNDFAOIFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDBUTTON_B__41_0_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindButton_b__41_1(::JGBNDFAOIFC* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::JGBNDFAOIFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDBUTTON_B__41_1_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindButton_b__41_2(::JGBNDFAOIFC* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::JGBNDFAOIFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDBUTTON_B__41_2_OFFSET))(this, a1);
		}

		::CBJILMHOMGP* __BindButton_b__41_3(::JGBNDFAOIFC* a1)
		{
			return ((::CBJILMHOMGP*(*)(::PVOID, ::JGBNDFAOIFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDBUTTON_B__41_3_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __BindImages_b__42_0(::JGBNDFAOIFC* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::JGBNDFAOIFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDIMAGES_B__42_0_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __BindImages_b__42_1(::JGBNDFAOIFC* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::JGBNDFAOIFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDIMAGES_B__42_1_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindImages_b__42_2(::JGBNDFAOIFC* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::JGBNDFAOIFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDIMAGES_B__42_2_OFFSET))(this, a1);
		}

		::System::Boolean __BindImages_b__42_5(::PPHMLMHGOIJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PPHMLMHGOIJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDIMAGES_B__42_5_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __BindImages_b__42_3(::JGBNDFAOIFC* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::JGBNDFAOIFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDIMAGES_B__42_3_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindImages_b__42_4(::JGBNDFAOIFC* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::JGBNDFAOIFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDIMAGES_B__42_4_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindLevelPanel_b__43_0(::JGBNDFAOIFC* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::JGBNDFAOIFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDLEVELPANEL_B__43_0_OFFSET))(this, a1);
		}

		::System::Boolean __BindLevelPanel_b__43_4(::PPHMLMHGOIJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PPHMLMHGOIJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDLEVELPANEL_B__43_4_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Int32>* __BindLevelPanel_b__43_1(::JGBNDFAOIFC* a1)
		{
			return ((::R3::Observable_1<::System::Int32>*(*)(::PVOID, ::JGBNDFAOIFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDLEVELPANEL_B__43_1_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __BindLevelPanel_b__43_2(::JGBNDFAOIFC* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::JGBNDFAOIFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDLEVELPANEL_B__43_2_OFFSET))(this, a1);
		}

		::System::String* __BindLevelPanel_b__43_5(::RPG::Client::AvatarMarkFlags a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::AvatarMarkFlags))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDLEVELPANEL_B__43_5_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __BindLevelPanel_b__43_3(::JGBNDFAOIFC* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::JGBNDFAOIFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDLEVELPANEL_B__43_3_OFFSET))(this, a1);
		}

		::System::String* __BindLevelPanel_b__43_6(::RPG::Client::AvatarMarkFlags a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::AvatarMarkFlags))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDLEVELPANEL_B__43_6_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindNamePanel_b__44_0(::JGBNDFAOIFC* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::JGBNDFAOIFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDNAMEPANEL_B__44_0_OFFSET))(this, a1);
		}

		::System::Boolean __BindNamePanel_b__44_2(::PPHMLMHGOIJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PPHMLMHGOIJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDNAMEPANEL_B__44_2_OFFSET))(this, a1);
		}

		::R3::Observable_1<::RPG::Client::TextID>* __BindNamePanel_b__44_1(::JGBNDFAOIFC* a1)
		{
			return ((::R3::Observable_1<::RPG::Client::TextID>*(*)(::PVOID, ::JGBNDFAOIFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDNAMEPANEL_B__44_1_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindMarks_b__45_0(::JGBNDFAOIFC* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::JGBNDFAOIFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_0_OFFSET))(this, a1);
		}

		::System::Boolean __BindMarks_b__45_7(::RPG::Client::AvatarMarkFlags a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarMarkFlags))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_7_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindMarks_b__45_1(::JGBNDFAOIFC* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::JGBNDFAOIFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_1_OFFSET))(this, a1);
		}

		::System::Boolean __BindMarks_b__45_8(::RPG::Client::AvatarMarkFlags a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarMarkFlags))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_8_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindMarks_b__45_2(::JGBNDFAOIFC* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::JGBNDFAOIFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_2_OFFSET))(this, a1);
		}

		::System::Boolean __BindMarks_b__45_9(::RPG::Client::AvatarMarkFlags a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarMarkFlags))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_9_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindMarks_b__45_3(::JGBNDFAOIFC* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::JGBNDFAOIFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_3_OFFSET))(this, a1);
		}

		::System::Boolean __BindMarks_b__45_10(::RPG::Client::AvatarMarkFlags a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarMarkFlags))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_10_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindMarks_b__45_4(::JGBNDFAOIFC* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::JGBNDFAOIFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_4_OFFSET))(this, a1);
		}

		::System::Boolean __BindMarks_b__45_11(::RPG::Client::AvatarMarkFlags a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarMarkFlags))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_11_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindMarks_b__45_5(::JGBNDFAOIFC* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::JGBNDFAOIFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_5_OFFSET))(this, a1);
		}

		::System::Boolean __BindMarks_b__45_12(::RPG::Client::AvatarMarkFlags a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarMarkFlags))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_12_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindMarks_b__45_6(::JGBNDFAOIFC* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::JGBNDFAOIFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_6_OFFSET))(this, a1);
		}

		::System::Boolean __BindMarks_b__45_13(::RPG::Client::AvatarMarkFlags a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarMarkFlags))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_13_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindSpecialMark_b__46_0(::JGBNDFAOIFC* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::JGBNDFAOIFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDSPECIALMARK_B__46_0_OFFSET))(this, a1);
		}

		::System::Boolean __BindSpecialMark_b__46_3(::RPG::Client::AvatarSpecialMarkType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarSpecialMarkType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDSPECIALMARK_B__46_3_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __BindSpecialMark_b__46_1(::JGBNDFAOIFC* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::JGBNDFAOIFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDSPECIALMARK_B__46_1_OFFSET))(this, a1);
		}

		::R3::Observable_1<::RPG::Client::TextID>* __BindSpecialMark_b__46_2(::JGBNDFAOIFC* a1)
		{
			return ((::R3::Observable_1<::RPG::Client::TextID>*(*)(::PVOID, ::JGBNDFAOIFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDSPECIALMARK_B__46_2_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindOrderAndCheckMark_b__48_0(::JGBNDFAOIFC* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::JGBNDFAOIFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDORDERANDCHECKMARK_B__48_0_OFFSET))(this, a1);
		}

		::System::Boolean __BindOrderAndCheckMark_b__48_4(::PPHMLMHGOIJ* a1, ::System::Boolean a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::PPHMLMHGOIJ*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDORDERANDCHECKMARK_B__48_4_OFFSET))(this, a1, a2, a3);
		}

		::R3::Observable_1<::System::Boolean>* __BindOrderAndCheckMark_b__48_1(::JGBNDFAOIFC* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::JGBNDFAOIFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDORDERANDCHECKMARK_B__48_1_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Int32>* __BindOrderAndCheckMark_b__48_2(::JGBNDFAOIFC* a1)
		{
			return ((::R3::Observable_1<::System::Int32>*(*)(::PVOID, ::JGBNDFAOIFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDORDERANDCHECKMARK_B__48_2_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindOrderAndCheckMark_b__48_3(::JGBNDFAOIFC* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::JGBNDFAOIFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDORDERANDCHECKMARK_B__48_3_OFFSET))(this, a1);
		}

		::System::Boolean __BindOrderAndCheckMark_b__48_5(::PPHMLMHGOIJ* a1, ::System::Boolean a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::PPHMLMHGOIJ*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDORDERANDCHECKMARK_B__48_5_OFFSET))(this, a1, a2, a3);
		}

		::R3::Observable_1<::System::Boolean>* __BindHintAreas_b__49_0(::JGBNDFAOIFC* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::JGBNDFAOIFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_0_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindHintAreas_b__49_1(::JGBNDFAOIFC* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::JGBNDFAOIFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_1_OFFSET))(this, a1);
		}

		::R3::Observable_1<::RPG::Client::TextID>* __BindHintAreas_b__49_2(::JGBNDFAOIFC* a1)
		{
			return ((::R3::Observable_1<::RPG::Client::TextID>*(*)(::PVOID, ::JGBNDFAOIFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_2_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __BindHintAreas_b__49_3(::JGBNDFAOIFC* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::JGBNDFAOIFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_3_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindHintAreas_b__49_4(::JGBNDFAOIFC* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::JGBNDFAOIFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_4_OFFSET))(this, a1);
		}

		::R3::Observable_1<::RPG::Client::TextID>* __BindHintAreas_b__49_5(::JGBNDFAOIFC* a1)
		{
			return ((::R3::Observable_1<::RPG::Client::TextID>*(*)(::PVOID, ::JGBNDFAOIFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_5_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindHintAreas_b__49_6(::JGBNDFAOIFC* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::JGBNDFAOIFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_6_OFFSET))(this, a1);
		}

		::R3::Observable_1<::RPG::Client::TextID>* __BindHintAreas_b__49_7(::JGBNDFAOIFC* a1)
		{
			return ((::R3::Observable_1<::RPG::Client::TextID>*(*)(::PVOID, ::JGBNDFAOIFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_7_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindRogueHex_b__50_0(::JGBNDFAOIFC* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::JGBNDFAOIFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDROGUEHEX_B__50_0_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Int32>* __BindRogueHex_b__50_1(::JGBNDFAOIFC* a1)
		{
			return ((::R3::Observable_1<::System::Int32>*(*)(::PVOID, ::JGBNDFAOIFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDROGUEHEX_B__50_1_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::ValueTuple_2<::System::String*, ::System::UInt32>>* __BindRedDot_b__51_0(::JGBNDFAOIFC* a1)
		{
			return ((::R3::Observable_1<::System::ValueTuple_2<::System::String*, ::System::UInt32>>*(*)(::PVOID, ::JGBNDFAOIFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDREDDOT_B__51_0_OFFSET))(this, a1);
		}

		::R3::Observable_1<::RPG::Client::AvatarMaterialIndex>* __BindMaterial_b__52_0(::JGBNDFAOIFC* a1)
		{
			return ((::R3::Observable_1<::RPG::Client::AvatarMaterialIndex>*(*)(::PVOID, ::JGBNDFAOIFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDMATERIAL_B__52_0_OFFSET))(this, a1);
		}

		::System::Void __BindMaterial_b__52_1(::RPG::Client::MonoMaterialSwitch* a1, ::RPG::Client::AvatarMaterialIndex a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoMaterialSwitch*, ::RPG::Client::AvatarMaterialIndex))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDMATERIAL_B__52_1_OFFSET))(this, a1, a2);
		}

		::R3::Observable_1<::System::Boolean>* __BindChildControls_b__53_0(::JGBNDFAOIFC* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::JGBNDFAOIFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDCHILDCONTROLS_B__53_0_OFFSET))(this, a1);
		}

		::GOKNJPBGBLE* __BindChildControls_b__53_1(::JGBNDFAOIFC* a1)
		{
			return ((::GOKNJPBGBLE*(*)(::PVOID, ::JGBNDFAOIFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDCHILDCONTROLS_B__53_1_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindChildControls_b__53_2(::JGBNDFAOIFC* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::JGBNDFAOIFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDCHILDCONTROLS_B__53_2_OFFSET))(this, a1);
		}

		::AGKODPKMDMA* __BindChildControls_b__53_3(::JGBNDFAOIFC* a1)
		{
			return ((::AGKODPKMDMA*(*)(::PVOID, ::JGBNDFAOIFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDCHILDCONTROLS_B__53_3_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::UInt32>* __BindTutorial_b__54_0(::JGBNDFAOIFC* a1)
		{
			return ((::R3::Observable_1<::System::UInt32>*(*)(::PVOID, ::JGBNDFAOIFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDTUTORIAL_B__54_0_OFFSET))(this, a1);
		}

	};
}
