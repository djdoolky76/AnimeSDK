#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestaurantFestivalRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LHMEGMNHKJC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0F3F00)
#define LHMEGMNHKJC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0F4480)
#define LHMEGMNHKJC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0F4070)
#define LHMEGMNHKJC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0F39F0)
#define LHMEGMNHKJC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0F3C80)
#define LHMEGMNHKJC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0F4110)
#define LHMEGMNHKJC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0F4160)
#define LHMEGMNHKJC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0F3F40)
#define LHMEGMNHKJC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0F3C20)
#define LHMEGMNHKJC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0F3DB0)
#define LHMEGMNHKJC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0F3FD0)
#define LHMEGMNHKJC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0F3970)

	class LHMEGMNHKJC : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "LHMEGMNHKJC")->GetStaticField(0x3D800);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantFestivalRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantFestivalRow*>**)UnitySDK::FromName("", "LHMEGMNHKJC")->GetStaticField(0x3D808);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LHMEGMNHKJC")->GetStaticField(0x3D810);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LHMEGMNHKJC")->GetStaticField(0xD2F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LHMEGMNHKJC")->GetStaticField(0xD2F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHMEGMNHKJC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantFestivalRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantFestivalRow*>*(*)())((::PBYTE)hIl2Cpp + LHMEGMNHKJC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LHMEGMNHKJC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantFestivalRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantFestivalRow*>(*)())((::PBYTE)hIl2Cpp + LHMEGMNHKJC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RestaurantFestivalRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RestaurantFestivalRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LHMEGMNHKJC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LHMEGMNHKJC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHMEGMNHKJC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHMEGMNHKJC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LHMEGMNHKJC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LHMEGMNHKJC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LHMEGMNHKJC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RestaurantFestivalRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RestaurantFestivalRow*))((::PBYTE)hIl2Cpp + LHMEGMNHKJC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
