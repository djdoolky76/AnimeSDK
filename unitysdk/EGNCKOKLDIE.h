#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"
class FCOEMCEDLNL;
class IGKLKGGKAJO;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EGNCKOKLDIE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD51030)
#define EGNCKOKLDIE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD51600)
#define EGNCKOKLDIE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD511A0)
#define EGNCKOKLDIE_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1CD50E20)
#define EGNCKOKLDIE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD50A20)
#define EGNCKOKLDIE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD50CB0)
#define EGNCKOKLDIE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD51240)
#define EGNCKOKLDIE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD51290)
#define EGNCKOKLDIE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD51070)
#define EGNCKOKLDIE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD50C50)
#define EGNCKOKLDIE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD50EA0)
#define EGNCKOKLDIE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD51100)
#define EGNCKOKLDIE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD509A0)

inline static constexpr unsigned int EGNCKOKLDIE_TypeDefinitionIndex = 11239;

	class EGNCKOKLDIE : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EGNCKOKLDIE")->GetStaticField(0x4D540);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EGNCKOKLDIE")->GetStaticField(0x4D548);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::IGKLKGGKAJO*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::IGKLKGGKAJO*>**)UnitySDK::FromName("", "EGNCKOKLDIE")->GetStaticField(0x4D550);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EGNCKOKLDIE")->GetStaticField(0x11A80);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EGNCKOKLDIE")->GetStaticField(0x11A81);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGNCKOKLDIE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::IGKLKGGKAJO*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::IGKLKGGKAJO*>*(*)())((::PBYTE)hIl2Cpp + EGNCKOKLDIE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EGNCKOKLDIE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::IGKLKGGKAJO*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::IGKLKGGKAJO*>(*)())((::PBYTE)hIl2Cpp + EGNCKOKLDIE_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::IGKLKGGKAJO*>, ::IGKLKGGKAJO*> EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::IGKLKGGKAJO*>, ::IGKLKGGKAJO*>(*)())((::PBYTE)hIl2Cpp + EGNCKOKLDIE_EHAFELPCLKB_OFFSET))();
		}

		static ::IGKLKGGKAJO* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::IGKLKGGKAJO*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EGNCKOKLDIE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EGNCKOKLDIE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGNCKOKLDIE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGNCKOKLDIE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EGNCKOKLDIE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EGNCKOKLDIE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EGNCKOKLDIE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::IGKLKGGKAJO* a1)
		{
			return ((::System::Void(*)(::IGKLKGGKAJO*))((::PBYTE)hIl2Cpp + EGNCKOKLDIE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
