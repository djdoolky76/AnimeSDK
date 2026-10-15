#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
class FCOEMCEDLNL;
class HCCOOHINKPN;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace ZLinq { class ValueEnumerable; }

#define HBINGDGEPMM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE86F70)
#define HBINGDGEPMM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE87740)
#define HBINGDGEPMM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE870E0)
#define HBINGDGEPMM_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1CE86D60)
#define HBINGDGEPMM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE86960)
#define HBINGDGEPMM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE86BF0)
#define HBINGDGEPMM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE87180)
#define HBINGDGEPMM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE873D0)
#define HBINGDGEPMM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE86FB0)
#define HBINGDGEPMM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE86B90)
#define HBINGDGEPMM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE86DE0)
#define HBINGDGEPMM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE87040)
#define HBINGDGEPMM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE868E0)

	class HBINGDGEPMM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HCCOOHINKPN*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HCCOOHINKPN*>**)UnitySDK::FromName("", "HBINGDGEPMM")->GetStaticField(0x1B830);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "HBINGDGEPMM")->GetStaticField(0x1B838);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HBINGDGEPMM")->GetStaticField(0x1B840);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HBINGDGEPMM")->GetStaticField(0x6340);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HBINGDGEPMM")->GetStaticField(0x6341);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBINGDGEPMM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HCCOOHINKPN*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HCCOOHINKPN*>*(*)())((::PBYTE)hIl2Cpp + HBINGDGEPMM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HBINGDGEPMM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::HCCOOHINKPN*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::HCCOOHINKPN*>(*)())((::PBYTE)hIl2Cpp + HBINGDGEPMM_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable* EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable*(*)())((::PBYTE)hIl2Cpp + HBINGDGEPMM_EHAFELPCLKB_OFFSET))();
		}

		static ::HCCOOHINKPN* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::HCCOOHINKPN*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HBINGDGEPMM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HBINGDGEPMM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBINGDGEPMM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBINGDGEPMM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HBINGDGEPMM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HBINGDGEPMM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HBINGDGEPMM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::HCCOOHINKPN* a1)
		{
			return ((::System::Void(*)(::HCCOOHINKPN*))((::PBYTE)hIl2Cpp + HBINGDGEPMM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
