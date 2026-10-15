#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityDiceCombatShopRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace ZLinq { class ValueEnumerable; }

#define OJBAFOGHBEO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D288700)
#define OJBAFOGHBEO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D288CD0)
#define OJBAFOGHBEO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D288870)
#define OJBAFOGHBEO_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1D2884F0)
#define OJBAFOGHBEO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2880F0)
#define OJBAFOGHBEO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D288380)
#define OJBAFOGHBEO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D288910)
#define OJBAFOGHBEO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D288960)
#define OJBAFOGHBEO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D288740)
#define OJBAFOGHBEO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D288320)
#define OJBAFOGHBEO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D288570)
#define OJBAFOGHBEO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2887D0)
#define OJBAFOGHBEO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D288070)

inline static constexpr unsigned int OJBAFOGHBEO_TypeDefinitionIndex = 11246;

	class OJBAFOGHBEO : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OJBAFOGHBEO")->GetStaticField(0x37730);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatShopRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatShopRow*>**)UnitySDK::FromName("", "OJBAFOGHBEO")->GetStaticField(0x37738);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "OJBAFOGHBEO")->GetStaticField(0x37740);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OJBAFOGHBEO")->GetStaticField(0xBCD0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OJBAFOGHBEO")->GetStaticField(0xBCD1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJBAFOGHBEO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatShopRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatShopRow*>*(*)())((::PBYTE)hIl2Cpp + OJBAFOGHBEO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OJBAFOGHBEO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatShopRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatShopRow*>(*)())((::PBYTE)hIl2Cpp + OJBAFOGHBEO_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable* EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable*(*)())((::PBYTE)hIl2Cpp + OJBAFOGHBEO_EHAFELPCLKB_OFFSET))();
		}

		static ::RPG::GameCore::ActivityDiceCombatShopRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityDiceCombatShopRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OJBAFOGHBEO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OJBAFOGHBEO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJBAFOGHBEO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJBAFOGHBEO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OJBAFOGHBEO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OJBAFOGHBEO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OJBAFOGHBEO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityDiceCombatShopRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityDiceCombatShopRow*))((::PBYTE)hIl2Cpp + OJBAFOGHBEO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
