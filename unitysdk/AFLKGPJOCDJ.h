#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesEffectSourceRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AFLKGPJOCDJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCB72D0)
#define AFLKGPJOCDJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCB7850)
#define AFLKGPJOCDJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCB7440)
#define AFLKGPJOCDJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCB6D80)
#define AFLKGPJOCDJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCB7010)
#define AFLKGPJOCDJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCB74E0)
#define AFLKGPJOCDJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCB7530)
#define AFLKGPJOCDJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCB7310)
#define AFLKGPJOCDJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCB6FB0)
#define AFLKGPJOCDJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCB7140)
#define AFLKGPJOCDJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCB73A0)
#define AFLKGPJOCDJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCB6D00)

	class AFLKGPJOCDJ : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesEffectSourceRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesEffectSourceRow*>**)UnitySDK::FromName("", "AFLKGPJOCDJ")->GetStaticField(0x37C50);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "AFLKGPJOCDJ")->GetStaticField(0x37C58);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AFLKGPJOCDJ")->GetStaticField(0x37C60);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AFLKGPJOCDJ")->GetStaticField(0xBE20);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AFLKGPJOCDJ")->GetStaticField(0xBE21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFLKGPJOCDJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesEffectSourceRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesEffectSourceRow*>*(*)())((::PBYTE)hIl2Cpp + AFLKGPJOCDJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AFLKGPJOCDJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesEffectSourceRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesEffectSourceRow*>(*)())((::PBYTE)hIl2Cpp + AFLKGPJOCDJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlanetFesEffectSourceRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlanetFesEffectSourceRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AFLKGPJOCDJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AFLKGPJOCDJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFLKGPJOCDJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFLKGPJOCDJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AFLKGPJOCDJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AFLKGPJOCDJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AFLKGPJOCDJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlanetFesEffectSourceRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlanetFesEffectSourceRow*))((::PBYTE)hIl2Cpp + AFLKGPJOCDJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
