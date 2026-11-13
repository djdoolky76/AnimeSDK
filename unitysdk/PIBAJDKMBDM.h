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

#define PIBAJDKMBDM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E72B220)
#define PIBAJDKMBDM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E72B7A0)
#define PIBAJDKMBDM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E72B390)
#define PIBAJDKMBDM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E72AD10)
#define PIBAJDKMBDM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E72AFA0)
#define PIBAJDKMBDM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E72B430)
#define PIBAJDKMBDM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E72B480)
#define PIBAJDKMBDM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E72B260)
#define PIBAJDKMBDM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E72AF40)
#define PIBAJDKMBDM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E72B0D0)
#define PIBAJDKMBDM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E72B2F0)
#define PIBAJDKMBDM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E72AC90)

inline static constexpr unsigned int PIBAJDKMBDM_TypeDefinitionIndex = 12008;

	class PIBAJDKMBDM : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PIBAJDKMBDM")->GetStaticField(0x3FDE0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2PVPRankRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2PVPRankRow*>**)UnitySDK::FromName("", "PIBAJDKMBDM")->GetStaticField(0x3FDE8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PIBAJDKMBDM")->GetStaticField(0x3FDF0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PIBAJDKMBDM")->GetStaticField(0xCD30);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PIBAJDKMBDM")->GetStaticField(0xCD31);
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
