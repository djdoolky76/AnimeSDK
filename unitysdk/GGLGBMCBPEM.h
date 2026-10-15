#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ParkourRankingListConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GGLGBMCBPEM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE14370)
#define GGLGBMCBPEM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE14940)
#define GGLGBMCBPEM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE144E0)
#define GGLGBMCBPEM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE13DE0)
#define GGLGBMCBPEM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE14070)
#define GGLGBMCBPEM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE14580)
#define GGLGBMCBPEM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE145D0)
#define GGLGBMCBPEM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE143B0)
#define GGLGBMCBPEM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE14010)
#define GGLGBMCBPEM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE141E0)
#define GGLGBMCBPEM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE14440)
#define GGLGBMCBPEM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE13D60)

inline static constexpr unsigned int GGLGBMCBPEM_TypeDefinitionIndex = 12107;

	class GGLGBMCBPEM : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GGLGBMCBPEM")->GetStaticField(0x15500);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GGLGBMCBPEM")->GetStaticField(0x15508);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourRankingListConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourRankingListConfigRow*>**)UnitySDK::FromName("", "GGLGBMCBPEM")->GetStaticField(0x15510);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GGLGBMCBPEM")->GetStaticField(0x4890);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GGLGBMCBPEM")->GetStaticField(0x4891);
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
