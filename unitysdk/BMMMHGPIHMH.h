#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingActionRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BMMMHGPIHMH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D9E2E70)
#define BMMMHGPIHMH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9E3440)
#define BMMMHGPIHMH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D9E2FE0)
#define BMMMHGPIHMH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D9E28E0)
#define BMMMHGPIHMH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D9E2B70)
#define BMMMHGPIHMH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D9E3080)
#define BMMMHGPIHMH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D9E30D0)
#define BMMMHGPIHMH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D9E2EB0)
#define BMMMHGPIHMH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D9E2B10)
#define BMMMHGPIHMH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D9E2CE0)
#define BMMMHGPIHMH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D9E2F40)
#define BMMMHGPIHMH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D9E2860)

	class BMMMHGPIHMH : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingActionRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingActionRow*>**)UnitySDK::FromName("", "BMMMHGPIHMH")->GetStaticField(0x38270);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "BMMMHGPIHMH")->GetStaticField(0x38278);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BMMMHGPIHMH")->GetStaticField(0x38280);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BMMMHGPIHMH")->GetStaticField(0xBFB0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BMMMHGPIHMH")->GetStaticField(0xBFB1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMMMHGPIHMH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingActionRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingActionRow*>*(*)())((::PBYTE)hIl2Cpp + BMMMHGPIHMH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BMMMHGPIHMH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingActionRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingActionRow*>(*)())((::PBYTE)hIl2Cpp + BMMMHGPIHMH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChenLingActionRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChenLingActionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BMMMHGPIHMH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BMMMHGPIHMH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMMMHGPIHMH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMMMHGPIHMH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BMMMHGPIHMH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BMMMHGPIHMH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BMMMHGPIHMH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChenLingActionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChenLingActionRow*))((::PBYTE)hIl2Cpp + BMMMHGPIHMH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
