#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RechargeConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HCNPACNGMJK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E9E3520)
#define HCNPACNGMJK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9E3AF0)
#define HCNPACNGMJK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E9E3690)
#define HCNPACNGMJK_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1E9E32F0)
#define HCNPACNGMJK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E9E2EF0)
#define HCNPACNGMJK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E9E3180)
#define HCNPACNGMJK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E9E3730)
#define HCNPACNGMJK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E9E3780)
#define HCNPACNGMJK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E9E3560)
#define HCNPACNGMJK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E9E3120)
#define HCNPACNGMJK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E9E3370)
#define HCNPACNGMJK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E9E35F0)
#define HCNPACNGMJK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E9E2E70)

inline static constexpr unsigned int HCNPACNGMJK_TypeDefinitionIndex = 14769;

	class HCNPACNGMJK : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RechargeConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RechargeConfigRow*>**)UnitySDK::FromName("", "HCNPACNGMJK")->GetStaticField(0x141D0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HCNPACNGMJK")->GetStaticField(0x141D8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HCNPACNGMJK")->GetStaticField(0x141E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HCNPACNGMJK")->GetStaticField(0x4780);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HCNPACNGMJK")->GetStaticField(0x4781);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCNPACNGMJK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RechargeConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RechargeConfigRow*>*(*)())((::PBYTE)hIl2Cpp + HCNPACNGMJK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HCNPACNGMJK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RechargeConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RechargeConfigRow*>(*)())((::PBYTE)hIl2Cpp + HCNPACNGMJK_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RechargeConfigRow*>, ::RPG::GameCore::RechargeConfigRow*> EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RechargeConfigRow*>, ::RPG::GameCore::RechargeConfigRow*>(*)())((::PBYTE)hIl2Cpp + HCNPACNGMJK_EHAFELPCLKB_OFFSET))();
		}

		static ::RPG::GameCore::RechargeConfigRow* LMBKNCAIDLC(::System::String* a1)
		{
			return ((::RPG::GameCore::RechargeConfigRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + HCNPACNGMJK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HCNPACNGMJK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCNPACNGMJK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCNPACNGMJK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HCNPACNGMJK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HCNPACNGMJK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HCNPACNGMJK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RechargeConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RechargeConfigRow*))((::PBYTE)hIl2Cpp + HCNPACNGMJK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
