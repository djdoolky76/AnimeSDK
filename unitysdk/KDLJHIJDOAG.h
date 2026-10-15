#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BFOGLEGJOLK.h"
#include "unitysdk/KDLJHIJDOAG_EFIGDFDACHI.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/System/ValueTuple_3.h"
class FCOEMCEDLNL;
class OFLIAAOJPJC;
namespace RPG::GameCore { class PerformanceReplayOverrideRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KDLJHIJDOAG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D052560)
#define KDLJHIJDOAG_BHDOMIGFBCJ_OFFSET UNITYSDK_OFFSET(0x1D051C30)
#define KDLJHIJDOAG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D052EB0)
#define KDLJHIJDOAG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D052920)
#define KDLJHIJDOAG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D051D20)
#define KDLJHIJDOAG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D051F40)
#define KDLJHIJDOAG_HLPLHCPAKNF_OFFSET UNITYSDK_OFFSET(0x1D051B80)
#define KDLJHIJDOAG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D052980)
#define KDLJHIJDOAG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0529D0)
#define KDLJHIJDOAG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0525A0)
#define KDLJHIJDOAG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D051ED0)
#define KDLJHIJDOAG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D052190)
#define KDLJHIJDOAG_MDDEBCEINEJ_OFFSET UNITYSDK_OFFSET(0x1D052790)
#define KDLJHIJDOAG_OKONOOJEJMJ_OFFSET UNITYSDK_OFFSET(0x1D052240)
#define KDLJHIJDOAG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D052730)
#define KDLJHIJDOAG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D051CA0)

inline static constexpr unsigned int KDLJHIJDOAG_TypeDefinitionIndex = 14341;

	class KDLJHIJDOAG : public ::System::Object
	{
	public:
		static ::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::PerformanceReplayOverrideRow*>** StaticGet_LMHLKOHMNAL()
		{
			return (::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::PerformanceReplayOverrideRow*>**)UnitySDK::FromName("", "KDLJHIJDOAG")->GetStaticField(0x33C00);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_KGADENKPMFA()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KDLJHIJDOAG")->GetStaticField(0x33C08);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::PerformanceReplayOverrideRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::PerformanceReplayOverrideRow*>**)UnitySDK::FromName("", "KDLJHIJDOAG")->GetStaticField(0x33C10);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KDLJHIJDOAG")->GetStaticField(0x33C18);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KDLJHIJDOAG")->GetStaticField(0x33C20);
		}

		static ::OFLIAAOJPJC** StaticGet_MLGLBKACPBD()
		{
			return (::OFLIAAOJPJC**)UnitySDK::FromName("", "KDLJHIJDOAG")->GetStaticField(0x33C28);
		}

		static ::System::String** StaticGet_PCJBKGCDGPO()
		{
			return (::System::String**)UnitySDK::FromName("", "KDLJHIJDOAG")->GetStaticField(0x33C30);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KDLJHIJDOAG")->GetStaticField(0xA810);
		}

		static ::System::Boolean* StaticGet_GDOFOFOCOLC()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KDLJHIJDOAG")->GetStaticField(0xA811);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDLJHIJDOAG_CCTOR_OFFSET))();
		}

		static ::BFOGLEGJOLK HLPLHCPAKNF()
		{
			return ((::BFOGLEGJOLK(*)())((::PBYTE)hIl2Cpp + KDLJHIJDOAG_HLPLHCPAKNF_OFFSET))();
		}

		static ::System::Void BHDOMIGFBCJ(::System::Object* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + KDLJHIJDOAG_BHDOMIGFBCJ_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::PerformanceReplayOverrideRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::PerformanceReplayOverrideRow*>*(*)())((::PBYTE)hIl2Cpp + KDLJHIJDOAG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KDLJHIJDOAG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator_2<::System::Object*, ::RPG::GameCore::PerformanceReplayOverrideRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::AdapterEnumerator_2<::System::Object*, ::RPG::GameCore::PerformanceReplayOverrideRow*>(*)())((::PBYTE)hIl2Cpp + KDLJHIJDOAG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PerformanceReplayOverrideRow* LMBKNCAIDLC(::RPG::GameCore::ELevelPerformanceType a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::PerformanceReplayOverrideRow*(*)(::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + KDLJHIJDOAG_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KDLJHIJDOAG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDLJHIJDOAG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDLJHIJDOAG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void MDDEBCEINEJ(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1, ::RPG::GameCore::PerformanceReplayOverrideRow* a2)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::PerformanceReplayOverrideRow*))((::PBYTE)hIl2Cpp + KDLJHIJDOAG_MDDEBCEINEJ_OFFSET))(a1, a2);
		}

		static ::System::Boolean OKONOOJEJMJ(::KDLJHIJDOAG_EFIGDFDACHI a1, ::RPG::GameCore::PerformanceReplayOverrideRow* a2)
		{
			return ((::System::Boolean(*)(::KDLJHIJDOAG_EFIGDFDACHI, ::RPG::GameCore::PerformanceReplayOverrideRow*))((::PBYTE)hIl2Cpp + KDLJHIJDOAG_OKONOOJEJMJ_OFFSET))(a1, a2);
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KDLJHIJDOAG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KDLJHIJDOAG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KDLJHIJDOAG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PerformanceReplayOverrideRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PerformanceReplayOverrideRow*))((::PBYTE)hIl2Cpp + KDLJHIJDOAG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
