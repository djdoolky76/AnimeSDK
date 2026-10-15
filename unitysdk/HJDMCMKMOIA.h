#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestaurantContactsConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HJDMCMKMOIA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEB5E40)
#define HJDMCMKMOIA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEB63C0)
#define HJDMCMKMOIA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEB5FB0)
#define HJDMCMKMOIA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEB58F0)
#define HJDMCMKMOIA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEB5B80)
#define HJDMCMKMOIA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEB6050)
#define HJDMCMKMOIA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEB60A0)
#define HJDMCMKMOIA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEB5E80)
#define HJDMCMKMOIA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEB5B20)
#define HJDMCMKMOIA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEB5CB0)
#define HJDMCMKMOIA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEB5F10)
#define HJDMCMKMOIA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEB5870)

inline static constexpr unsigned int HJDMCMKMOIA_TypeDefinitionIndex = 11391;

	class HJDMCMKMOIA : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantContactsConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantContactsConfigRow*>**)UnitySDK::FromName("", "HJDMCMKMOIA")->GetStaticField(0x1E9A0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HJDMCMKMOIA")->GetStaticField(0x1E9A8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HJDMCMKMOIA")->GetStaticField(0x1E9B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HJDMCMKMOIA")->GetStaticField(0x6FE0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HJDMCMKMOIA")->GetStaticField(0x6FE1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJDMCMKMOIA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantContactsConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantContactsConfigRow*>*(*)())((::PBYTE)hIl2Cpp + HJDMCMKMOIA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HJDMCMKMOIA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantContactsConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantContactsConfigRow*>(*)())((::PBYTE)hIl2Cpp + HJDMCMKMOIA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RestaurantContactsConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RestaurantContactsConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HJDMCMKMOIA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HJDMCMKMOIA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJDMCMKMOIA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJDMCMKMOIA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HJDMCMKMOIA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HJDMCMKMOIA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HJDMCMKMOIA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RestaurantContactsConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RestaurantContactsConfigRow*))((::PBYTE)hIl2Cpp + HJDMCMKMOIA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
