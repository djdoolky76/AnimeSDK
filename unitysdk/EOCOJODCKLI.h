#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MuseumPhaseUpgradeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EOCOJODCKLI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD83FF0)
#define EOCOJODCKLI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD845B0)
#define EOCOJODCKLI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD84160)
#define EOCOJODCKLI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD83A50)
#define EOCOJODCKLI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD83CE0)
#define EOCOJODCKLI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD84200)
#define EOCOJODCKLI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD84250)
#define EOCOJODCKLI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD84030)
#define EOCOJODCKLI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD83C80)
#define EOCOJODCKLI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD83E50)
#define EOCOJODCKLI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD840C0)
#define EOCOJODCKLI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD839D0)

inline static constexpr unsigned int EOCOJODCKLI_TypeDefinitionIndex = 14217;

	class EOCOJODCKLI : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumPhaseUpgradeRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumPhaseUpgradeRow*>**)UnitySDK::FromName("", "EOCOJODCKLI")->GetStaticField(0xC2C0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EOCOJODCKLI")->GetStaticField(0xC2C8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EOCOJODCKLI")->GetStaticField(0xC2D0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EOCOJODCKLI")->GetStaticField(0x28E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EOCOJODCKLI")->GetStaticField(0x28E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOCOJODCKLI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumPhaseUpgradeRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumPhaseUpgradeRow*>*(*)())((::PBYTE)hIl2Cpp + EOCOJODCKLI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EOCOJODCKLI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumPhaseUpgradeRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumPhaseUpgradeRow*>(*)())((::PBYTE)hIl2Cpp + EOCOJODCKLI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MuseumPhaseUpgradeRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::MuseumPhaseUpgradeRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + EOCOJODCKLI_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EOCOJODCKLI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOCOJODCKLI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOCOJODCKLI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EOCOJODCKLI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EOCOJODCKLI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EOCOJODCKLI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MuseumPhaseUpgradeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MuseumPhaseUpgradeRow*))((::PBYTE)hIl2Cpp + EOCOJODCKLI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
