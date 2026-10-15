#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EOCNNALBNJD.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
class FCOEMCEDLNL;
class OGODLCGIBNC;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace ZLinq { class ValueEnumerable; }

#define IMBMAKCGIPM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CF21900)
#define IMBMAKCGIPM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF21E80)
#define IMBMAKCGIPM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CF21A70)
#define IMBMAKCGIPM_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1CF216F0)
#define IMBMAKCGIPM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CF21330)
#define IMBMAKCGIPM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CF215C0)
#define IMBMAKCGIPM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CF21B10)
#define IMBMAKCGIPM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CF21B60)
#define IMBMAKCGIPM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CF21940)
#define IMBMAKCGIPM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CF21560)
#define IMBMAKCGIPM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CF21770)
#define IMBMAKCGIPM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CF219D0)
#define IMBMAKCGIPM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CF212B0)

inline static constexpr unsigned int IMBMAKCGIPM_TypeDefinitionIndex = 14398;

	class IMBMAKCGIPM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::OGODLCGIBNC*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::OGODLCGIBNC*>**)UnitySDK::FromName("", "IMBMAKCGIPM")->GetStaticField(0x24480);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IMBMAKCGIPM")->GetStaticField(0x24488);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "IMBMAKCGIPM")->GetStaticField(0x24490);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IMBMAKCGIPM")->GetStaticField(0x7FA0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IMBMAKCGIPM")->GetStaticField(0x7FA1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMBMAKCGIPM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::OGODLCGIBNC*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::OGODLCGIBNC*>*(*)())((::PBYTE)hIl2Cpp + IMBMAKCGIPM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IMBMAKCGIPM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::OGODLCGIBNC*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::OGODLCGIBNC*>(*)())((::PBYTE)hIl2Cpp + IMBMAKCGIPM_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable* EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable*(*)())((::PBYTE)hIl2Cpp + IMBMAKCGIPM_EHAFELPCLKB_OFFSET))();
		}

		static ::OGODLCGIBNC* LMBKNCAIDLC(::EOCNNALBNJD a1)
		{
			return ((::OGODLCGIBNC*(*)(::EOCNNALBNJD))((::PBYTE)hIl2Cpp + IMBMAKCGIPM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IMBMAKCGIPM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMBMAKCGIPM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMBMAKCGIPM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IMBMAKCGIPM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IMBMAKCGIPM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IMBMAKCGIPM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::OGODLCGIBNC* a1)
		{
			return ((::System::Void(*)(::OGODLCGIBNC*))((::PBYTE)hIl2Cpp + IMBMAKCGIPM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
