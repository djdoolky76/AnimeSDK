#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityDiceCombatAIGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NHKBCCOIKLG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D20FC20)
#define NHKBCCOIKLG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2101F0)
#define NHKBCCOIKLG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D20FD90)
#define NHKBCCOIKLG_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1D20FA10)
#define NHKBCCOIKLG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D20F610)
#define NHKBCCOIKLG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D20F8A0)
#define NHKBCCOIKLG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D20FE30)
#define NHKBCCOIKLG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D20FE80)
#define NHKBCCOIKLG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D20FC60)
#define NHKBCCOIKLG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D20F840)
#define NHKBCCOIKLG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D20FA90)
#define NHKBCCOIKLG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D20FCF0)
#define NHKBCCOIKLG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D20F590)

inline static constexpr unsigned int NHKBCCOIKLG_TypeDefinitionIndex = 11264;

	class NHKBCCOIKLG : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NHKBCCOIKLG")->GetStaticField(0x2E8E0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAIGroupRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAIGroupRow*>**)UnitySDK::FromName("", "NHKBCCOIKLG")->GetStaticField(0x2E8E8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "NHKBCCOIKLG")->GetStaticField(0x2E8F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NHKBCCOIKLG")->GetStaticField(0x99B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NHKBCCOIKLG")->GetStaticField(0x99B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHKBCCOIKLG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAIGroupRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAIGroupRow*>*(*)())((::PBYTE)hIl2Cpp + NHKBCCOIKLG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NHKBCCOIKLG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAIGroupRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAIGroupRow*>(*)())((::PBYTE)hIl2Cpp + NHKBCCOIKLG_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAIGroupRow*>, ::RPG::GameCore::ActivityDiceCombatAIGroupRow*> EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAIGroupRow*>, ::RPG::GameCore::ActivityDiceCombatAIGroupRow*>(*)())((::PBYTE)hIl2Cpp + NHKBCCOIKLG_EHAFELPCLKB_OFFSET))();
		}

		static ::RPG::GameCore::ActivityDiceCombatAIGroupRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityDiceCombatAIGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NHKBCCOIKLG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NHKBCCOIKLG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHKBCCOIKLG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHKBCCOIKLG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NHKBCCOIKLG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NHKBCCOIKLG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NHKBCCOIKLG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityDiceCombatAIGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityDiceCombatAIGroupRow*))((::PBYTE)hIl2Cpp + NHKBCCOIKLG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
