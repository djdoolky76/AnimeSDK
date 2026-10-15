#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BFOGLEGJOLK.h"
#include "unitysdk/KDLJHIJDOAG_EFIGDFDACHI.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/System/ValueTuple.h"
class FCOEMCEDLNL;
class OFLIAAOJPJC;
namespace RPG::GameCore { class PerformanceReplayOverrideRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KDLJHIJDOAG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0804E0)
#define KDLJHIJDOAG_BHDOMIGFBCJ_OFFSET UNITYSDK_OFFSET(0x1D07FBB0)
#define KDLJHIJDOAG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D080E30)
#define KDLJHIJDOAG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0808A0)
#define KDLJHIJDOAG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D07FCA0)
#define KDLJHIJDOAG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D07FEC0)
#define KDLJHIJDOAG_HLPLHCPAKNF_OFFSET UNITYSDK_OFFSET(0x1D07FB00)
#define KDLJHIJDOAG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D080900)
#define KDLJHIJDOAG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D080950)
#define KDLJHIJDOAG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D080520)
#define KDLJHIJDOAG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D07FE50)
#define KDLJHIJDOAG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D080110)
#define KDLJHIJDOAG_MDDEBCEINEJ_OFFSET UNITYSDK_OFFSET(0x1D080710)
#define KDLJHIJDOAG_OKONOOJEJMJ_OFFSET UNITYSDK_OFFSET(0x1D0801C0)
#define KDLJHIJDOAG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0806B0)
#define KDLJHIJDOAG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D07FC20)

inline static constexpr unsigned int KDLJHIJDOAG_TypeDefinitionIndex = 14341;

	class KDLJHIJDOAG : public ::System::Object
	{
	public:
		static ::OFLIAAOJPJC** StaticGet_MLGLBKACPBD()
		{
			return (::OFLIAAOJPJC**)UnitySDK::FromName("", "KDLJHIJDOAG")->GetStaticField(0x33EB0);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "KDLJHIJDOAG")->GetStaticField(0x33EB8);
		}

		static ::System::String** StaticGet_PCJBKGCDGPO()
		{
			return (::System::String**)UnitySDK::FromName("", "KDLJHIJDOAG")->GetStaticField(0x33EC0);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::PerformanceReplayOverrideRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::PerformanceReplayOverrideRow*>**)UnitySDK::FromName("", "KDLJHIJDOAG")->GetStaticField(0x33EC8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KDLJHIJDOAG")->GetStaticField(0x33ED0);
		}

		static ::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::PerformanceReplayOverrideRow*>** StaticGet_LMHLKOHMNAL()
		{
			return (::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::PerformanceReplayOverrideRow*>**)UnitySDK::FromName("", "KDLJHIJDOAG")->GetStaticField(0x33ED8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_KGADENKPMFA()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KDLJHIJDOAG")->GetStaticField(0x33EE0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KDLJHIJDOAG")->GetStaticField(0xAEA0);
		}

		static ::System::Boolean* StaticGet_GDOFOFOCOLC()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KDLJHIJDOAG")->GetStaticField(0xAEA1);
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

		static ::System::Void MDDEBCEINEJ(::System::ValueTuple a1, ::RPG::GameCore::PerformanceReplayOverrideRow* a2)
		{
			return ((::System::Void(*)(::System::ValueTuple, ::RPG::GameCore::PerformanceReplayOverrideRow*))((::PBYTE)hIl2Cpp + KDLJHIJDOAG_MDDEBCEINEJ_OFFSET))(a1, a2);
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
