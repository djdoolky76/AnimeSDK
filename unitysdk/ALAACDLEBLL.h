#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingCardRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ALAACDLEBLL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCD7B70)
#define ALAACDLEBLL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCD80F0)
#define ALAACDLEBLL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCD7CE0)
#define ALAACDLEBLL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCD7620)
#define ALAACDLEBLL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCD78B0)
#define ALAACDLEBLL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCD7D80)
#define ALAACDLEBLL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCD7DD0)
#define ALAACDLEBLL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCD7BB0)
#define ALAACDLEBLL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCD7850)
#define ALAACDLEBLL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCD7A20)
#define ALAACDLEBLL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCD7C40)
#define ALAACDLEBLL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCD75A0)

	class ALAACDLEBLL : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ALAACDLEBLL")->GetStaticField(0x3B250);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "ALAACDLEBLL")->GetStaticField(0x3B258);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingCardRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingCardRow*>**)UnitySDK::FromName("", "ALAACDLEBLL")->GetStaticField(0x3B260);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ALAACDLEBLL")->GetStaticField(0xC920);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ALAACDLEBLL")->GetStaticField(0xC921);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALAACDLEBLL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingCardRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingCardRow*>*(*)())((::PBYTE)hIl2Cpp + ALAACDLEBLL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ALAACDLEBLL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingCardRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingCardRow*>(*)())((::PBYTE)hIl2Cpp + ALAACDLEBLL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChenLingCardRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChenLingCardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ALAACDLEBLL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ALAACDLEBLL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALAACDLEBLL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALAACDLEBLL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ALAACDLEBLL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ALAACDLEBLL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ALAACDLEBLL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChenLingCardRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChenLingCardRow*))((::PBYTE)hIl2Cpp + ALAACDLEBLL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
