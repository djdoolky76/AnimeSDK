#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingGameBoyChallengePackRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KLMGAIIDCGC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D07D470)
#define KLMGAIIDCGC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D07DA40)
#define KLMGAIIDCGC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D07D5E0)
#define KLMGAIIDCGC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D07CEE0)
#define KLMGAIIDCGC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D07D170)
#define KLMGAIIDCGC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D07D680)
#define KLMGAIIDCGC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D07D6D0)
#define KLMGAIIDCGC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D07D4B0)
#define KLMGAIIDCGC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D07D110)
#define KLMGAIIDCGC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D07D2E0)
#define KLMGAIIDCGC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D07D540)
#define KLMGAIIDCGC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D07CE60)

inline static constexpr unsigned int KLMGAIIDCGC_TypeDefinitionIndex = 14104;

	class KLMGAIIDCGC : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KLMGAIIDCGC")->GetStaticField(0x36090);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingGameBoyChallengePackRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingGameBoyChallengePackRow*>**)UnitySDK::FromName("", "KLMGAIIDCGC")->GetStaticField(0x36098);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KLMGAIIDCGC")->GetStaticField(0x360A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KLMGAIIDCGC")->GetStaticField(0xAED0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KLMGAIIDCGC")->GetStaticField(0xAED1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLMGAIIDCGC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingGameBoyChallengePackRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingGameBoyChallengePackRow*>*(*)())((::PBYTE)hIl2Cpp + KLMGAIIDCGC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KLMGAIIDCGC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingGameBoyChallengePackRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingGameBoyChallengePackRow*>(*)())((::PBYTE)hIl2Cpp + KLMGAIIDCGC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChenLingGameBoyChallengePackRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChenLingGameBoyChallengePackRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KLMGAIIDCGC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KLMGAIIDCGC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLMGAIIDCGC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLMGAIIDCGC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KLMGAIIDCGC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KLMGAIIDCGC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KLMGAIIDCGC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChenLingGameBoyChallengePackRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChenLingGameBoyChallengePackRow*))((::PBYTE)hIl2Cpp + KLMGAIIDCGC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
