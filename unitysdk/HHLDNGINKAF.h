#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MuseumTutorialTalkRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HHLDNGINKAF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEAB5F0)
#define HHLDNGINKAF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEABB70)
#define HHLDNGINKAF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEAB760)
#define HHLDNGINKAF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEAB0A0)
#define HHLDNGINKAF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEAB330)
#define HHLDNGINKAF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEAB800)
#define HHLDNGINKAF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEAB850)
#define HHLDNGINKAF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEAB630)
#define HHLDNGINKAF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEAB2D0)
#define HHLDNGINKAF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEAB4A0)
#define HHLDNGINKAF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEAB6C0)
#define HHLDNGINKAF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEAB020)

	class HHLDNGINKAF : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "HHLDNGINKAF")->GetStaticField(0x1DE20);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumTutorialTalkRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumTutorialTalkRow*>**)UnitySDK::FromName("", "HHLDNGINKAF")->GetStaticField(0x1DE28);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HHLDNGINKAF")->GetStaticField(0x1DE30);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HHLDNGINKAF")->GetStaticField(0x6CC0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HHLDNGINKAF")->GetStaticField(0x6CC1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHLDNGINKAF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumTutorialTalkRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumTutorialTalkRow*>*(*)())((::PBYTE)hIl2Cpp + HHLDNGINKAF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HHLDNGINKAF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumTutorialTalkRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumTutorialTalkRow*>(*)())((::PBYTE)hIl2Cpp + HHLDNGINKAF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MuseumTutorialTalkRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MuseumTutorialTalkRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HHLDNGINKAF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HHLDNGINKAF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHLDNGINKAF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHLDNGINKAF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HHLDNGINKAF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HHLDNGINKAF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HHLDNGINKAF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MuseumTutorialTalkRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MuseumTutorialTalkRow*))((::PBYTE)hIl2Cpp + HHLDNGINKAF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
