#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
class FCOEMCEDLNL;
class GDPGBLHPJNO;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace ZLinq { class ValueEnumerable; }

#define GGIAJBANHCC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE415C0)
#define GGIAJBANHCC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE41B40)
#define GGIAJBANHCC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE41730)
#define GGIAJBANHCC_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1CE413D0)
#define GGIAJBANHCC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE41010)
#define GGIAJBANHCC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE412A0)
#define GGIAJBANHCC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE417D0)
#define GGIAJBANHCC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE41820)
#define GGIAJBANHCC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE41600)
#define GGIAJBANHCC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE41240)
#define GGIAJBANHCC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE41430)
#define GGIAJBANHCC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE41690)
#define GGIAJBANHCC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE40F90)

	class GGIAJBANHCC : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GGIAJBANHCC")->GetStaticField(0x17470);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "GGIAJBANHCC")->GetStaticField(0x17478);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::GDPGBLHPJNO*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::GDPGBLHPJNO*>**)UnitySDK::FromName("", "GGIAJBANHCC")->GetStaticField(0x17480);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GGIAJBANHCC")->GetStaticField(0x5770);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GGIAJBANHCC")->GetStaticField(0x5771);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGIAJBANHCC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::GDPGBLHPJNO*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::GDPGBLHPJNO*>*(*)())((::PBYTE)hIl2Cpp + GGIAJBANHCC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GGIAJBANHCC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::GDPGBLHPJNO*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::GDPGBLHPJNO*>(*)())((::PBYTE)hIl2Cpp + GGIAJBANHCC_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable* EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable*(*)())((::PBYTE)hIl2Cpp + GGIAJBANHCC_EHAFELPCLKB_OFFSET))();
		}

		static ::GDPGBLHPJNO* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::GDPGBLHPJNO*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GGIAJBANHCC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GGIAJBANHCC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGIAJBANHCC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGIAJBANHCC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GGIAJBANHCC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GGIAJBANHCC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GGIAJBANHCC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::GDPGBLHPJNO* a1)
		{
			return ((::System::Void(*)(::GDPGBLHPJNO*))((::PBYTE)hIl2Cpp + GGIAJBANHCC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
