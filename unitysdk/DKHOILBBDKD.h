#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournWeeklyDisplayRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DKHOILBBDKD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD36D50)
#define DKHOILBBDKD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD372D0)
#define DKHOILBBDKD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD36EC0)
#define DKHOILBBDKD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD36800)
#define DKHOILBBDKD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD36A90)
#define DKHOILBBDKD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD36F60)
#define DKHOILBBDKD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD36FB0)
#define DKHOILBBDKD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD36D90)
#define DKHOILBBDKD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD36A30)
#define DKHOILBBDKD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD36C00)
#define DKHOILBBDKD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD36E20)
#define DKHOILBBDKD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD36780)

	class DKHOILBBDKD : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournWeeklyDisplayRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournWeeklyDisplayRow*>**)UnitySDK::FromName("", "DKHOILBBDKD")->GetStaticField(0x4E480);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "DKHOILBBDKD")->GetStaticField(0x4E488);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DKHOILBBDKD")->GetStaticField(0x4E490);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DKHOILBBDKD")->GetStaticField(0x11FB0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DKHOILBBDKD")->GetStaticField(0x11FB1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKHOILBBDKD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournWeeklyDisplayRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournWeeklyDisplayRow*>*(*)())((::PBYTE)hIl2Cpp + DKHOILBBDKD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DKHOILBBDKD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournWeeklyDisplayRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournWeeklyDisplayRow*>(*)())((::PBYTE)hIl2Cpp + DKHOILBBDKD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournWeeklyDisplayRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueTournWeeklyDisplayRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DKHOILBBDKD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DKHOILBBDKD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKHOILBBDKD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKHOILBBDKD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DKHOILBBDKD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DKHOILBBDKD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DKHOILBBDKD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueTournWeeklyDisplayRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournWeeklyDisplayRow*))((::PBYTE)hIl2Cpp + DKHOILBBDKD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
