#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestaurantProductConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JIHPCMNNNLG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D035240)
#define JIHPCMNNNLG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0357C0)
#define JIHPCMNNNLG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0353B0)
#define JIHPCMNNNLG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D034D30)
#define JIHPCMNNNLG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D034FC0)
#define JIHPCMNNNLG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D035450)
#define JIHPCMNNNLG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0354A0)
#define JIHPCMNNNLG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D035280)
#define JIHPCMNNNLG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D034F60)
#define JIHPCMNNNLG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0350F0)
#define JIHPCMNNNLG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D035310)
#define JIHPCMNNNLG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D034CB0)

inline static constexpr unsigned int JIHPCMNNNLG_TypeDefinitionIndex = 11378;

	class JIHPCMNNNLG : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "JIHPCMNNNLG")->GetStaticField(0x2E7D0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JIHPCMNNNLG")->GetStaticField(0x2E7D8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantProductConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantProductConfigRow*>**)UnitySDK::FromName("", "JIHPCMNNNLG")->GetStaticField(0x2E7E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JIHPCMNNNLG")->GetStaticField(0x9970);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JIHPCMNNNLG")->GetStaticField(0x9971);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIHPCMNNNLG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantProductConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantProductConfigRow*>*(*)())((::PBYTE)hIl2Cpp + JIHPCMNNNLG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JIHPCMNNNLG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantProductConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantProductConfigRow*>(*)())((::PBYTE)hIl2Cpp + JIHPCMNNNLG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RestaurantProductConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RestaurantProductConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JIHPCMNNNLG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JIHPCMNNNLG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIHPCMNNNLG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIHPCMNNNLG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JIHPCMNNNLG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JIHPCMNNNLG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JIHPCMNNNLG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RestaurantProductConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RestaurantProductConfigRow*))((::PBYTE)hIl2Cpp + JIHPCMNNNLG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
