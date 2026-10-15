#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestaurantFacilityRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GHJJAJMKBCK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE49810)
#define GHJJAJMKBCK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE49D90)
#define GHJJAJMKBCK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE49980)
#define GHJJAJMKBCK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE492C0)
#define GHJJAJMKBCK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE49550)
#define GHJJAJMKBCK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE49A20)
#define GHJJAJMKBCK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE49A70)
#define GHJJAJMKBCK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE49850)
#define GHJJAJMKBCK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE494F0)
#define GHJJAJMKBCK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE49680)
#define GHJJAJMKBCK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE498E0)
#define GHJJAJMKBCK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE49240)

inline static constexpr unsigned int GHJJAJMKBCK_TypeDefinitionIndex = 11338;

	class GHJJAJMKBCK : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantFacilityRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantFacilityRow*>**)UnitySDK::FromName("", "GHJJAJMKBCK")->GetStaticField(0x178D0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GHJJAJMKBCK")->GetStaticField(0x178D8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GHJJAJMKBCK")->GetStaticField(0x178E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GHJJAJMKBCK")->GetStaticField(0x5810);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GHJJAJMKBCK")->GetStaticField(0x5811);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHJJAJMKBCK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantFacilityRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantFacilityRow*>*(*)())((::PBYTE)hIl2Cpp + GHJJAJMKBCK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GHJJAJMKBCK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantFacilityRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantFacilityRow*>(*)())((::PBYTE)hIl2Cpp + GHJJAJMKBCK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RestaurantFacilityRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RestaurantFacilityRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GHJJAJMKBCK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GHJJAJMKBCK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHJJAJMKBCK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHJJAJMKBCK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GHJJAJMKBCK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GHJJAJMKBCK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GHJJAJMKBCK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RestaurantFacilityRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RestaurantFacilityRow*))((::PBYTE)hIl2Cpp + GHJJAJMKBCK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
