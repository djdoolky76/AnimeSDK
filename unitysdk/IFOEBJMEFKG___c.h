#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftChipTraitType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class CHGHIALKMFM;
class IFOEBJMEFKG_BCEIMHGKKCC;
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define IFOEBJMEFKG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x16E9E550)
#define IFOEBJMEFKG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x16E9E590)
#define IFOEBJMEFKG___C__GET_CANCLICK_B__32_0_OFFSET UNITYSDK_OFFSET(0x16E9E620)
#define IFOEBJMEFKG___C__GET_ISTALKVISIBLE_B__27_0_OFFSET UNITYSDK_OFFSET(0x16E9E610)
#define IFOEBJMEFKG___C__GET_RECOMMENDEDMOLD_B__17_0_OFFSET UNITYSDK_OFFSET(0x16E9E5A0)
#define IFOEBJMEFKG___C___TRYRECOMMENDMOLDFORATTRNOTMETONLY_B__52_1_OFFSET UNITYSDK_OFFSET(0x16E9E6C0)
#define IFOEBJMEFKG___C___TRYRECOMMENDMOLDFORATTRNOTMETONLY_B__52_2_OFFSET UNITYSDK_OFFSET(0x16E9E6D0)
#define IFOEBJMEFKG___C___TRYRECOMMENDMOLDFORATTRNOTMETONLY_B__52_3_OFFSET UNITYSDK_OFFSET(0x16E9E6E0)
#define IFOEBJMEFKG___C___TRYRECOMMENDMOLDFORATTRNOTMETONLY_B__52_4_OFFSET UNITYSDK_OFFSET(0x16E9E6F0)
#define IFOEBJMEFKG___C___TRYRECOMMENDMOLDFORATTRNOTMETONLY_B__52_5_OFFSET UNITYSDK_OFFSET(0x16E9E700)
#define IFOEBJMEFKG___C___TRYRECOMMENDMOLDFORATTRNOTMETONLY_B__52_7_OFFSET UNITYSDK_OFFSET(0x16E9E720)
#define IFOEBJMEFKG___C___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__54_10_OFFSET UNITYSDK_OFFSET(0x16E9E920)
#define IFOEBJMEFKG___C___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__54_13_OFFSET UNITYSDK_OFFSET(0x16E9E940)
#define IFOEBJMEFKG___C___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__54_1_OFFSET UNITYSDK_OFFSET(0x16E9E8A0)
#define IFOEBJMEFKG___C___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__54_2_OFFSET UNITYSDK_OFFSET(0x16E9E8B0)
#define IFOEBJMEFKG___C___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__54_3_OFFSET UNITYSDK_OFFSET(0x16E9E8C0)
#define IFOEBJMEFKG___C___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__54_4_OFFSET UNITYSDK_OFFSET(0x16E9E8D0)
#define IFOEBJMEFKG___C___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__54_6_OFFSET UNITYSDK_OFFSET(0x16E9E8E0)
#define IFOEBJMEFKG___C___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__54_7_OFFSET UNITYSDK_OFFSET(0x16E9E8F0)
#define IFOEBJMEFKG___C___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__54_8_OFFSET UNITYSDK_OFFSET(0x16E9E900)
#define IFOEBJMEFKG___C___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__54_9_OFFSET UNITYSDK_OFFSET(0x16E9E910)
#define IFOEBJMEFKG___C___TRYRECOMMENDMOLDFOREXAM_B__51_1_OFFSET UNITYSDK_OFFSET(0x16E9E690)
#define IFOEBJMEFKG___C___TRYRECOMMENDMOLDFOREXAM_B__51_3_OFFSET UNITYSDK_OFFSET(0x16E9E6B0)
#define IFOEBJMEFKG___C___TRYRECOMMENDMOLDFORTRAITNOTMETONLY_B__53_0_OFFSET UNITYSDK_OFFSET(0x16E9E790)
#define IFOEBJMEFKG___C___TRYRECOMMENDMOLDFORTRAITNOTMETONLY_B__53_10_OFFSET UNITYSDK_OFFSET(0x16E9E830)
#define IFOEBJMEFKG___C___TRYRECOMMENDMOLDFORTRAITNOTMETONLY_B__53_2_OFFSET UNITYSDK_OFFSET(0x16E9E7A0)
#define IFOEBJMEFKG___C___TRYRECOMMENDMOLDFORTRAITNOTMETONLY_B__53_3_OFFSET UNITYSDK_OFFSET(0x16E9E7B0)
#define IFOEBJMEFKG___C___TRYRECOMMENDMOLDFORTRAITNOTMETONLY_B__53_4_OFFSET UNITYSDK_OFFSET(0x16E9E7C0)
#define IFOEBJMEFKG___C___TRYRECOMMENDMOLDFORTRAITNOTMETONLY_B__53_5_OFFSET UNITYSDK_OFFSET(0x16E9E7D0)
#define IFOEBJMEFKG___C___TRYRECOMMENDMOLDFORTRAITNOTMETONLY_B__53_6_OFFSET UNITYSDK_OFFSET(0x16E9E7E0)
#define IFOEBJMEFKG___C___TRYRECOMMENDMOLDFORTRAITNOTMETONLY_B__53_9_OFFSET UNITYSDK_OFFSET(0x16E9E800)

