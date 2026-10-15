#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleMatchGroupStageRankRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FAPPCJMPAGC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD9A580)
#define FAPPCJMPAGC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD9AB80)
#define FAPPCJMPAGC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD9A6F0)
#define FAPPCJMPAGC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD99FB0)
#define FAPPCJMPAGC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD9A240)
#define FAPPCJMPAGC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD9A790)
#define FAPPCJMPAGC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD9A7E0)
#define FAPPCJMPAGC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD9A5C0)
#define FAPPCJMPAGC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD9A1E0)
#define FAPPCJMPAGC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD9A3B0)
#define FAPPCJMPAGC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD9A650)
#define FAPPCJMPAGC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD99F30)

inline static constexpr unsigned int FAPPCJMPAGC_TypeDefinitionIndex = 11872;

	class FAPPCJMPAGC : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchGroupStageRankRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchGroupStageRankRow*>**)UnitySDK::FromName("", "FAPPCJMPAGC")->GetStaticField(0xF1F0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FAPPCJMPAGC")->GetStaticField(0xF1F8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FAPPCJMPAGC")->GetStaticField(0xF200);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FAPPCJMPAGC")->GetStaticField(0x31A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FAPPCJMPAGC")->GetStaticField(0x31A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAPPCJMPAGC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchGroupStageRankRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchGroupStageRankRow*>*(*)())((::PBYTE)hIl2Cpp + FAPPCJMPAGC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FAPPCJMPAGC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchGroupStageRankRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchGroupStageRankRow*>(*)())((::PBYTE)hIl2Cpp + FAPPCJMPAGC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MarbleMatchGroupStageRankRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::MarbleMatchGroupStageRankRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FAPPCJMPAGC_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FAPPCJMPAGC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAPPCJMPAGC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAPPCJMPAGC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FAPPCJMPAGC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FAPPCJMPAGC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FAPPCJMPAGC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MarbleMatchGroupStageRankRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MarbleMatchGroupStageRankRow*))((::PBYTE)hIl2Cpp + FAPPCJMPAGC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
