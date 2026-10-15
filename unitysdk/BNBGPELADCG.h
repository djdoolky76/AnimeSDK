#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveMessageContentRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BNBGPELADCG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D9E77E0)
#define BNBGPELADCG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9E7DB0)
#define BNBGPELADCG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D9E7950)
#define BNBGPELADCG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D9E7250)
#define BNBGPELADCG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D9E74E0)
#define BNBGPELADCG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D9E79F0)
#define BNBGPELADCG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D9E7A40)
#define BNBGPELADCG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D9E7820)
#define BNBGPELADCG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D9E7480)
#define BNBGPELADCG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D9E7650)
#define BNBGPELADCG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D9E78B0)
#define BNBGPELADCG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D9E71D0)

	class BNBGPELADCG : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveMessageContentRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveMessageContentRow*>**)UnitySDK::FromName("", "BNBGPELADCG")->GetStaticField(0x38850);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "BNBGPELADCG")->GetStaticField(0x38858);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BNBGPELADCG")->GetStaticField(0x38860);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BNBGPELADCG")->GetStaticField(0xC0F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BNBGPELADCG")->GetStaticField(0xC0F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNBGPELADCG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveMessageContentRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveMessageContentRow*>*(*)())((::PBYTE)hIl2Cpp + BNBGPELADCG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BNBGPELADCG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveMessageContentRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveMessageContentRow*>(*)())((::PBYTE)hIl2Cpp + BNBGPELADCG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveMessageContentRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveMessageContentRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BNBGPELADCG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BNBGPELADCG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNBGPELADCG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNBGPELADCG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BNBGPELADCG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BNBGPELADCG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BNBGPELADCG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveMessageContentRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveMessageContentRow*))((::PBYTE)hIl2Cpp + BNBGPELADCG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
