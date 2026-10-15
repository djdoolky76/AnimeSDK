#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestaurantEventRewardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AGMKCCNONLF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCC0AD0)
#define AGMKCCNONLF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCC10A0)
#define AGMKCCNONLF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCC0C40)
#define AGMKCCNONLF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCC0540)
#define AGMKCCNONLF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCC07D0)
#define AGMKCCNONLF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCC0CE0)
#define AGMKCCNONLF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCC0D30)
#define AGMKCCNONLF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCC0B10)
#define AGMKCCNONLF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCC0770)
#define AGMKCCNONLF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCC0940)
#define AGMKCCNONLF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCC0BA0)
#define AGMKCCNONLF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCC04C0)

inline static constexpr unsigned int AGMKCCNONLF_TypeDefinitionIndex = 11331;

	class AGMKCCNONLF : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AGMKCCNONLF")->GetStaticField(0x38750);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantEventRewardRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantEventRewardRow*>**)UnitySDK::FromName("", "AGMKCCNONLF")->GetStaticField(0x38758);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "AGMKCCNONLF")->GetStaticField(0x38760);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AGMKCCNONLF")->GetStaticField(0xC0C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AGMKCCNONLF")->GetStaticField(0xC0C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGMKCCNONLF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantEventRewardRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantEventRewardRow*>*(*)())((::PBYTE)hIl2Cpp + AGMKCCNONLF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AGMKCCNONLF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantEventRewardRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantEventRewardRow*>(*)())((::PBYTE)hIl2Cpp + AGMKCCNONLF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RestaurantEventRewardRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RestaurantEventRewardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AGMKCCNONLF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AGMKCCNONLF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGMKCCNONLF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGMKCCNONLF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AGMKCCNONLF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AGMKCCNONLF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AGMKCCNONLF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RestaurantEventRewardRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RestaurantEventRewardRow*))((::PBYTE)hIl2Cpp + AGMKCCNONLF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
