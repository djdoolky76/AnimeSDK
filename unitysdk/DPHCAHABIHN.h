#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesCardThemeRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DPHCAHABIHN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD56810)
#define DPHCAHABIHN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD56D90)
#define DPHCAHABIHN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD56980)
#define DPHCAHABIHN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD56300)
#define DPHCAHABIHN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD56590)
#define DPHCAHABIHN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD56A20)
#define DPHCAHABIHN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD56A70)
#define DPHCAHABIHN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD56850)
#define DPHCAHABIHN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD56530)
#define DPHCAHABIHN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD566C0)
#define DPHCAHABIHN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD568E0)
#define DPHCAHABIHN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD56280)

	class DPHCAHABIHN : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "DPHCAHABIHN")->GetStaticField(0x52970);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DPHCAHABIHN")->GetStaticField(0x52978);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesCardThemeRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesCardThemeRow*>**)UnitySDK::FromName("", "DPHCAHABIHN")->GetStaticField(0x52980);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DPHCAHABIHN")->GetStaticField(0x12510);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DPHCAHABIHN")->GetStaticField(0x12511);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPHCAHABIHN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesCardThemeRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesCardThemeRow*>*(*)())((::PBYTE)hIl2Cpp + DPHCAHABIHN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DPHCAHABIHN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesCardThemeRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesCardThemeRow*>(*)())((::PBYTE)hIl2Cpp + DPHCAHABIHN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlanetFesCardThemeRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlanetFesCardThemeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DPHCAHABIHN_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DPHCAHABIHN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPHCAHABIHN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPHCAHABIHN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DPHCAHABIHN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DPHCAHABIHN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DPHCAHABIHN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlanetFesCardThemeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlanetFesCardThemeRow*))((::PBYTE)hIl2Cpp + DPHCAHABIHN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
