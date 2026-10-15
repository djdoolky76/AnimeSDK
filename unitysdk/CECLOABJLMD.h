#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesQuestGroupRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CECLOABJLMD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DA12CD0)
#define CECLOABJLMD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA132A0)
#define CECLOABJLMD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DA12E40)
#define CECLOABJLMD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DA12740)
#define CECLOABJLMD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DA129D0)
#define CECLOABJLMD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DA12EE0)
#define CECLOABJLMD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DA12F30)
#define CECLOABJLMD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DA12D10)
#define CECLOABJLMD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DA12970)
#define CECLOABJLMD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DA12B40)
#define CECLOABJLMD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DA12DA0)
#define CECLOABJLMD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DA126C0)

	class CECLOABJLMD : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesQuestGroupRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesQuestGroupRow*>**)UnitySDK::FromName("", "CECLOABJLMD")->GetStaticField(0x3BFB0);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "CECLOABJLMD")->GetStaticField(0x3BFB8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CECLOABJLMD")->GetStaticField(0x3BFC0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CECLOABJLMD")->GetStaticField(0xCCA0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CECLOABJLMD")->GetStaticField(0xCCA1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CECLOABJLMD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesQuestGroupRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesQuestGroupRow*>*(*)())((::PBYTE)hIl2Cpp + CECLOABJLMD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CECLOABJLMD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesQuestGroupRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesQuestGroupRow*>(*)())((::PBYTE)hIl2Cpp + CECLOABJLMD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlanetFesQuestGroupRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlanetFesQuestGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CECLOABJLMD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CECLOABJLMD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CECLOABJLMD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CECLOABJLMD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CECLOABJLMD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CECLOABJLMD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CECLOABJLMD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlanetFesQuestGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlanetFesQuestGroupRow*))((::PBYTE)hIl2Cpp + CECLOABJLMD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
