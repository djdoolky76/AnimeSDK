#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestaurantDailyRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HINIBHOKFMO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E826320)
#define HINIBHOKFMO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8268E0)
#define HINIBHOKFMO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E826490)
#define HINIBHOKFMO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E825DC0)
#define HINIBHOKFMO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E826050)
#define HINIBHOKFMO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E826530)
#define HINIBHOKFMO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E826580)
#define HINIBHOKFMO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E826360)
#define HINIBHOKFMO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E825FF0)
#define HINIBHOKFMO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E826180)
#define HINIBHOKFMO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E8263F0)
#define HINIBHOKFMO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E825D40)

inline static constexpr unsigned int HINIBHOKFMO_TypeDefinitionIndex = 11380;

	class HINIBHOKFMO : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HINIBHOKFMO")->GetStaticField(0x17A80);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HINIBHOKFMO")->GetStaticField(0x17A88);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantDailyRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantDailyRow*>**)UnitySDK::FromName("", "HINIBHOKFMO")->GetStaticField(0x17A90);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HINIBHOKFMO")->GetStaticField(0x5540);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HINIBHOKFMO")->GetStaticField(0x5541);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HINIBHOKFMO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantDailyRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantDailyRow*>*(*)())((::PBYTE)hIl2Cpp + HINIBHOKFMO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HINIBHOKFMO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantDailyRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantDailyRow*>(*)())((::PBYTE)hIl2Cpp + HINIBHOKFMO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RestaurantDailyRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::RestaurantDailyRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + HINIBHOKFMO_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HINIBHOKFMO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HINIBHOKFMO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HINIBHOKFMO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HINIBHOKFMO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HINIBHOKFMO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HINIBHOKFMO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RestaurantDailyRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RestaurantDailyRow*))((::PBYTE)hIl2Cpp + HINIBHOKFMO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
