#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestaurantCustomerRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CAAJLJILNNA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D9FD920)
#define CAAJLJILNNA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9FDEA0)
#define CAAJLJILNNA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D9FDA90)
#define CAAJLJILNNA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D9FD3D0)
#define CAAJLJILNNA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D9FD660)
#define CAAJLJILNNA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D9FDB30)
#define CAAJLJILNNA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D9FDB80)
#define CAAJLJILNNA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D9FD960)
#define CAAJLJILNNA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D9FD600)
#define CAAJLJILNNA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D9FD790)
#define CAAJLJILNNA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D9FD9F0)
#define CAAJLJILNNA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D9FD350)

	class CAAJLJILNNA : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CAAJLJILNNA")->GetStaticField(0x3A4B0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantCustomerRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantCustomerRow*>**)UnitySDK::FromName("", "CAAJLJILNNA")->GetStaticField(0x3A4B8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "CAAJLJILNNA")->GetStaticField(0x3A4C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CAAJLJILNNA")->GetStaticField(0xC6C0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CAAJLJILNNA")->GetStaticField(0xC6C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAAJLJILNNA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantCustomerRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantCustomerRow*>*(*)())((::PBYTE)hIl2Cpp + CAAJLJILNNA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CAAJLJILNNA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantCustomerRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantCustomerRow*>(*)())((::PBYTE)hIl2Cpp + CAAJLJILNNA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RestaurantCustomerRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RestaurantCustomerRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CAAJLJILNNA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CAAJLJILNNA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAAJLJILNNA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAAJLJILNNA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CAAJLJILNNA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CAAJLJILNNA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CAAJLJILNNA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RestaurantCustomerRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RestaurantCustomerRow*))((::PBYTE)hIl2Cpp + CAAJLJILNNA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
