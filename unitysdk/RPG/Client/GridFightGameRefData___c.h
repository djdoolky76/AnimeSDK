#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KKJMAOMDCAE_OPIGALIJPOP;
namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightGameRefData; }
namespace RPG::Client { class GridFightGameRefTrait; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightSeasonRole; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDB379D0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDB37A10)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_ACTIVATEDTRAITS_B__12_0_OFFSET UNITYSDK_OFFSET(0xDB37A20)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_BASICEQUIPS_B__129_0_OFFSET UNITYSDK_OFFSET(0xDB37A70)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_BASICEQUIPS_B__129_1_OFFSET UNITYSDK_OFFSET(0xDB37A80)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_COREEQUIPS_B__131_0_OFFSET UNITYSDK_OFFSET(0xDB37A90)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_COREEQUIPS_B__131_1_OFFSET UNITYSDK_OFFSET(0xDB37AA0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_EMBLEMEQUIPS_B__133_0_OFFSET UNITYSDK_OFFSET(0xDB37AB0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_HASEMBLEM_B__163_0_OFFSET UNITYSDK_OFFSET(0xDB37AD0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___BUILDROLES_B__189_1_OFFSET UNITYSDK_OFFSET(0xDB37E10)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___BUILDSEASONROLES_B__190_1_OFFSET UNITYSDK_OFFSET(0xDB37ED0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___BUILDSEASONROLES_B__191_0_OFFSET UNITYSDK_OFFSET(0xDB381C0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__201_0_OFFSET UNITYSDK_OFFSET(0xDB38280)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__201_10_OFFSET UNITYSDK_OFFSET(0xDB38650)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__201_11_OFFSET UNITYSDK_OFFSET(0xDB38690)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__201_12_OFFSET UNITYSDK_OFFSET(0xDB386D0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__201_13_OFFSET UNITYSDK_OFFSET(0xDB38710)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__201_14_OFFSET UNITYSDK_OFFSET(0xDB387A0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__201_15_OFFSET UNITYSDK_OFFSET(0xDB38810)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__201_16_OFFSET UNITYSDK_OFFSET(0xDB38850)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__201_17_OFFSET UNITYSDK_OFFSET(0xDB38890)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__201_18_OFFSET UNITYSDK_OFFSET(0xDB388D0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__201_19_OFFSET UNITYSDK_OFFSET(0xDB38910)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__201_1_OFFSET UNITYSDK_OFFSET(0xDB382F0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__201_2_OFFSET UNITYSDK_OFFSET(0xDB38360)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__201_3_OFFSET UNITYSDK_OFFSET(0xDB383D0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__201_4_OFFSET UNITYSDK_OFFSET(0xDB38470)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__201_5_OFFSET UNITYSDK_OFFSET(0xDB384E0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__201_6_OFFSET UNITYSDK_OFFSET(0xDB38520)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__201_7_OFFSET UNITYSDK_OFFSET(0xDB38560)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__201_8_OFFSET UNITYSDK_OFFSET(0xDB385D0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__201_9_OFFSET UNITYSDK_OFFSET(0xDB38610)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CHECKISEXPERT_B__173_0_OFFSET UNITYSDK_OFFSET(0xDB37AF0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CHECKISEXPERT_B__173_1_OFFSET UNITYSDK_OFFSET(0xDB37C20)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__192_0_OFFSET UNITYSDK_OFFSET(0xDB38200)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__192_1_OFFSET UNITYSDK_OFFSET(0xDB38210)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__192_2_OFFSET UNITYSDK_OFFSET(0xDB38220)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__192_3_OFFSET UNITYSDK_OFFSET(0xDB38230)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__192_4_OFFSET UNITYSDK_OFFSET(0xDB38240)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__192_5_OFFSET UNITYSDK_OFFSET(0xDB38250)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__192_6_OFFSET UNITYSDK_OFFSET(0xDB38260)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__192_7_OFFSET UNITYSDK_OFFSET(0xDB38270)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___ISTRAITEXPIRED_B__177_0_OFFSET UNITYSDK_OFFSET(0xDB37D50)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___UPDATEEXPIREDTRAITLAYER_B__178_0_OFFSET UNITYSDK_OFFSET(0xDB37D70)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___UPDATETRAITLAYER_B__179_0_OFFSET UNITYSDK_OFFSET(0xDB37DC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefData___c_TypeDefinitionIndex = 66269;

	class GridFightGameRefData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__192_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x718D0);
		}

		static ::System::Func_2<::RPG::Client::GridFightGameRefTrait*, ::System::Boolean>** StaticGet___9__12_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGameRefTrait*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x718D8);
		}

		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__131_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x718E0);
		}

		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__192_2()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x718E8);
		}

		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>** StaticGet___9__178_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x718F0);
		}

		static ::System::Comparison_1<::RPG::Client::GridFightRole*>** StaticGet___9__189_1()
		{
			return (::System::Comparison_1<::RPG::Client::GridFightRole*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x718F8);
		}

		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__131_1()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71900);
		}

		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__173_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71908);
		}

		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__129_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71910);
		}

		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__192_5()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71918);
		}

		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__192_7()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71920);
		}

		static ::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>** StaticGet___9__163_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71928);
		}

		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__173_1()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71930);
		}

		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__129_1()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71938);
		}

		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__192_6()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71940);
		}

		static ::System::Func_2<::RPG::Client::GridFightGameRefTrait*, ::System::UInt32>** StaticGet___9__177_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGameRefTrait*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71948);
		}

		static ::System::Comparison_1<::RPG::Client::GridFightSeasonRole*>** StaticGet___9__190_1()
		{
			return (::System::Comparison_1<::RPG::Client::GridFightSeasonRole*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71950);
		}

		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>** StaticGet___9__179_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71958);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71960);
		}

		static ::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>** StaticGet___9__133_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71968);
		}

		static ::System::Comparison_1<::RPG::Client::GridFightSeasonRole*>** StaticGet___9__191_0()
		{
			return (::System::Comparison_1<::RPG::Client::GridFightSeasonRole*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71970);
		}

		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__192_3()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71978);
		}

		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__192_1()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71980);
		}

		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__192_4()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71988);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_ActivatedTraits_b__12_0(::RPG::Client::GridFightGameRefTrait* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameRefTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_ACTIVATEDTRAITS_B__12_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_BasicEquips_b__129_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_BASICEQUIPS_B__129_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* _get_BasicEquips_b__129_1(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_BASICEQUIPS_B__129_1_OFFSET))(this, a1);
		}

		::System::Boolean _get_CoreEquips_b__131_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_COREEQUIPS_B__131_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* _get_CoreEquips_b__131_1(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_COREEQUIPS_B__131_1_OFFSET))(this, a1);
		}

		::System::Boolean _get_EmblemEquips_b__133_0(::RPG::Client::GridFightEquipItemConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_EMBLEMEQUIPS_B__133_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_HasEmblem_b__163_0(::RPG::Client::GridFightEquipItemConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_HASEMBLEM_B__163_0_OFFSET))(this, a1);
		}

		::System::Boolean __CheckIsExpert_b__173_0(::KKJMAOMDCAE_OPIGALIJPOP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KKJMAOMDCAE_OPIGALIJPOP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CHECKISEXPERT_B__173_0_OFFSET))(this, a1);
		}

		::System::Boolean __CheckIsExpert_b__173_1(::KKJMAOMDCAE_OPIGALIJPOP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KKJMAOMDCAE_OPIGALIJPOP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CHECKISEXPERT_B__173_1_OFFSET))(this, a1);
		}

		::System::UInt32 __IsTraitExpired_b__177_0(::RPG::Client::GridFightGameRefTrait* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightGameRefTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___ISTRAITEXPIRED_B__177_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemConfig* __UpdateExpiredTraitLayer_b__178_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___UPDATEEXPIREDTRAITLAYER_B__178_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemConfig* __UpdateTraitLayer_b__179_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___UPDATETRAITLAYER_B__179_0_OFFSET))(this, a1);
		}

		::System::Int32 __BuildRoles_b__189_1(::RPG::Client::GridFightRole* a1, ::RPG::Client::GridFightRole* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightRole*, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___BUILDROLES_B__189_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 __BuildSeasonRoles_b__190_1(::RPG::Client::GridFightSeasonRole* a1, ::RPG::Client::GridFightSeasonRole* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___BUILDSEASONROLES_B__190_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 __BuildSeasonRoles_b__191_0(::RPG::Client::GridFightSeasonRole* a1, ::RPG::Client::GridFightSeasonRole* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___BUILDSEASONROLES_B__191_0_OFFSET))(this, a1, a2);
		}

		::System::Boolean __GetRecommends_b__192_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__192_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* __GetRecommends_b__192_1(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__192_1_OFFSET))(this, a1);
		}

		::System::Boolean __GetRecommends_b__192_2(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__192_2_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* __GetRecommends_b__192_3(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__192_3_OFFSET))(this, a1);
		}

		::System::Boolean __GetRecommends_b__192_4(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__192_4_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* __GetRecommends_b__192_5(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__192_5_OFFSET))(this, a1);
		}

		::System::Boolean __GetRecommends_b__192_6(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__192_6_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* __GetRecommends_b__192_7(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__192_7_OFFSET))(this, a1);
		}

		::System::Void __cctor_b__201_0(::RPG::Client::GridFightGameRefData* a1, ::Newtonsoft::Json::JsonSerializer* a2, ::Newtonsoft::Json::JsonReader* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__201_0_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __cctor_b__201_1(::RPG::Client::GridFightGameRefData* a1, ::Newtonsoft::Json::JsonSerializer* a2, ::Newtonsoft::Json::JsonReader* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__201_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __cctor_b__201_2(::RPG::Client::GridFightGameRefData* a1, ::Newtonsoft::Json::JsonSerializer* a2, ::Newtonsoft::Json::JsonReader* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__201_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __cctor_b__201_3(::RPG::Client::GridFightGameRefData* a1, ::Newtonsoft::Json::JsonSerializer* a2, ::Newtonsoft::Json::JsonReader* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__201_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __cctor_b__201_4(::RPG::Client::GridFightGameRefData* a1, ::Newtonsoft::Json::JsonSerializer* a2, ::Newtonsoft::Json::JsonReader* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__201_4_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __cctor_b__201_5(::RPG::Client::GridFightGameRefData* a1, ::Newtonsoft::Json::JsonSerializer* a2, ::Newtonsoft::Json::JsonReader* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__201_5_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __cctor_b__201_6(::RPG::Client::GridFightGameRefData* a1, ::Newtonsoft::Json::JsonSerializer* a2, ::Newtonsoft::Json::JsonReader* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__201_6_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __cctor_b__201_7(::RPG::Client::GridFightGameRefData* a1, ::Newtonsoft::Json::JsonSerializer* a2, ::Newtonsoft::Json::JsonReader* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__201_7_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __cctor_b__201_8(::RPG::Client::GridFightGameRefData* a1, ::Newtonsoft::Json::JsonSerializer* a2, ::Newtonsoft::Json::JsonReader* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__201_8_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __cctor_b__201_9(::RPG::Client::GridFightGameRefData* a1, ::Newtonsoft::Json::JsonSerializer* a2, ::Newtonsoft::Json::JsonReader* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__201_9_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __cctor_b__201_10(::RPG::Client::GridFightGameRefData* a1, ::Newtonsoft::Json::JsonSerializer* a2, ::Newtonsoft::Json::JsonReader* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__201_10_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __cctor_b__201_11(::RPG::Client::GridFightGameRefData* a1, ::Newtonsoft::Json::JsonSerializer* a2, ::Newtonsoft::Json::JsonReader* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__201_11_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __cctor_b__201_12(::RPG::Client::GridFightGameRefData* a1, ::Newtonsoft::Json::JsonSerializer* a2, ::Newtonsoft::Json::JsonReader* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__201_12_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __cctor_b__201_13(::RPG::Client::GridFightGameRefData* a1, ::Newtonsoft::Json::JsonSerializer* a2, ::Newtonsoft::Json::JsonReader* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__201_13_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __cctor_b__201_14(::RPG::Client::GridFightGameRefData* a1, ::Newtonsoft::Json::JsonSerializer* a2, ::Newtonsoft::Json::JsonReader* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__201_14_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __cctor_b__201_15(::RPG::Client::GridFightGameRefData* a1, ::Newtonsoft::Json::JsonSerializer* a2, ::Newtonsoft::Json::JsonReader* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__201_15_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __cctor_b__201_16(::RPG::Client::GridFightGameRefData* a1, ::Newtonsoft::Json::JsonSerializer* a2, ::Newtonsoft::Json::JsonReader* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__201_16_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __cctor_b__201_17(::RPG::Client::GridFightGameRefData* a1, ::Newtonsoft::Json::JsonSerializer* a2, ::Newtonsoft::Json::JsonReader* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__201_17_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __cctor_b__201_18(::RPG::Client::GridFightGameRefData* a1, ::Newtonsoft::Json::JsonSerializer* a2, ::Newtonsoft::Json::JsonReader* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__201_18_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __cctor_b__201_19(::RPG::Client::GridFightGameRefData* a1, ::Newtonsoft::Json::JsonSerializer* a2, ::Newtonsoft::Json::JsonReader* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__201_19_OFFSET))(this, a1, a2, a3);
		}

	};
}
