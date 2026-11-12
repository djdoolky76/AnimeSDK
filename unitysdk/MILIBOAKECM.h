#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityDiceCombatGoodsUnlockTipsRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MILIBOAKECM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E3B4E90)
#define MILIBOAKECM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3B5460)
#define MILIBOAKECM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E3B5000)
#define MILIBOAKECM_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1E3B4C80)
#define MILIBOAKECM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E3B4880)
#define MILIBOAKECM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E3B4B10)
#define MILIBOAKECM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E3B50A0)
#define MILIBOAKECM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E3B50F0)
#define MILIBOAKECM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E3B4ED0)
#define MILIBOAKECM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E3B4AB0)
#define MILIBOAKECM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E3B4D00)
#define MILIBOAKECM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E3B4F60)
#define MILIBOAKECM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E3B4800)

inline static constexpr unsigned int MILIBOAKECM_TypeDefinitionIndex = 11301;

	class MILIBOAKECM : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MILIBOAKECM")->GetStaticField(0x3FE10);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MILIBOAKECM")->GetStaticField(0x3FE18);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatGoodsUnlockTipsRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatGoodsUnlockTipsRow*>**)UnitySDK::FromName("", "MILIBOAKECM")->GetStaticField(0x3FE20);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MILIBOAKECM")->GetStaticField(0xDB70);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MILIBOAKECM")->GetStaticField(0xDB71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MILIBOAKECM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatGoodsUnlockTipsRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatGoodsUnlockTipsRow*>*(*)())((::PBYTE)hIl2Cpp + MILIBOAKECM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MILIBOAKECM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatGoodsUnlockTipsRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatGoodsUnlockTipsRow*>(*)())((::PBYTE)hIl2Cpp + MILIBOAKECM_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatGoodsUnlockTipsRow*>, ::RPG::GameCore::ActivityDiceCombatGoodsUnlockTipsRow*> EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatGoodsUnlockTipsRow*>, ::RPG::GameCore::ActivityDiceCombatGoodsUnlockTipsRow*>(*)())((::PBYTE)hIl2Cpp + MILIBOAKECM_EHAFELPCLKB_OFFSET))();
		}

		static ::RPG::GameCore::ActivityDiceCombatGoodsUnlockTipsRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityDiceCombatGoodsUnlockTipsRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MILIBOAKECM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MILIBOAKECM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MILIBOAKECM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MILIBOAKECM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MILIBOAKECM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MILIBOAKECM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MILIBOAKECM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityDiceCombatGoodsUnlockTipsRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityDiceCombatGoodsUnlockTipsRow*))((::PBYTE)hIl2Cpp + MILIBOAKECM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
