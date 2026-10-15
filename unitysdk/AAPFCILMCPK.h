#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CycleScoreRewardRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AAPFCILMCPK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CC9A1B0)
#define AAPFCILMCPK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC9A730)
#define AAPFCILMCPK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CC9A320)
#define AAPFCILMCPK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CC99C60)
#define AAPFCILMCPK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CC99EF0)
#define AAPFCILMCPK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CC9A3C0)
#define AAPFCILMCPK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CC9A410)
#define AAPFCILMCPK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CC9A1F0)
#define AAPFCILMCPK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CC99E90)
#define AAPFCILMCPK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CC9A020)
#define AAPFCILMCPK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CC9A280)
#define AAPFCILMCPK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CC99BE0)

inline static constexpr unsigned int AAPFCILMCPK_TypeDefinitionIndex = 13112;

	class AAPFCILMCPK : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "AAPFCILMCPK")->GetStaticField(0x358A0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AAPFCILMCPK")->GetStaticField(0x358A8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CycleScoreRewardRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CycleScoreRewardRow*>**)UnitySDK::FromName("", "AAPFCILMCPK")->GetStaticField(0x358B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AAPFCILMCPK")->GetStaticField(0xB490);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AAPFCILMCPK")->GetStaticField(0xB491);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAPFCILMCPK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CycleScoreRewardRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CycleScoreRewardRow*>*(*)())((::PBYTE)hIl2Cpp + AAPFCILMCPK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AAPFCILMCPK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CycleScoreRewardRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CycleScoreRewardRow*>(*)())((::PBYTE)hIl2Cpp + AAPFCILMCPK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::CycleScoreRewardRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::CycleScoreRewardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AAPFCILMCPK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AAPFCILMCPK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAPFCILMCPK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAPFCILMCPK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AAPFCILMCPK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AAPFCILMCPK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AAPFCILMCPK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::CycleScoreRewardRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::CycleScoreRewardRow*))((::PBYTE)hIl2Cpp + AAPFCILMCPK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
