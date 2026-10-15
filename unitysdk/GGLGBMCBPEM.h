#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ParkourRankingListConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GGLGBMCBPEM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE42470)
#define GGLGBMCBPEM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE42A40)
#define GGLGBMCBPEM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE425E0)
#define GGLGBMCBPEM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE41EE0)
#define GGLGBMCBPEM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE42170)
#define GGLGBMCBPEM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE42680)
#define GGLGBMCBPEM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE426D0)
#define GGLGBMCBPEM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE424B0)
#define GGLGBMCBPEM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE42110)
#define GGLGBMCBPEM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE422E0)
#define GGLGBMCBPEM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE42540)
#define GGLGBMCBPEM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE41E60)

	class GGLGBMCBPEM : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "GGLGBMCBPEM")->GetStaticField(0x174E0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GGLGBMCBPEM")->GetStaticField(0x174E8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourRankingListConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourRankingListConfigRow*>**)UnitySDK::FromName("", "GGLGBMCBPEM")->GetStaticField(0x174F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GGLGBMCBPEM")->GetStaticField(0x5780);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GGLGBMCBPEM")->GetStaticField(0x5781);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGLGBMCBPEM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourRankingListConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourRankingListConfigRow*>*(*)())((::PBYTE)hIl2Cpp + GGLGBMCBPEM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GGLGBMCBPEM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourRankingListConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourRankingListConfigRow*>(*)())((::PBYTE)hIl2Cpp + GGLGBMCBPEM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ParkourRankingListConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ParkourRankingListConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GGLGBMCBPEM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GGLGBMCBPEM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGLGBMCBPEM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGLGBMCBPEM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GGLGBMCBPEM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GGLGBMCBPEM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GGLGBMCBPEM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ParkourRankingListConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ParkourRankingListConfigRow*))((::PBYTE)hIl2Cpp + GGLGBMCBPEM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
