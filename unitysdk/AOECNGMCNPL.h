#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityDiceCombatSpecialRuleRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace ZLinq { class ValueEnumerable; }

#define AOECNGMCNPL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCE9C60)
#define AOECNGMCNPL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCEA230)
#define AOECNGMCNPL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCE9DD0)
#define AOECNGMCNPL_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1CCE9A50)
#define AOECNGMCNPL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCE9650)
#define AOECNGMCNPL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCE98E0)
#define AOECNGMCNPL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCE9E70)
#define AOECNGMCNPL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCE9EC0)
#define AOECNGMCNPL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCE9CA0)
#define AOECNGMCNPL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCE9880)
#define AOECNGMCNPL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCE9AD0)
#define AOECNGMCNPL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCE9D30)
#define AOECNGMCNPL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCE95D0)

inline static constexpr unsigned int AOECNGMCNPL_TypeDefinitionIndex = 11271;

	class AOECNGMCNPL : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "AOECNGMCNPL")->GetStaticField(0x3C7E0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatSpecialRuleRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatSpecialRuleRow*>**)UnitySDK::FromName("", "AOECNGMCNPL")->GetStaticField(0x3C7E8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AOECNGMCNPL")->GetStaticField(0x3C7F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AOECNGMCNPL")->GetStaticField(0xCF10);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AOECNGMCNPL")->GetStaticField(0xCF11);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOECNGMCNPL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatSpecialRuleRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatSpecialRuleRow*>*(*)())((::PBYTE)hIl2Cpp + AOECNGMCNPL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AOECNGMCNPL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatSpecialRuleRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatSpecialRuleRow*>(*)())((::PBYTE)hIl2Cpp + AOECNGMCNPL_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable* EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable*(*)())((::PBYTE)hIl2Cpp + AOECNGMCNPL_EHAFELPCLKB_OFFSET))();
		}

		static ::RPG::GameCore::ActivityDiceCombatSpecialRuleRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityDiceCombatSpecialRuleRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AOECNGMCNPL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AOECNGMCNPL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOECNGMCNPL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOECNGMCNPL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AOECNGMCNPL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AOECNGMCNPL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AOECNGMCNPL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityDiceCombatSpecialRuleRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityDiceCombatSpecialRuleRow*))((::PBYTE)hIl2Cpp + AOECNGMCNPL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
