#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestaurantSelectEventConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GAGJOPFJPDB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE1FF50)
#define GAGJOPFJPDB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE204D0)
#define GAGJOPFJPDB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE200C0)
#define GAGJOPFJPDB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE1FA40)
#define GAGJOPFJPDB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE1FCD0)
#define GAGJOPFJPDB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE20160)
#define GAGJOPFJPDB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE201B0)
#define GAGJOPFJPDB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE1FF90)
#define GAGJOPFJPDB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE1FC70)
#define GAGJOPFJPDB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE1FE00)
#define GAGJOPFJPDB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE20020)
#define GAGJOPFJPDB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE1F9C0)

	class GAGJOPFJPDB : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "GAGJOPFJPDB")->GetStaticField(0x15A30);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GAGJOPFJPDB")->GetStaticField(0x15A38);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantSelectEventConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantSelectEventConfigRow*>**)UnitySDK::FromName("", "GAGJOPFJPDB")->GetStaticField(0x15A40);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GAGJOPFJPDB")->GetStaticField(0x5260);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GAGJOPFJPDB")->GetStaticField(0x5261);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAGJOPFJPDB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantSelectEventConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantSelectEventConfigRow*>*(*)())((::PBYTE)hIl2Cpp + GAGJOPFJPDB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GAGJOPFJPDB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantSelectEventConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantSelectEventConfigRow*>(*)())((::PBYTE)hIl2Cpp + GAGJOPFJPDB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RestaurantSelectEventConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RestaurantSelectEventConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GAGJOPFJPDB_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GAGJOPFJPDB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAGJOPFJPDB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAGJOPFJPDB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GAGJOPFJPDB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GAGJOPFJPDB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GAGJOPFJPDB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RestaurantSelectEventConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RestaurantSelectEventConfigRow*))((::PBYTE)hIl2Cpp + GAGJOPFJPDB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
