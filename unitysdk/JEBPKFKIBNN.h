#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestaurantAbilityConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JEBPKFKIBNN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CFECD90)
#define JEBPKFKIBNN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CFED2D0)
#define JEBPKFKIBNN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CFECE70)
#define JEBPKFKIBNN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CF22AF0)
#define JEBPKFKIBNN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CFECA90)
#define JEBPKFKIBNN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CFECF10)
#define JEBPKFKIBNN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CFECF60)
#define JEBPKFKIBNN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CFA8B50)
#define JEBPKFKIBNN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CFECA30)
#define JEBPKFKIBNN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CFECC00)
#define JEBPKFKIBNN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CFECDD0)
#define JEBPKFKIBNN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CFEC9B0)

inline static constexpr unsigned int JEBPKFKIBNN_TypeDefinitionIndex = 11343;

	class JEBPKFKIBNN : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JEBPKFKIBNN")->GetStaticField(0x2BBA0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantAbilityConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantAbilityConfigRow*>**)UnitySDK::FromName("", "JEBPKFKIBNN")->GetStaticField(0x2BBA8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "JEBPKFKIBNN")->GetStaticField(0x2BBB0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JEBPKFKIBNN")->GetStaticField(0x92B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JEBPKFKIBNN")->GetStaticField(0x92B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEBPKFKIBNN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantAbilityConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantAbilityConfigRow*>*(*)())((::PBYTE)hIl2Cpp + JEBPKFKIBNN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JEBPKFKIBNN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantAbilityConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantAbilityConfigRow*>(*)())((::PBYTE)hIl2Cpp + JEBPKFKIBNN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RestaurantAbilityConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RestaurantAbilityConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JEBPKFKIBNN_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JEBPKFKIBNN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEBPKFKIBNN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEBPKFKIBNN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JEBPKFKIBNN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JEBPKFKIBNN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JEBPKFKIBNN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RestaurantAbilityConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RestaurantAbilityConfigRow*))((::PBYTE)hIl2Cpp + JEBPKFKIBNN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
