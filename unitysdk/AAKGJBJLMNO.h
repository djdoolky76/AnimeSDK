#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivitySummonRewardTabRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AAKGJBJLMNO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CC97A60)
#define AAKGJBJLMNO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC98030)
#define AAKGJBJLMNO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CC97BD0)
#define AAKGJBJLMNO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CC974D0)
#define AAKGJBJLMNO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CC97760)
#define AAKGJBJLMNO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CC97C70)
#define AAKGJBJLMNO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CC97CC0)
#define AAKGJBJLMNO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CC97AA0)
#define AAKGJBJLMNO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CC97700)
#define AAKGJBJLMNO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CC978D0)
#define AAKGJBJLMNO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CC97B30)
#define AAKGJBJLMNO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CC97450)

	class AAKGJBJLMNO : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivitySummonRewardTabRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivitySummonRewardTabRow*>**)UnitySDK::FromName("", "AAKGJBJLMNO")->GetStaticField(0x35690);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AAKGJBJLMNO")->GetStaticField(0x35698);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "AAKGJBJLMNO")->GetStaticField(0x356A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AAKGJBJLMNO")->GetStaticField(0xB3D0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AAKGJBJLMNO")->GetStaticField(0xB3D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAKGJBJLMNO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivitySummonRewardTabRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivitySummonRewardTabRow*>*(*)())((::PBYTE)hIl2Cpp + AAKGJBJLMNO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AAKGJBJLMNO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivitySummonRewardTabRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivitySummonRewardTabRow*>(*)())((::PBYTE)hIl2Cpp + AAKGJBJLMNO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivitySummonRewardTabRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivitySummonRewardTabRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AAKGJBJLMNO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AAKGJBJLMNO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAKGJBJLMNO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAKGJBJLMNO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AAKGJBJLMNO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AAKGJBJLMNO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AAKGJBJLMNO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivitySummonRewardTabRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivitySummonRewardTabRow*))((::PBYTE)hIl2Cpp + AAKGJBJLMNO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
