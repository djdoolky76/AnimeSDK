#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleMatchLevelConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LNENDGPPGIE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D11A9C0)
#define LNENDGPPGIE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D11AF90)
#define LNENDGPPGIE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D11AB30)
#define LNENDGPPGIE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D11A430)
#define LNENDGPPGIE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D11A6C0)
#define LNENDGPPGIE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D11ABD0)
#define LNENDGPPGIE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D11AC20)
#define LNENDGPPGIE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D11AA00)
#define LNENDGPPGIE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D11A660)
#define LNENDGPPGIE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D11A830)
#define LNENDGPPGIE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D11AA90)
#define LNENDGPPGIE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D11A3B0)

	class LNENDGPPGIE : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LNENDGPPGIE")->GetStaticField(0x450D0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchLevelConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchLevelConfigRow*>**)UnitySDK::FromName("", "LNENDGPPGIE")->GetStaticField(0x450D8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "LNENDGPPGIE")->GetStaticField(0x450E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LNENDGPPGIE")->GetStaticField(0x10680);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LNENDGPPGIE")->GetStaticField(0x10681);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNENDGPPGIE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchLevelConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchLevelConfigRow*>*(*)())((::PBYTE)hIl2Cpp + LNENDGPPGIE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LNENDGPPGIE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchLevelConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchLevelConfigRow*>(*)())((::PBYTE)hIl2Cpp + LNENDGPPGIE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MarbleMatchLevelConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MarbleMatchLevelConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LNENDGPPGIE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LNENDGPPGIE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNENDGPPGIE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNENDGPPGIE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LNENDGPPGIE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LNENDGPPGIE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LNENDGPPGIE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MarbleMatchLevelConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MarbleMatchLevelConfigRow*))((::PBYTE)hIl2Cpp + LNENDGPPGIE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
