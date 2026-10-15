#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class IEPCGBKKCHB;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FIOKBPKCINB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDF83D0)
#define FIOKBPKCINB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDF89A0)
#define FIOKBPKCINB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDF8540)
#define FIOKBPKCINB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDF7E40)
#define FIOKBPKCINB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDF80D0)
#define FIOKBPKCINB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDF85E0)
#define FIOKBPKCINB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDF8630)
#define FIOKBPKCINB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDF8410)
#define FIOKBPKCINB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDF8070)
#define FIOKBPKCINB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDF8240)
#define FIOKBPKCINB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDF84A0)
#define FIOKBPKCINB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDF7DC0)

inline static constexpr unsigned int FIOKBPKCINB_TypeDefinitionIndex = 14448;

	class FIOKBPKCINB : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FIOKBPKCINB")->GetStaticField(0x13DD0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::IEPCGBKKCHB*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::IEPCGBKKCHB*>**)UnitySDK::FromName("", "FIOKBPKCINB")->GetStaticField(0x13DD8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FIOKBPKCINB")->GetStaticField(0x13DE0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FIOKBPKCINB")->GetStaticField(0x4520);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FIOKBPKCINB")->GetStaticField(0x4521);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIOKBPKCINB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::IEPCGBKKCHB*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::IEPCGBKKCHB*>*(*)())((::PBYTE)hIl2Cpp + FIOKBPKCINB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FIOKBPKCINB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::IEPCGBKKCHB*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::IEPCGBKKCHB*>(*)())((::PBYTE)hIl2Cpp + FIOKBPKCINB_FPHGMAMDFHE_OFFSET))();
		}

		static ::IEPCGBKKCHB* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::IEPCGBKKCHB*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FIOKBPKCINB_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FIOKBPKCINB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIOKBPKCINB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIOKBPKCINB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FIOKBPKCINB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FIOKBPKCINB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FIOKBPKCINB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::IEPCGBKKCHB* a1)
		{
			return ((::System::Void(*)(::IEPCGBKKCHB*))((::PBYTE)hIl2Cpp + FIOKBPKCINB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
