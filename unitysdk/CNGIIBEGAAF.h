#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RelicMainAffixBaseValueRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CNGIIBEGAAF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DC85980)
#define CNGIIBEGAAF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC85F50)
#define CNGIIBEGAAF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DC85AF0)
#define CNGIIBEGAAF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DC853F0)
#define CNGIIBEGAAF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DC85680)
#define CNGIIBEGAAF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DC85B90)
#define CNGIIBEGAAF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DC85BE0)
#define CNGIIBEGAAF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DC859C0)
#define CNGIIBEGAAF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DC85620)
#define CNGIIBEGAAF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DC857F0)
#define CNGIIBEGAAF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DC85A50)
#define CNGIIBEGAAF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DC85370)

inline static constexpr unsigned int CNGIIBEGAAF_TypeDefinitionIndex = 10878;

	class CNGIIBEGAAF : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CNGIIBEGAAF")->GetStaticField(0x3F390);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicMainAffixBaseValueRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicMainAffixBaseValueRow*>**)UnitySDK::FromName("", "CNGIIBEGAAF")->GetStaticField(0x3F398);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CNGIIBEGAAF")->GetStaticField(0x3F3A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CNGIIBEGAAF")->GetStaticField(0xEE60);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CNGIIBEGAAF")->GetStaticField(0xEE61);
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
