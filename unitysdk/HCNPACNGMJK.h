#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RechargeConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace ZLinq { class ValueEnumerable; }

#define HCNPACNGMJK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE8EF70)
#define HCNPACNGMJK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE8F540)
#define HCNPACNGMJK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE8F0E0)
#define HCNPACNGMJK_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1CE8ED40)
#define HCNPACNGMJK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE8E940)
#define HCNPACNGMJK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE8EBD0)
#define HCNPACNGMJK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE8F180)
#define HCNPACNGMJK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE8F1D0)
#define HCNPACNGMJK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE8EFB0)
#define HCNPACNGMJK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE8EB70)
#define HCNPACNGMJK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE8EDC0)
#define HCNPACNGMJK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE8F040)
#define HCNPACNGMJK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE8E8C0)

inline static constexpr unsigned int HCNPACNGMJK_TypeDefinitionIndex = 14613;

	class HCNPACNGMJK : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "HCNPACNGMJK")->GetStaticField(0x1BE50);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RechargeConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RechargeConfigRow*>**)UnitySDK::FromName("", "HCNPACNGMJK")->GetStaticField(0x1BE58);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HCNPACNGMJK")->GetStaticField(0x1BE60);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HCNPACNGMJK")->GetStaticField(0x6420);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HCNPACNGMJK")->GetStaticField(0x6421);
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

		static ::ZLinq::ValueEnumerable* EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable*(*)())((::PBYTE)hIl2Cpp + HCNPACNGMJK_EHAFELPCLKB_OFFSET))();
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
