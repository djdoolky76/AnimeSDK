#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
class BEGLIKEGPOC;
class FCOEMCEDLNL;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace ZLinq { class ValueEnumerable; }

#define CCDNENAFJCO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DA09EB0)
#define CCDNENAFJCO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA0A480)
#define CCDNENAFJCO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DA0A020)
#define CCDNENAFJCO_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1DA09CA0)
#define CCDNENAFJCO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DA098A0)
#define CCDNENAFJCO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DA09B30)
#define CCDNENAFJCO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DA0A0C0)
#define CCDNENAFJCO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DA0A110)
#define CCDNENAFJCO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DA09EF0)
#define CCDNENAFJCO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DA09AD0)
#define CCDNENAFJCO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DA09D20)
#define CCDNENAFJCO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DA09F80)
#define CCDNENAFJCO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DA09820)

	class CCDNENAFJCO : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::BEGLIKEGPOC*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::BEGLIKEGPOC*>**)UnitySDK::FromName("", "CCDNENAFJCO")->GetStaticField(0x3B860);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CCDNENAFJCO")->GetStaticField(0x3B868);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "CCDNENAFJCO")->GetStaticField(0x3B870);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CCDNENAFJCO")->GetStaticField(0xCA90);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CCDNENAFJCO")->GetStaticField(0xCA91);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCDNENAFJCO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::BEGLIKEGPOC*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::BEGLIKEGPOC*>*(*)())((::PBYTE)hIl2Cpp + CCDNENAFJCO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CCDNENAFJCO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::BEGLIKEGPOC*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::BEGLIKEGPOC*>(*)())((::PBYTE)hIl2Cpp + CCDNENAFJCO_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable* EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable*(*)())((::PBYTE)hIl2Cpp + CCDNENAFJCO_EHAFELPCLKB_OFFSET))();
		}

		static ::BEGLIKEGPOC* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::BEGLIKEGPOC*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CCDNENAFJCO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CCDNENAFJCO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCDNENAFJCO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCDNENAFJCO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CCDNENAFJCO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CCDNENAFJCO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CCDNENAFJCO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::BEGLIKEGPOC* a1)
		{
			return ((::System::Void(*)(::BEGLIKEGPOC*))((::PBYTE)hIl2Cpp + CCDNENAFJCO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
