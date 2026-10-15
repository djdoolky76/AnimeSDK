#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournKeywordRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HCLCFKODKNH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE5F180)
#define HCLCFKODKNH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE5F700)
#define HCLCFKODKNH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE5F2F0)
#define HCLCFKODKNH_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1CE5EFB0)
#define HCLCFKODKNH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE5EBB0)
#define HCLCFKODKNH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE5EE40)
#define HCLCFKODKNH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE5F390)
#define HCLCFKODKNH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE5F3E0)
#define HCLCFKODKNH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE5F1C0)
#define HCLCFKODKNH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE5EDE0)
#define HCLCFKODKNH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE5F030)
#define HCLCFKODKNH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE5F250)
#define HCLCFKODKNH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE5EB30)

inline static constexpr unsigned int HCLCFKODKNH_TypeDefinitionIndex = 15012;

	class HCLCFKODKNH : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HCLCFKODKNH")->GetStaticField(0x19120);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournKeywordRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournKeywordRow*>**)UnitySDK::FromName("", "HCLCFKODKNH")->GetStaticField(0x19128);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HCLCFKODKNH")->GetStaticField(0x19130);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HCLCFKODKNH")->GetStaticField(0x5680);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HCLCFKODKNH")->GetStaticField(0x5681);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCLCFKODKNH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournKeywordRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournKeywordRow*>*(*)())((::PBYTE)hIl2Cpp + HCLCFKODKNH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HCLCFKODKNH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournKeywordRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournKeywordRow*>(*)())((::PBYTE)hIl2Cpp + HCLCFKODKNH_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournKeywordRow*>, ::RPG::GameCore::RogueTournKeywordRow*> EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournKeywordRow*>, ::RPG::GameCore::RogueTournKeywordRow*>(*)())((::PBYTE)hIl2Cpp + HCLCFKODKNH_EHAFELPCLKB_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournKeywordRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueTournKeywordRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HCLCFKODKNH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HCLCFKODKNH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCLCFKODKNH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCLCFKODKNH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HCLCFKODKNH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HCLCFKODKNH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HCLCFKODKNH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueTournKeywordRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournKeywordRow*))((::PBYTE)hIl2Cpp + HCLCFKODKNH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