inline static constexpr unsigned int IFOEBJMEFKG___c_TypeDefinitionIndex = 82223;

	class IFOEBJMEFKG___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftAttributeType>, ::RPG::Client::MechCraft::MechCraftAttributeType>** StaticGet___9__54_3()
		{
			return (::System::Func_2<::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftAttributeType>, ::RPG::Client::MechCraft::MechCraftAttributeType>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x456B0);
		}

		static ::System::Func_2<::CHGHIALKMFM*, ::System::Boolean>** StaticGet___9__53_6()
		{
			return (::System::Func_2<::CHGHIALKMFM*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x456B8);
		}

		static ::System::Func_2<::CHGHIALKMFM*, ::System::Int32>** StaticGet___9__52_7()
		{
			return (::System::Func_2<::CHGHIALKMFM*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x456C0);
		}

		static ::System::Func_2<::System::Object*, ::CHGHIALKMFM*>** StaticGet___9__17_0()
		{
			return (::System::Func_2<::System::Object*, ::CHGHIALKMFM*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x456C8);
		}

		static ::System::Func_2<::CHGHIALKMFM*, ::System::Boolean>** StaticGet___9__54_10()
		{
			return (::System::Func_2<::CHGHIALKMFM*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x456D0);
		}

		static ::System::Func_2<::CHGHIALKMFM*, ::System::Boolean>** StaticGet___9__51_3()
		{
			return (::System::Func_2<::CHGHIALKMFM*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x456D8);
		}

		static ::System::Func_2<::CHGHIALKMFM*, ::System::Boolean>** StaticGet___9__53_9()
		{
			return (::System::Func_2<::CHGHIALKMFM*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x456E0);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>>** StaticGet___9__52_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x456E8);
		}

		static ::System::Func_2<::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftChipTraitType>, ::System::Int32>** StaticGet___9__53_5()
		{
			return (::System::Func_2<::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftChipTraitType>, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x456F0);
		}

		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__27_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x456F8);
		}

		static ::System::Func_2<::RPG::Client::MechCraft::MechCraftChipTraitType, ::RPG::Client::MechCraft::MechCraftChipTraitType>** StaticGet___9__54_6()
		{
			return (::System::Func_2<::RPG::Client::MechCraft::MechCraftChipTraitType, ::RPG::Client::MechCraft::MechCraftChipTraitType>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45700);
		}

		static ::System::Func_2<::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftAttributeType>, ::RPG::Client::MechCraft::MechCraftAttributeType>** StaticGet___9__52_3()
		{
			return (::System::Func_2<::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftAttributeType>, ::RPG::Client::MechCraft::MechCraftAttributeType>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45708);
		}

		static ::System::Func_2<::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftAttributeType>, ::System::Int32>** StaticGet___9__54_4()
		{
			return (::System::Func_2<::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftAttributeType>, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45710);
		}

		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__51_1()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45718);
		}

		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__32_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45720);
		}

		static ::System::Func_3<::RPG::Client::MechCraft::MechCraftChipTraitType, ::System::Int32, ::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftChipTraitType>>** StaticGet___9__53_3()
		{
			return (::System::Func_3<::RPG::Client::MechCraft::MechCraftChipTraitType, ::System::Int32, ::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftChipTraitType>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45728);
		}

		static ::System::Func_2<::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftChipTraitType>, ::System::Int32>** StaticGet___9__54_9()
		{
			return (::System::Func_2<::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftChipTraitType>, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45730);
		}

		static ::System::Func_2<::CHGHIALKMFM*, ::System::Int32>** StaticGet___9__53_10()
		{
			return (::System::Func_2<::CHGHIALKMFM*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45738);
		}

		static ::System::Func_2<::CHGHIALKMFM*, ::System::Boolean>** StaticGet___9__52_5()
		{
			return (::System::Func_2<::CHGHIALKMFM*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45740);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>>** StaticGet___9__54_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45748);
		}

		static ::System::Func_2<::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftChipTraitType>, ::RPG::Client::MechCraft::MechCraftChipTraitType>** StaticGet___9__54_8()
		{
			return (::System::Func_2<::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftChipTraitType>, ::RPG::Client::MechCraft::MechCraftChipTraitType>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45750);
		}

		static ::System::Func_2<::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftAttributeType>, ::System::Int32>** StaticGet___9__52_4()
		{
			return (::System::Func_2<::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftAttributeType>, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45758);
		}

		static ::System::Func_3<::RPG::Client::MechCraft::MechCraftChipTraitType, ::System::Int32, ::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftChipTraitType>>** StaticGet___9__54_7()
		{
			return (::System::Func_3<::RPG::Client::MechCraft::MechCraftChipTraitType, ::System::Int32, ::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftChipTraitType>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45760);
		}

		static ::System::Func_2<::CHGHIALKMFM*, ::System::Int32>** StaticGet___9__54_13()
		{
			return (::System::Func_2<::CHGHIALKMFM*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45768);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>, ::RPG::Client::MechCraft::MechCraftAttributeType>** StaticGet___9__53_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>, ::RPG::Client::MechCraft::MechCraftAttributeType>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45770);
		}

		static ::System::Func_3<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>, ::System::Int32, ::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftAttributeType>>** StaticGet___9__52_2()
		{
			return (::System::Func_3<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>, ::System::Int32, ::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftAttributeType>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45778);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45780);
		}

		static ::System::Func_2<::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftChipTraitType>, ::RPG::Client::MechCraft::MechCraftChipTraitType>** StaticGet___9__53_4()
		{
			return (::System::Func_2<::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftChipTraitType>, ::RPG::Client::MechCraft::MechCraftChipTraitType>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45788);
		}

		static ::System::Func_2<::RPG::Client::MechCraft::MechCraftChipTraitType, ::RPG::Client::MechCraft::MechCraftChipTraitType>** StaticGet___9__53_2()
		{
			return (::System::Func_2<::RPG::Client::MechCraft::MechCraftChipTraitType, ::RPG::Client::MechCraft::MechCraftChipTraitType>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45790);
		}

		static ::System::Func_3<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>, ::System::Int32, ::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftAttributeType>>** StaticGet___9__54_2()
		{
			return (::System::Func_3<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>, ::System::Int32, ::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftAttributeType>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45798);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C_CTOR_OFFSET))(this);
		}

		::CHGHIALKMFM* _get_RecommendedMold_b__17_0(::IFOEBJMEFKG_BCEIMHGKKCC* a1)
		{
			return ((::CHGHIALKMFM*(*)(::PVOID, ::IFOEBJMEFKG_BCEIMHGKKCC*))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C__GET_RECOMMENDEDMOLD_B__17_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_IsTalkVisible_b__27_0(::IFOEBJMEFKG_BCEIMHGKKCC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IFOEBJMEFKG_BCEIMHGKKCC*))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C__GET_ISTALKVISIBLE_B__27_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_CanClick_b__32_0(::IFOEBJMEFKG_BCEIMHGKKCC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IFOEBJMEFKG_BCEIMHGKKCC*))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C__GET_CANCLICK_B__32_0_OFFSET))(this, a1);
		}

		::System::Boolean __TryRecommendMoldForExam_b__51_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C___TRYRECOMMENDMOLDFOREXAM_B__51_1_OFFSET))(this, a1);
		}

		::System::Boolean __TryRecommendMoldForExam_b__51_3(::CHGHIALKMFM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CHGHIALKMFM*))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C___TRYRECOMMENDMOLDFOREXAM_B__51_3_OFFSET))(this, a1);
		}

		::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32> __TryRecommendMoldForAttrNotMetOnly_b__52_1(::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32> a1)
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C___TRYRECOMMENDMOLDFORATTRNOTMETONLY_B__52_1_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftAttributeType> __TryRecommendMoldForAttrNotMetOnly_b__52_2(::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32> a1, ::System::Int32 a2)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftAttributeType>(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>, ::System::Int32))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C___TRYRECOMMENDMOLDFORATTRNOTMETONLY_B__52_2_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MechCraft::MechCraftAttributeType __TryRecommendMoldForAttrNotMetOnly_b__52_3(::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftAttributeType> a1)
		{
			return ((::RPG::Client::MechCraft::MechCraftAttributeType(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftAttributeType>))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C___TRYRECOMMENDMOLDFORATTRNOTMETONLY_B__52_3_OFFSET))(this, a1);
		}

		::System::Int32 __TryRecommendMoldForAttrNotMetOnly_b__52_4(::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftAttributeType> a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftAttributeType>))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C___TRYRECOMMENDMOLDFORATTRNOTMETONLY_B__52_4_OFFSET))(this, a1);
		}

		::System::Boolean __TryRecommendMoldForAttrNotMetOnly_b__52_5(::CHGHIALKMFM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CHGHIALKMFM*))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C___TRYRECOMMENDMOLDFORATTRNOTMETONLY_B__52_5_OFFSET))(this, a1);
		}

		::System::Int32 __TryRecommendMoldForAttrNotMetOnly_b__52_7(::CHGHIALKMFM* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::CHGHIALKMFM*))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C___TRYRECOMMENDMOLDFORATTRNOTMETONLY_B__52_7_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::MechCraftAttributeType __TryRecommendMoldForTraitNotMetOnly_b__53_0(::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32> a1)
		{
			return ((::RPG::Client::MechCraft::MechCraftAttributeType(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C___TRYRECOMMENDMOLDFORTRAITNOTMETONLY_B__53_0_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::MechCraftChipTraitType __TryRecommendMoldForTraitNotMetOnly_b__53_2(::RPG::Client::MechCraft::MechCraftChipTraitType a1)
		{
			return ((::RPG::Client::MechCraft::MechCraftChipTraitType(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftChipTraitType))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C___TRYRECOMMENDMOLDFORTRAITNOTMETONLY_B__53_2_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftChipTraitType> __TryRecommendMoldForTraitNotMetOnly_b__53_3(::RPG::Client::MechCraft::MechCraftChipTraitType a1, ::System::Int32 a2)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftChipTraitType>(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftChipTraitType, ::System::Int32))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C___TRYRECOMMENDMOLDFORTRAITNOTMETONLY_B__53_3_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MechCraft::MechCraftChipTraitType __TryRecommendMoldForTraitNotMetOnly_b__53_4(::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftChipTraitType> a1)
		{
			return ((::RPG::Client::MechCraft::MechCraftChipTraitType(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftChipTraitType>))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C___TRYRECOMMENDMOLDFORTRAITNOTMETONLY_B__53_4_OFFSET))(this, a1);
		}

		::System::Int32 __TryRecommendMoldForTraitNotMetOnly_b__53_5(::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftChipTraitType> a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftChipTraitType>))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C___TRYRECOMMENDMOLDFORTRAITNOTMETONLY_B__53_5_OFFSET))(this, a1);
		}

		::System::Boolean __TryRecommendMoldForTraitNotMetOnly_b__53_6(::CHGHIALKMFM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CHGHIALKMFM*))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C___TRYRECOMMENDMOLDFORTRAITNOTMETONLY_B__53_6_OFFSET))(this, a1);
		}

		::System::Boolean __TryRecommendMoldForTraitNotMetOnly_b__53_9(::CHGHIALKMFM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CHGHIALKMFM*))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C___TRYRECOMMENDMOLDFORTRAITNOTMETONLY_B__53_9_OFFSET))(this, a1);
		}

		::System::Int32 __TryRecommendMoldForTraitNotMetOnly_b__53_10(::CHGHIALKMFM* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::CHGHIALKMFM*))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C___TRYRECOMMENDMOLDFORTRAITNOTMETONLY_B__53_10_OFFSET))(this, a1);
		}

		::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32> __TryRecommendMoldForAttrTraitNeitherMet_b__54_1(::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32> a1)
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__54_1_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftAttributeType> __TryRecommendMoldForAttrTraitNeitherMet_b__54_2(::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32> a1, ::System::Int32 a2)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftAttributeType>(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>, ::System::Int32))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__54_2_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MechCraft::MechCraftAttributeType __TryRecommendMoldForAttrTraitNeitherMet_b__54_3(::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftAttributeType> a1)
		{
			return ((::RPG::Client::MechCraft::MechCraftAttributeType(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftAttributeType>))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__54_3_OFFSET))(this, a1);
		}

		::System::Int32 __TryRecommendMoldForAttrTraitNeitherMet_b__54_4(::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftAttributeType> a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftAttributeType>))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__54_4_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::MechCraftChipTraitType __TryRecommendMoldForAttrTraitNeitherMet_b__54_6(::RPG::Client::MechCraft::MechCraftChipTraitType a1)
		{
			return ((::RPG::Client::MechCraft::MechCraftChipTraitType(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftChipTraitType))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__54_6_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftChipTraitType> __TryRecommendMoldForAttrTraitNeitherMet_b__54_7(::RPG::Client::MechCraft::MechCraftChipTraitType a1, ::System::Int32 a2)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftChipTraitType>(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftChipTraitType, ::System::Int32))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__54_7_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MechCraft::MechCraftChipTraitType __TryRecommendMoldForAttrTraitNeitherMet_b__54_8(::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftChipTraitType> a1)
		{
			return ((::RPG::Client::MechCraft::MechCraftChipTraitType(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftChipTraitType>))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__54_8_OFFSET))(this, a1);
		}

		::System::Int32 __TryRecommendMoldForAttrTraitNeitherMet_b__54_9(::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftChipTraitType> a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftChipTraitType>))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__54_9_OFFSET))(this, a1);
		}

		::System::Boolean __TryRecommendMoldForAttrTraitNeitherMet_b__54_10(::CHGHIALKMFM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CHGHIALKMFM*))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__54_10_OFFSET))(this, a1);
		}

		::System::Int32 __TryRecommendMoldForAttrTraitNeitherMet_b__54_13(::CHGHIALKMFM* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::CHGHIALKMFM*))((::PBYTE)hIl2Cpp + IFOEBJMEFKG___C___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__54_13_OFFSET))(this, a1);
		}

	};
