#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"
class FCOEMCEDLNL;
class MMCJMOHNKCB;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EPIMNBGBAHG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD90910)
#define EPIMNBGBAHG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD90E90)
#define EPIMNBGBAHG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD90A80)
#define EPIMNBGBAHG_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1CD90740)
#define EPIMNBGBAHG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD90380)
#define EPIMNBGBAHG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD90610)
#define EPIMNBGBAHG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD90B20)
#define EPIMNBGBAHG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD90B70)
#define EPIMNBGBAHG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD90950)
#define EPIMNBGBAHG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD905B0)
#define EPIMNBGBAHG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD907C0)
#define EPIMNBGBAHG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD909E0)
#define EPIMNBGBAHG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD90300)

inline static constexpr unsigned int EPIMNBGBAHG_TypeDefinitionIndex = 15062;

	class EPIMNBGBAHG : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EPIMNBGBAHG")->GetStaticField(0xE8D0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MMCJMOHNKCB*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MMCJMOHNKCB*>**)UnitySDK::FromName("", "EPIMNBGBAHG")->GetStaticField(0xE8D8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EPIMNBGBAHG")->GetStaticField(0xE8E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EPIMNBGBAHG")->GetStaticField(0x2F60);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EPIMNBGBAHG")->GetStaticField(0x2F61);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPIMNBGBAHG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MMCJMOHNKCB*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MMCJMOHNKCB*>*(*)())((::PBYTE)hIl2Cpp + EPIMNBGBAHG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EPIMNBGBAHG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::MMCJMOHNKCB*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::MMCJMOHNKCB*>(*)())((::PBYTE)hIl2Cpp + EPIMNBGBAHG_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::MMCJMOHNKCB*>, ::MMCJMOHNKCB*> EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::MMCJMOHNKCB*>, ::MMCJMOHNKCB*>(*)())((::PBYTE)hIl2Cpp + EPIMNBGBAHG_EHAFELPCLKB_OFFSET))();
		}

		static ::MMCJMOHNKCB* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::MMCJMOHNKCB*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EPIMNBGBAHG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EPIMNBGBAHG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPIMNBGBAHG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPIMNBGBAHG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EPIMNBGBAHG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIMNBGBAHG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EPIMNBGBAHG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::MMCJMOHNKCB* a1)
		{
			return ((::System::Void(*)(::MMCJMOHNKCB*))((::PBYTE)hIl2Cpp + EPIMNBGBAHG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
