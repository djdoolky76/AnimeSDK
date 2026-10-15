#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityDiceCombatShopGoodsRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MDMONOJLLMP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D14C610)
#define MDMONOJLLMP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D14CBE0)
#define MDMONOJLLMP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D14C780)
#define MDMONOJLLMP_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1D14C400)
#define MDMONOJLLMP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D14C000)
#define MDMONOJLLMP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D14C290)
#define MDMONOJLLMP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D14C820)
#define MDMONOJLLMP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D14C870)
#define MDMONOJLLMP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D14C650)
#define MDMONOJLLMP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D14C230)
#define MDMONOJLLMP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D14C480)
#define MDMONOJLLMP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D14C6E0)
#define MDMONOJLLMP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D14BF80)

inline static constexpr unsigned int MDMONOJLLMP_TypeDefinitionIndex = 11248;

	class MDMONOJLLMP : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MDMONOJLLMP")->GetStaticField(0x495A0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MDMONOJLLMP")->GetStaticField(0x495A8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatShopGoodsRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatShopGoodsRow*>**)UnitySDK::FromName("", "MDMONOJLLMP")->GetStaticField(0x495B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MDMONOJLLMP")->GetStaticField(0x11350);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MDMONOJLLMP")->GetStaticField(0x11351);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDMONOJLLMP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatShopGoodsRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatShopGoodsRow*>*(*)())((::PBYTE)hIl2Cpp + MDMONOJLLMP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MDMONOJLLMP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatShopGoodsRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatShopGoodsRow*>(*)())((::PBYTE)hIl2Cpp + MDMONOJLLMP_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatShopGoodsRow*>, ::RPG::GameCore::ActivityDiceCombatShopGoodsRow*> EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatShopGoodsRow*>, ::RPG::GameCore::ActivityDiceCombatShopGoodsRow*>(*)())((::PBYTE)hIl2Cpp + MDMONOJLLMP_EHAFELPCLKB_OFFSET))();
		}

		static ::RPG::GameCore::ActivityDiceCombatShopGoodsRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityDiceCombatShopGoodsRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MDMONOJLLMP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MDMONOJLLMP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDMONOJLLMP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDMONOJLLMP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MDMONOJLLMP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MDMONOJLLMP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MDMONOJLLMP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityDiceCombatShopGoodsRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityDiceCombatShopGoodsRow*))((::PBYTE)hIl2Cpp + MDMONOJLLMP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
