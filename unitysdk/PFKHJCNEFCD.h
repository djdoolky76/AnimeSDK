#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BFOGLEGJOLK.h"
#include "unitysdk/PFKHJCNEFCD_PDCNHBGAMAG.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/System/ValueTuple_3.h"
class FCOEMCEDLNL;
class OFLIAAOJPJC;
namespace RPG::GameCore { class PerformanceReplayGenderRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PFKHJCNEFCD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E71A570)
#define PFKHJCNEFCD_BHDOMIGFBCJ_OFFSET UNITYSDK_OFFSET(0x1E719C40)
#define PFKHJCNEFCD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E71B000)
#define PFKHJCNEFCD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E71AA70)
#define PFKHJCNEFCD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E719D30)
#define PFKHJCNEFCD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E719F50)
#define PFKHJCNEFCD_HLPLHCPAKNF_OFFSET UNITYSDK_OFFSET(0x1E719B90)
#define PFKHJCNEFCD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E71AAD0)
#define PFKHJCNEFCD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E71AB20)
#define PFKHJCNEFCD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E71A5B0)
#define PFKHJCNEFCD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E719EE0)
#define PFKHJCNEFCD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E71A1A0)
#define PFKHJCNEFCD_MDDEBCEINEJ_OFFSET UNITYSDK_OFFSET(0x1E71A8E0)
#define PFKHJCNEFCD_OKONOOJEJMJ_OFFSET UNITYSDK_OFFSET(0x1E71A250)
#define PFKHJCNEFCD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E71A740)
#define PFKHJCNEFCD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E719CB0)

inline static constexpr unsigned int PFKHJCNEFCD_TypeDefinitionIndex = 14510;

	class PFKHJCNEFCD : public ::System::Object
	{
	public:
		static ::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::PerformanceReplayGenderRow*>** StaticGet_LMHLKOHMNAL()
		{
			return (::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::PerformanceReplayGenderRow*>**)UnitySDK::FromName("", "PFKHJCNEFCD")->GetStaticField(0x3F1B0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_KGADENKPMFA()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PFKHJCNEFCD")->GetStaticField(0x3F1B8);
		}

		static ::OFLIAAOJPJC** StaticGet_MLGLBKACPBD()
		{
			return (::OFLIAAOJPJC**)UnitySDK::FromName("", "PFKHJCNEFCD")->GetStaticField(0x3F1C0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PFKHJCNEFCD")->GetStaticField(0x3F1C8);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::PerformanceReplayGenderRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::PerformanceReplayGenderRow*>**)UnitySDK::FromName("", "PFKHJCNEFCD")->GetStaticField(0x3F1D0);
		}

		static ::System::String** StaticGet_PCJBKGCDGPO()
		{
			return (::System::String**)UnitySDK::FromName("", "PFKHJCNEFCD")->GetStaticField(0x3F1D8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PFKHJCNEFCD")->GetStaticField(0x3F1E0);
		}

		static ::System::Boolean* StaticGet_GDOFOFOCOLC()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PFKHJCNEFCD")->GetStaticField(0xCAC0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PFKHJCNEFCD")->GetStaticField(0xCAC1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFKHJCNEFCD_CCTOR_OFFSET))();
		}

		static ::BFOGLEGJOLK HLPLHCPAKNF()
		{
			return ((::BFOGLEGJOLK(*)())((::PBYTE)hIl2Cpp + PFKHJCNEFCD_HLPLHCPAKNF_OFFSET))();
		}

		static ::System::Void BHDOMIGFBCJ(::System::Object* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + PFKHJCNEFCD_BHDOMIGFBCJ_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::PerformanceReplayGenderRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::PerformanceReplayGenderRow*>*(*)())((::PBYTE)hIl2Cpp + PFKHJCNEFCD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PFKHJCNEFCD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator_2<::System::Object*, ::RPG::GameCore::PerformanceReplayGenderRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::AdapterEnumerator_2<::System::Object*, ::RPG::GameCore::PerformanceReplayGenderRow*>(*)())((::PBYTE)hIl2Cpp + PFKHJCNEFCD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PerformanceReplayGenderRow* LMBKNCAIDLC(::RPG::GameCore::ELevelPerformanceType a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::PerformanceReplayGenderRow*(*)(::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + PFKHJCNEFCD_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PFKHJCNEFCD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFKHJCNEFCD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFKHJCNEFCD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void MDDEBCEINEJ(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1, ::RPG::GameCore::PerformanceReplayGenderRow* a2)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::PerformanceReplayGenderRow*))((::PBYTE)hIl2Cpp + PFKHJCNEFCD_MDDEBCEINEJ_OFFSET))(a1, a2);
		}

		static ::System::Boolean OKONOOJEJMJ(::PFKHJCNEFCD_PDCNHBGAMAG a1, ::RPG::GameCore::PerformanceReplayGenderRow* a2)
		{
			return ((::System::Boolean(*)(::PFKHJCNEFCD_PDCNHBGAMAG, ::RPG::GameCore::PerformanceReplayGenderRow*))((::PBYTE)hIl2Cpp + PFKHJCNEFCD_OKONOOJEJMJ_OFFSET))(a1, a2);
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PFKHJCNEFCD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PFKHJCNEFCD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PFKHJCNEFCD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PerformanceReplayGenderRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PerformanceReplayGenderRow*))((::PBYTE)hIl2Cpp + PFKHJCNEFCD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
