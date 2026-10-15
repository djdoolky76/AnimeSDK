#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestaurantSpecialCustomerRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GMINNIPKIBG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE3C0A0)
#define GMINNIPKIBG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE3C620)
#define GMINNIPKIBG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE3C210)
#define GMINNIPKIBG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE3BB50)
#define GMINNIPKIBG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE3BDE0)
#define GMINNIPKIBG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE3C2B0)
#define GMINNIPKIBG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE3C300)
#define GMINNIPKIBG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE3C0E0)
#define GMINNIPKIBG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE3BD80)
#define GMINNIPKIBG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE3BF10)
#define GMINNIPKIBG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE3C170)
#define GMINNIPKIBG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE3BAD0)

inline static constexpr unsigned int GMINNIPKIBG_TypeDefinitionIndex = 11368;

	class GMINNIPKIBG : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GMINNIPKIBG")->GetStaticField(0x17720);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantSpecialCustomerRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantSpecialCustomerRow*>**)UnitySDK::FromName("", "GMINNIPKIBG")->GetStaticField(0x17728);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GMINNIPKIBG")->GetStaticField(0x17730);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GMINNIPKIBG")->GetStaticField(0x5080);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GMINNIPKIBG")->GetStaticField(0x5081);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMINNIPKIBG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantSpecialCustomerRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantSpecialCustomerRow*>*(*)())((::PBYTE)hIl2Cpp + GMINNIPKIBG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GMINNIPKIBG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantSpecialCustomerRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantSpecialCustomerRow*>(*)())((::PBYTE)hIl2Cpp + GMINNIPKIBG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RestaurantSpecialCustomerRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RestaurantSpecialCustomerRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GMINNIPKIBG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GMINNIPKIBG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMINNIPKIBG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMINNIPKIBG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GMINNIPKIBG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GMINNIPKIBG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GMINNIPKIBG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RestaurantSpecialCustomerRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RestaurantSpecialCustomerRow*))((::PBYTE)hIl2Cpp + GMINNIPKIBG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
