#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityHipplenTrialRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FABBIKPCCGB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDC3100)
#define FABBIKPCCGB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDC36D0)
#define FABBIKPCCGB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDC3270)
#define FABBIKPCCGB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDC2B70)
#define FABBIKPCCGB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDC2E00)
#define FABBIKPCCGB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDC3310)
#define FABBIKPCCGB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDC3360)
#define FABBIKPCCGB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDC3140)
#define FABBIKPCCGB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDC2DA0)
#define FABBIKPCCGB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDC2F70)
#define FABBIKPCCGB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDC31D0)
#define FABBIKPCCGB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDC2AF0)

	class FABBIKPCCGB : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenTrialRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenTrialRow*>**)UnitySDK::FromName("", "FABBIKPCCGB")->GetStaticField(0xEC10);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "FABBIKPCCGB")->GetStaticField(0xEC18);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FABBIKPCCGB")->GetStaticField(0xEC20);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FABBIKPCCGB")->GetStaticField(0x31A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FABBIKPCCGB")->GetStaticField(0x31A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FABBIKPCCGB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenTrialRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenTrialRow*>*(*)())((::PBYTE)hIl2Cpp + FABBIKPCCGB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FABBIKPCCGB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenTrialRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenTrialRow*>(*)())((::PBYTE)hIl2Cpp + FABBIKPCCGB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityHipplenTrialRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityHipplenTrialRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FABBIKPCCGB_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FABBIKPCCGB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FABBIKPCCGB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FABBIKPCCGB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FABBIKPCCGB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FABBIKPCCGB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FABBIKPCCGB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityHipplenTrialRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityHipplenTrialRow*))((::PBYTE)hIl2Cpp + FABBIKPCCGB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
