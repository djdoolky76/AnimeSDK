#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightSeasonPortalConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AGLOEPHHKEP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CC91BF0)
#define AGLOEPHHKEP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC921B0)
#define AGLOEPHHKEP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CC91D60)
#define AGLOEPHHKEP_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1CC919C0)
#define AGLOEPHHKEP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CC91600)
#define AGLOEPHHKEP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CC91890)
#define AGLOEPHHKEP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CC91E00)
#define AGLOEPHHKEP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CC91E50)
#define AGLOEPHHKEP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CC91C30)
#define AGLOEPHHKEP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CC91830)
#define AGLOEPHHKEP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CC91A20)
#define AGLOEPHHKEP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CC91CC0)
#define AGLOEPHHKEP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CC91580)

inline static constexpr unsigned int AGLOEPHHKEP_TypeDefinitionIndex = 13634;

	class AGLOEPHHKEP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonPortalConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonPortalConfigRow*>**)UnitySDK::FromName("", "AGLOEPHHKEP")->GetStaticField(0x3F3B0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AGLOEPHHKEP")->GetStaticField(0x3F3B8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "AGLOEPHHKEP")->GetStaticField(0x3F3C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AGLOEPHHKEP")->GetStaticField(0xEE70);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AGLOEPHHKEP")->GetStaticField(0xEE71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGLOEPHHKEP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonPortalConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonPortalConfigRow*>*(*)())((::PBYTE)hIl2Cpp + AGLOEPHHKEP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AGLOEPHHKEP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonPortalConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonPortalConfigRow*>(*)())((::PBYTE)hIl2Cpp + AGLOEPHHKEP_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonPortalConfigRow*>, ::RPG::GameCore::GridFightSeasonPortalConfigRow*> EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonPortalConfigRow*>, ::RPG::GameCore::GridFightSeasonPortalConfigRow*>(*)())((::PBYTE)hIl2Cpp + AGLOEPHHKEP_EHAFELPCLKB_OFFSET))();
		}

		static ::RPG::GameCore::GridFightSeasonPortalConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GridFightSeasonPortalConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AGLOEPHHKEP_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AGLOEPHHKEP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGLOEPHHKEP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGLOEPHHKEP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AGLOEPHHKEP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AGLOEPHHKEP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AGLOEPHHKEP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightSeasonPortalConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightSeasonPortalConfigRow*))((::PBYTE)hIl2Cpp + AGLOEPHHKEP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
