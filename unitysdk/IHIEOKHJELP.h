#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/HipplenOutfitType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityHipplenOutfitTypeRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IHIEOKHJELP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CF0FE80)
#define IHIEOKHJELP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF10450)
#define IHIEOKHJELP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CF0FFF0)
#define IHIEOKHJELP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CF0F8F0)
#define IHIEOKHJELP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CF0FB80)
#define IHIEOKHJELP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CF10090)
#define IHIEOKHJELP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CF100E0)
#define IHIEOKHJELP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CF0FEC0)
#define IHIEOKHJELP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CF0FB20)
#define IHIEOKHJELP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CF0FCF0)
#define IHIEOKHJELP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CF0FF50)
#define IHIEOKHJELP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CF0F870)

	class IHIEOKHJELP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenOutfitTypeRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenOutfitTypeRow*>**)UnitySDK::FromName("", "IHIEOKHJELP")->GetStaticField(0x23700);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "IHIEOKHJELP")->GetStaticField(0x23708);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IHIEOKHJELP")->GetStaticField(0x23710);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IHIEOKHJELP")->GetStaticField(0x7DD0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IHIEOKHJELP")->GetStaticField(0x7DD1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHIEOKHJELP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenOutfitTypeRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenOutfitTypeRow*>*(*)())((::PBYTE)hIl2Cpp + IHIEOKHJELP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IHIEOKHJELP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenOutfitTypeRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenOutfitTypeRow*>(*)())((::PBYTE)hIl2Cpp + IHIEOKHJELP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityHipplenOutfitTypeRow* LMBKNCAIDLC(::RPG::GameCore::HipplenOutfitType a1)
		{
			return ((::RPG::GameCore::ActivityHipplenOutfitTypeRow*(*)(::RPG::GameCore::HipplenOutfitType))((::PBYTE)hIl2Cpp + IHIEOKHJELP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IHIEOKHJELP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHIEOKHJELP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHIEOKHJELP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IHIEOKHJELP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IHIEOKHJELP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IHIEOKHJELP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityHipplenOutfitTypeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityHipplenOutfitTypeRow*))((::PBYTE)hIl2Cpp + IHIEOKHJELP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
