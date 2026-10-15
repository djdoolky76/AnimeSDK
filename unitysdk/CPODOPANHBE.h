#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestaurantShopItemRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CPODOPANHBE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DCC4770)
#define CPODOPANHBE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCC4D40)
#define CPODOPANHBE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DCC48E0)
#define CPODOPANHBE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DCC41E0)
#define CPODOPANHBE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DCC4470)
#define CPODOPANHBE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DCC4980)
#define CPODOPANHBE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DCC49D0)
#define CPODOPANHBE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DCC47B0)
#define CPODOPANHBE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DCC4410)
#define CPODOPANHBE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DCC45E0)
#define CPODOPANHBE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DCC4840)
#define CPODOPANHBE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DCC4160)

	class CPODOPANHBE : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CPODOPANHBE")->GetStaticField(0x463B0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantShopItemRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantShopItemRow*>**)UnitySDK::FromName("", "CPODOPANHBE")->GetStaticField(0x463B8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "CPODOPANHBE")->GetStaticField(0x463C0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CPODOPANHBE")->GetStaticField(0x10C40);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CPODOPANHBE")->GetStaticField(0x10C41);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPODOPANHBE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantShopItemRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantShopItemRow*>*(*)())((::PBYTE)hIl2Cpp + CPODOPANHBE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CPODOPANHBE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantShopItemRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantShopItemRow*>(*)())((::PBYTE)hIl2Cpp + CPODOPANHBE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RestaurantShopItemRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RestaurantShopItemRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CPODOPANHBE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CPODOPANHBE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPODOPANHBE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPODOPANHBE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CPODOPANHBE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CPODOPANHBE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CPODOPANHBE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RestaurantShopItemRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RestaurantShopItemRow*))((::PBYTE)hIl2Cpp + CPODOPANHBE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
