#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BFOGLEGJOLK.h"
#include "unitysdk/LMPEOEHEBGK_DGLPEBIKOJF.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/System/ValueTuple_3.h"
class FCOEMCEDLNL;
class OFLIAAOJPJC;
namespace RPG::GameCore { class PerformanceReplayLogicOverrideRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LMPEOEHEBGK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0EA250)
#define LMPEOEHEBGK_BHDOMIGFBCJ_OFFSET UNITYSDK_OFFSET(0x1D0E9920)
#define LMPEOEHEBGK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0EABA0)
#define LMPEOEHEBGK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0EA610)
#define LMPEOEHEBGK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0E9A10)
#define LMPEOEHEBGK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0E9C30)
#define LMPEOEHEBGK_HLPLHCPAKNF_OFFSET UNITYSDK_OFFSET(0x1D0E9870)
#define LMPEOEHEBGK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0EA670)
#define LMPEOEHEBGK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0EA6C0)
#define LMPEOEHEBGK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0EA290)
#define LMPEOEHEBGK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0E9BC0)
#define LMPEOEHEBGK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0E9E80)
#define LMPEOEHEBGK_MDDEBCEINEJ_OFFSET UNITYSDK_OFFSET(0x1D0EA480)
#define LMPEOEHEBGK_OKONOOJEJMJ_OFFSET UNITYSDK_OFFSET(0x1D0E9F30)
#define LMPEOEHEBGK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0EA420)
#define LMPEOEHEBGK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0E9990)

inline static constexpr unsigned int LMPEOEHEBGK_TypeDefinitionIndex = 14344;

	class LMPEOEHEBGK : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LMPEOEHEBGK")->GetStaticField(0x3EB60);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::PerformanceReplayLogicOverrideRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::PerformanceReplayLogicOverrideRow*>**)UnitySDK::FromName("", "LMPEOEHEBGK")->GetStaticField(0x3EB68);
		}

		static ::OFLIAAOJPJC** StaticGet_MLGLBKACPBD()
		{
			return (::OFLIAAOJPJC**)UnitySDK::FromName("", "LMPEOEHEBGK")->GetStaticField(0x3EB70);
		}

		static ::System::String** StaticGet_PCJBKGCDGPO()
		{
			return (::System::String**)UnitySDK::FromName("", "LMPEOEHEBGK")->GetStaticField(0x3EB78);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_KGADENKPMFA()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LMPEOEHEBGK")->GetStaticField(0x3EB80);
		}

		static ::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::PerformanceReplayLogicOverrideRow*>** StaticGet_LMHLKOHMNAL()
		{
			return (::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::PerformanceReplayLogicOverrideRow*>**)UnitySDK::FromName("", "LMPEOEHEBGK")->GetStaticField(0x3EB88);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LMPEOEHEBGK")->GetStaticField(0x3EB90);
		}

		static ::System::Boolean* StaticGet_GDOFOFOCOLC()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LMPEOEHEBGK")->GetStaticField(0xEC90);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LMPEOEHEBGK")->GetStaticField(0xEC91);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMPEOEHEBGK_CCTOR_OFFSET))();
		}

		static ::BFOGLEGJOLK HLPLHCPAKNF()
		{
			return ((::BFOGLEGJOLK(*)())((::PBYTE)hIl2Cpp + LMPEOEHEBGK_HLPLHCPAKNF_OFFSET))();
		}

		static ::System::Void BHDOMIGFBCJ(::System::Object* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + LMPEOEHEBGK_BHDOMIGFBCJ_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::PerformanceReplayLogicOverrideRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::PerformanceReplayLogicOverrideRow*>*(*)())((::PBYTE)hIl2Cpp + LMPEOEHEBGK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LMPEOEHEBGK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator_2<::System::Object*, ::RPG::GameCore::PerformanceReplayLogicOverrideRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::AdapterEnumerator_2<::System::Object*, ::RPG::GameCore::PerformanceReplayLogicOverrideRow*>(*)())((::PBYTE)hIl2Cpp + LMPEOEHEBGK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PerformanceReplayLogicOverrideRow* LMBKNCAIDLC(::RPG::GameCore::ELevelPerformanceType a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::PerformanceReplayLogicOverrideRow*(*)(::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + LMPEOEHEBGK_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LMPEOEHEBGK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMPEOEHEBGK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMPEOEHEBGK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void MDDEBCEINEJ(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1, ::RPG::GameCore::PerformanceReplayLogicOverrideRow* a2)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::PerformanceReplayLogicOverrideRow*))((::PBYTE)hIl2Cpp + LMPEOEHEBGK_MDDEBCEINEJ_OFFSET))(a1, a2);
		}

		static ::System::Boolean OKONOOJEJMJ(::LMPEOEHEBGK_DGLPEBIKOJF a1, ::RPG::GameCore::PerformanceReplayLogicOverrideRow* a2)
		{
			return ((::System::Boolean(*)(::LMPEOEHEBGK_DGLPEBIKOJF, ::RPG::GameCore::PerformanceReplayLogicOverrideRow*))((::PBYTE)hIl2Cpp + LMPEOEHEBGK_OKONOOJEJMJ_OFFSET))(a1, a2);
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LMPEOEHEBGK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LMPEOEHEBGK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LMPEOEHEBGK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PerformanceReplayLogicOverrideRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PerformanceReplayLogicOverrideRow*))((::PBYTE)hIl2Cpp + LMPEOEHEBGK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
