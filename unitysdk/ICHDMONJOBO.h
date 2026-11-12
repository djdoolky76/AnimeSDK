#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestaurantBehaviorConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ICHDMONJOBO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E0D5720)
#define ICHDMONJOBO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0D5CA0)
#define ICHDMONJOBO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E0D5890)
#define ICHDMONJOBO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E0D51D0)
#define ICHDMONJOBO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E0D5460)
#define ICHDMONJOBO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E0D5930)
#define ICHDMONJOBO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E0D5980)
#define ICHDMONJOBO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E0D5760)
#define ICHDMONJOBO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E0D5400)
#define ICHDMONJOBO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E0D5590)
#define ICHDMONJOBO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E0D57F0)
#define ICHDMONJOBO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E0D5150)

inline static constexpr unsigned int ICHDMONJOBO_TypeDefinitionIndex = 11403;

	class ICHDMONJOBO : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantBehaviorConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantBehaviorConfigRow*>**)UnitySDK::FromName("", "ICHDMONJOBO")->GetStaticField(0x19300);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "ICHDMONJOBO")->GetStaticField(0x19308);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ICHDMONJOBO")->GetStaticField(0x19310);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ICHDMONJOBO")->GetStaticField(0x52B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ICHDMONJOBO")->GetStaticField(0x52B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICHDMONJOBO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantBehaviorConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantBehaviorConfigRow*>*(*)())((::PBYTE)hIl2Cpp + ICHDMONJOBO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ICHDMONJOBO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantBehaviorConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantBehaviorConfigRow*>(*)())((::PBYTE)hIl2Cpp + ICHDMONJOBO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RestaurantBehaviorConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RestaurantBehaviorConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ICHDMONJOBO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ICHDMONJOBO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICHDMONJOBO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICHDMONJOBO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ICHDMONJOBO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ICHDMONJOBO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ICHDMONJOBO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RestaurantBehaviorConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RestaurantBehaviorConfigRow*))((::PBYTE)hIl2Cpp + ICHDMONJOBO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
