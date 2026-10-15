#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesRecommendTeamRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ECFOLCKLIHJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD64810)
#define ECFOLCKLIHJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD64E10)
#define ECFOLCKLIHJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD64980)
#define ECFOLCKLIHJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD64240)
#define ECFOLCKLIHJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD644D0)
#define ECFOLCKLIHJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD64A20)
#define ECFOLCKLIHJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD64A70)
#define ECFOLCKLIHJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD64850)
#define ECFOLCKLIHJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD64470)
#define ECFOLCKLIHJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD64640)
#define ECFOLCKLIHJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD648E0)
#define ECFOLCKLIHJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD641C0)

	class ECFOLCKLIHJ : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "ECFOLCKLIHJ")->GetStaticField(0x53240);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ECFOLCKLIHJ")->GetStaticField(0x53248);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesRecommendTeamRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesRecommendTeamRow*>**)UnitySDK::FromName("", "ECFOLCKLIHJ")->GetStaticField(0x53250);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ECFOLCKLIHJ")->GetStaticField(0x12770);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ECFOLCKLIHJ")->GetStaticField(0x12771);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECFOLCKLIHJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesRecommendTeamRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesRecommendTeamRow*>*(*)())((::PBYTE)hIl2Cpp + ECFOLCKLIHJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ECFOLCKLIHJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesRecommendTeamRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesRecommendTeamRow*>(*)())((::PBYTE)hIl2Cpp + ECFOLCKLIHJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlanetFesRecommendTeamRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::PlanetFesRecommendTeamRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ECFOLCKLIHJ_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ECFOLCKLIHJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECFOLCKLIHJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECFOLCKLIHJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ECFOLCKLIHJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ECFOLCKLIHJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ECFOLCKLIHJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlanetFesRecommendTeamRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlanetFesRecommendTeamRow*))((::PBYTE)hIl2Cpp + ECFOLCKLIHJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
