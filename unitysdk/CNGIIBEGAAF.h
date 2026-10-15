#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RelicMainAffixBaseValueRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CNGIIBEGAAF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DCB31F0)
#define CNGIIBEGAAF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCB37C0)
#define CNGIIBEGAAF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DCB3360)
#define CNGIIBEGAAF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DCB2C60)
#define CNGIIBEGAAF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DCB2EF0)
#define CNGIIBEGAAF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DCB3400)
#define CNGIIBEGAAF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DCB3450)
#define CNGIIBEGAAF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DCB3230)
#define CNGIIBEGAAF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DCB2E90)
#define CNGIIBEGAAF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DCB3060)
#define CNGIIBEGAAF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DCB32C0)
#define CNGIIBEGAAF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DCB2BE0)

inline static constexpr unsigned int CNGIIBEGAAF_TypeDefinitionIndex = 10878;

	class CNGIIBEGAAF : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicMainAffixBaseValueRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicMainAffixBaseValueRow*>**)UnitySDK::FromName("", "CNGIIBEGAAF")->GetStaticField(0x44DC0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CNGIIBEGAAF")->GetStaticField(0x44DC8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "CNGIIBEGAAF")->GetStaticField(0x44DD0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CNGIIBEGAAF")->GetStaticField(0x105F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CNGIIBEGAAF")->GetStaticField(0x105F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNGIIBEGAAF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicMainAffixBaseValueRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicMainAffixBaseValueRow*>*(*)())((::PBYTE)hIl2Cpp + CNGIIBEGAAF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CNGIIBEGAAF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicMainAffixBaseValueRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicMainAffixBaseValueRow*>(*)())((::PBYTE)hIl2Cpp + CNGIIBEGAAF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RelicMainAffixBaseValueRow* LMBKNCAIDLC(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::GameCore::RelicMainAffixBaseValueRow*(*)(::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CNGIIBEGAAF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CNGIIBEGAAF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNGIIBEGAAF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNGIIBEGAAF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CNGIIBEGAAF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CNGIIBEGAAF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CNGIIBEGAAF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RelicMainAffixBaseValueRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RelicMainAffixBaseValueRow*))((::PBYTE)hIl2Cpp + CNGIIBEGAAF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
