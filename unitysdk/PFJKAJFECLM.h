#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"
class FCOEMCEDLNL;
class LCFOLANHJFI;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PFJKAJFECLM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2ADBE0)
#define PFJKAJFECLM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2AE1E0)
#define PFJKAJFECLM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2ADD50)
#define PFJKAJFECLM_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1D2AD990)
#define PFJKAJFECLM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2AD590)
#define PFJKAJFECLM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2AD820)
#define PFJKAJFECLM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2ADDF0)
#define PFJKAJFECLM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2ADE40)
#define PFJKAJFECLM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2ADC20)
#define PFJKAJFECLM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2AD7C0)
#define PFJKAJFECLM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2ADA10)
#define PFJKAJFECLM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2ADCB0)
#define PFJKAJFECLM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2AD510)

inline static constexpr unsigned int PFJKAJFECLM_TypeDefinitionIndex = 14405;

	class PFJKAJFECLM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LCFOLANHJFI*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LCFOLANHJFI*>**)UnitySDK::FromName("", "PFJKAJFECLM")->GetStaticField(0x4DF50);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PFJKAJFECLM")->GetStaticField(0x4DF58);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PFJKAJFECLM")->GetStaticField(0x4DF60);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PFJKAJFECLM")->GetStaticField(0x11D10);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PFJKAJFECLM")->GetStaticField(0x11D11);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFJKAJFECLM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LCFOLANHJFI*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LCFOLANHJFI*>*(*)())((::PBYTE)hIl2Cpp + PFJKAJFECLM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PFJKAJFECLM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::LCFOLANHJFI*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::LCFOLANHJFI*>(*)())((::PBYTE)hIl2Cpp + PFJKAJFECLM_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::LCFOLANHJFI*>, ::LCFOLANHJFI*> EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::LCFOLANHJFI*>, ::LCFOLANHJFI*>(*)())((::PBYTE)hIl2Cpp + PFJKAJFECLM_EHAFELPCLKB_OFFSET))();
		}

		static ::LCFOLANHJFI* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::LCFOLANHJFI*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + PFJKAJFECLM_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PFJKAJFECLM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFJKAJFECLM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFJKAJFECLM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PFJKAJFECLM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PFJKAJFECLM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PFJKAJFECLM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::LCFOLANHJFI* a1)
		{
			return ((::System::Void(*)(::LCFOLANHJFI*))((::PBYTE)hIl2Cpp + PFJKAJFECLM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
