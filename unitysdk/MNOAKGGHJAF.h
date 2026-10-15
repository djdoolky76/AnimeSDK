#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/PlanetFesEventType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesEventRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MNOAKGGHJAF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1DB3A0)
#define MNOAKGGHJAF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1DB970)
#define MNOAKGGHJAF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1DB510)
#define MNOAKGGHJAF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1DAE10)
#define MNOAKGGHJAF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1DB0A0)
#define MNOAKGGHJAF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1DB5B0)
#define MNOAKGGHJAF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1DB600)
#define MNOAKGGHJAF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1DB3E0)
#define MNOAKGGHJAF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1DB040)
#define MNOAKGGHJAF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1DB210)
#define MNOAKGGHJAF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1DB470)
#define MNOAKGGHJAF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1DAD90)

	class MNOAKGGHJAF : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "MNOAKGGHJAF")->GetStaticField(0x2AAA0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MNOAKGGHJAF")->GetStaticField(0x2AAA8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesEventRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesEventRow*>**)UnitySDK::FromName("", "MNOAKGGHJAF")->GetStaticField(0x2AAB0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MNOAKGGHJAF")->GetStaticField(0x8600);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MNOAKGGHJAF")->GetStaticField(0x8601);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNOAKGGHJAF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesEventRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesEventRow*>*(*)())((::PBYTE)hIl2Cpp + MNOAKGGHJAF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MNOAKGGHJAF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesEventRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesEventRow*>(*)())((::PBYTE)hIl2Cpp + MNOAKGGHJAF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlanetFesEventRow* LMBKNCAIDLC(::RPG::GameCore::PlanetFesEventType a1)
		{
			return ((::RPG::GameCore::PlanetFesEventRow*(*)(::RPG::GameCore::PlanetFesEventType))((::PBYTE)hIl2Cpp + MNOAKGGHJAF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MNOAKGGHJAF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNOAKGGHJAF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNOAKGGHJAF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MNOAKGGHJAF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MNOAKGGHJAF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MNOAKGGHJAF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlanetFesEventRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlanetFesEventRow*))((::PBYTE)hIl2Cpp + MNOAKGGHJAF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
