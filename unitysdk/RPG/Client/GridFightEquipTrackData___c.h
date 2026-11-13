#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IHMJHLGKLHP.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_5.h"
namespace RPG::Client { class GridFightEquipTrack; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D18FB60)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D18FBA0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__UPDATEEQUIPTRACKFROMSERVER_B__17_0_OFFSET UNITYSDK_OFFSET(0x1D18FBB0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C___ADDTRACKTOLASTANDSEND_B__35_0_OFFSET UNITYSDK_OFFSET(0x1D18FC50)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C___GETMAXPRIORITY_B__30_0_OFFSET UNITYSDK_OFFSET(0x1D18FBD0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C___GETMINPRIORITY_B__31_0_OFFSET UNITYSDK_OFFSET(0x1D18FBF0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C___RESETALLTRACKSPRIORITYANDSEND_B__34_0_OFFSET UNITYSDK_OFFSET(0x1D18FC10)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C___RESETALLTRACKSPRIORITYANDSEND_B__34_1_OFFSET UNITYSDK_OFFSET(0x1D18FC30)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipTrackData___c_TypeDefinitionIndex = 67094;

	class GridFightEquipTrackData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightEquipTrack*, ::System::UInt32>** StaticGet___9__31_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipTrack*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71030);
		}

		static ::System::Comparison_1<::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::IHMJHLGKLHP, ::System::UInt32>>** StaticGet___9__34_0()
		{
			return (::System::Comparison_1<::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::IHMJHLGKLHP, ::System::UInt32>>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71038);
		}

		static ::System::Comparison_1<::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::IHMJHLGKLHP, ::System::UInt32>>** StaticGet___9__34_1()
		{
			return (::System::Comparison_1<::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::IHMJHLGKLHP, ::System::UInt32>>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71040);
		}

		static ::System::Comparison_1<::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::IHMJHLGKLHP, ::System::UInt32>>** StaticGet___9__35_0()
		{
			return (::System::Comparison_1<::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::IHMJHLGKLHP, ::System::UInt32>>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71048);
		}

		static ::System::Func_2<::RPG::Client::GridFightEquipTrack*, ::System::Int64>** StaticGet___9__17_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipTrack*, ::System::Int64>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71050);
		}

		static ::System::Func_2<::RPG::Client::GridFightEquipTrack*, ::System::UInt32>** StaticGet___9__30_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipTrack*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71058);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71060);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C_CTOR_OFFSET))(this);
		}

		::System::Int64 _UpdateEquipTrackFromServer_b__17_0(::RPG::Client::GridFightEquipTrack* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__UPDATEEQUIPTRACKFROMSERVER_B__17_0_OFFSET))(this, a1);
		}

		::System::UInt32 __GetMaxPriority_b__30_0(::RPG::Client::GridFightEquipTrack* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C___GETMAXPRIORITY_B__30_0_OFFSET))(this, a1);
		}

		::System::UInt32 __GetMinPriority_b__31_0(::RPG::Client::GridFightEquipTrack* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C___GETMINPRIORITY_B__31_0_OFFSET))(this, a1);
		}

		::System::Int32 __ResetAllTracksPriorityAndSend_b__34_0(::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::IHMJHLGKLHP, ::System::UInt32> a1, ::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::IHMJHLGKLHP, ::System::UInt32> a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::IHMJHLGKLHP, ::System::UInt32>, ::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::IHMJHLGKLHP, ::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C___RESETALLTRACKSPRIORITYANDSEND_B__34_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 __ResetAllTracksPriorityAndSend_b__34_1(::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::IHMJHLGKLHP, ::System::UInt32> a1, ::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::IHMJHLGKLHP, ::System::UInt32> a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::IHMJHLGKLHP, ::System::UInt32>, ::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::IHMJHLGKLHP, ::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C___RESETALLTRACKSPRIORITYANDSEND_B__34_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 __AddTrackToLastAndSend_b__35_0(::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::IHMJHLGKLHP, ::System::UInt32> a1, ::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::IHMJHLGKLHP, ::System::UInt32> a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::IHMJHLGKLHP, ::System::UInt32>, ::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::IHMJHLGKLHP, ::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C___ADDTRACKTOLASTANDSEND_B__35_0_OFFSET))(this, a1, a2);
		}

	};
}
