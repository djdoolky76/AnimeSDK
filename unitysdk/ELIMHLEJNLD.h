#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
class CEKGGHILKPC;
class FCOEMCEDLNL;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace ZLinq { class ValueEnumerable; }

#define ELIMHLEJNLD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDA36E0)
#define ELIMHLEJNLD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDA3CB0)
#define ELIMHLEJNLD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDA3850)
#define ELIMHLEJNLD_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1CDA34D0)
#define ELIMHLEJNLD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDA30D0)
#define ELIMHLEJNLD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDA3360)
#define ELIMHLEJNLD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDA38F0)
#define ELIMHLEJNLD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDA3940)
#define ELIMHLEJNLD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDA3720)
#define ELIMHLEJNLD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDA3300)
#define ELIMHLEJNLD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDA3550)
#define ELIMHLEJNLD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDA37B0)
#define ELIMHLEJNLD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDA3050)

inline static constexpr unsigned int ELIMHLEJNLD_TypeDefinitionIndex = 11573;

	class ELIMHLEJNLD : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "ELIMHLEJNLD")->GetStaticField(0xB1A0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ELIMHLEJNLD")->GetStaticField(0xB1A8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::CEKGGHILKPC*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::CEKGGHILKPC*>**)UnitySDK::FromName("", "ELIMHLEJNLD")->GetStaticField(0xB1B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ELIMHLEJNLD")->GetStaticField(0x2610);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ELIMHLEJNLD")->GetStaticField(0x2611);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELIMHLEJNLD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::CEKGGHILKPC*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::CEKGGHILKPC*>*(*)())((::PBYTE)hIl2Cpp + ELIMHLEJNLD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ELIMHLEJNLD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::CEKGGHILKPC*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::CEKGGHILKPC*>(*)())((::PBYTE)hIl2Cpp + ELIMHLEJNLD_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable* EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable*(*)())((::PBYTE)hIl2Cpp + ELIMHLEJNLD_EHAFELPCLKB_OFFSET))();
		}

		static ::CEKGGHILKPC* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::CEKGGHILKPC*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ELIMHLEJNLD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ELIMHLEJNLD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELIMHLEJNLD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELIMHLEJNLD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ELIMHLEJNLD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ELIMHLEJNLD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ELIMHLEJNLD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::CEKGGHILKPC* a1)
		{
			return ((::System::Void(*)(::CEKGGHILKPC*))((::PBYTE)hIl2Cpp + ELIMHLEJNLD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
