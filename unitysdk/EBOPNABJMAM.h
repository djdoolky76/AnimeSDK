#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ParkourTriggerEventRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EBOPNABJMAM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD62D80)
#define EBOPNABJMAM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD63350)
#define EBOPNABJMAM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD62EF0)
#define EBOPNABJMAM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD627F0)
#define EBOPNABJMAM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD62A80)
#define EBOPNABJMAM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD62F90)
#define EBOPNABJMAM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD62FE0)
#define EBOPNABJMAM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD62DC0)
#define EBOPNABJMAM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD62A20)
#define EBOPNABJMAM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD62BF0)
#define EBOPNABJMAM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD62E50)
#define EBOPNABJMAM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD62770)

inline static constexpr unsigned int EBOPNABJMAM_TypeDefinitionIndex = 12111;

	class EBOPNABJMAM : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EBOPNABJMAM")->GetStaticField(0x53130);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "EBOPNABJMAM")->GetStaticField(0x53138);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourTriggerEventRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourTriggerEventRow*>**)UnitySDK::FromName("", "EBOPNABJMAM")->GetStaticField(0x53140);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EBOPNABJMAM")->GetStaticField(0x12730);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EBOPNABJMAM")->GetStaticField(0x12731);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBOPNABJMAM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourTriggerEventRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourTriggerEventRow*>*(*)())((::PBYTE)hIl2Cpp + EBOPNABJMAM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EBOPNABJMAM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourTriggerEventRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourTriggerEventRow*>(*)())((::PBYTE)hIl2Cpp + EBOPNABJMAM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ParkourTriggerEventRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ParkourTriggerEventRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EBOPNABJMAM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EBOPNABJMAM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBOPNABJMAM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBOPNABJMAM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EBOPNABJMAM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EBOPNABJMAM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EBOPNABJMAM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ParkourTriggerEventRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ParkourTriggerEventRow*))((::PBYTE)hIl2Cpp + EBOPNABJMAM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
