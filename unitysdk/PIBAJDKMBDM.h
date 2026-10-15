#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreeV2PVPRankRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PIBAJDKMBDM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2BF840)
#define PIBAJDKMBDM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2BFDC0)
#define PIBAJDKMBDM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2BF9B0)
#define PIBAJDKMBDM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2BF330)
#define PIBAJDKMBDM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2BF5C0)
#define PIBAJDKMBDM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2BFA50)
#define PIBAJDKMBDM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2BFAA0)
#define PIBAJDKMBDM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2BF880)
#define PIBAJDKMBDM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2BF560)
#define PIBAJDKMBDM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2BF6F0)
#define PIBAJDKMBDM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2BF910)
#define PIBAJDKMBDM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2BF2B0)

inline static constexpr unsigned int PIBAJDKMBDM_TypeDefinitionIndex = 11951;

	class PIBAJDKMBDM : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PIBAJDKMBDM")->GetStaticField(0x50970);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2PVPRankRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2PVPRankRow*>**)UnitySDK::FromName("", "PIBAJDKMBDM")->GetStaticField(0x50978);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PIBAJDKMBDM")->GetStaticField(0x50980);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PIBAJDKMBDM")->GetStaticField(0x12250);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PIBAJDKMBDM")->GetStaticField(0x12251);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIBAJDKMBDM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2PVPRankRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2PVPRankRow*>*(*)())((::PBYTE)hIl2Cpp + PIBAJDKMBDM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PIBAJDKMBDM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2PVPRankRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2PVPRankRow*>(*)())((::PBYTE)hIl2Cpp + PIBAJDKMBDM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MatchThreeV2PVPRankRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MatchThreeV2PVPRankRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PIBAJDKMBDM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PIBAJDKMBDM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIBAJDKMBDM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIBAJDKMBDM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PIBAJDKMBDM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PIBAJDKMBDM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PIBAJDKMBDM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MatchThreeV2PVPRankRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MatchThreeV2PVPRankRow*))((::PBYTE)hIl2Cpp + PIBAJDKMBDM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
