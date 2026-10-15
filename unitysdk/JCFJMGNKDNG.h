#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestaurantFieldConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JCFJMGNKDNG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CFE9B60)
#define JCFJMGNKDNG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CFEA050)
#define JCFJMGNKDNG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CFE9C40)
#define JCFJMGNKDNG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CF22D20)
#define JCFJMGNKDNG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CFE98E0)
#define JCFJMGNKDNG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CFE9CE0)
#define JCFJMGNKDNG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CFE9D30)
#define JCFJMGNKDNG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CFA8BE0)
#define JCFJMGNKDNG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CFE9880)
#define JCFJMGNKDNG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CFE9A10)
#define JCFJMGNKDNG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CFE9BA0)
#define JCFJMGNKDNG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CFE9800)

inline static constexpr unsigned int JCFJMGNKDNG_TypeDefinitionIndex = 11370;

	class JCFJMGNKDNG : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "JCFJMGNKDNG")->GetStaticField(0x2BB30);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JCFJMGNKDNG")->GetStaticField(0x2BB38);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantFieldConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantFieldConfigRow*>**)UnitySDK::FromName("", "JCFJMGNKDNG")->GetStaticField(0x2BB40);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JCFJMGNKDNG")->GetStaticField(0x9280);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JCFJMGNKDNG")->GetStaticField(0x9281);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCFJMGNKDNG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantFieldConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantFieldConfigRow*>*(*)())((::PBYTE)hIl2Cpp + JCFJMGNKDNG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JCFJMGNKDNG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantFieldConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantFieldConfigRow*>(*)())((::PBYTE)hIl2Cpp + JCFJMGNKDNG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RestaurantFieldConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RestaurantFieldConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JCFJMGNKDNG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JCFJMGNKDNG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCFJMGNKDNG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCFJMGNKDNG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JCFJMGNKDNG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JCFJMGNKDNG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JCFJMGNKDNG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RestaurantFieldConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RestaurantFieldConfigRow*))((::PBYTE)hIl2Cpp + JCFJMGNKDNG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
