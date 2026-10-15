#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AetherDivideChallengeListRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define COGGDLNBGPN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DCB8B40)
#define COGGDLNBGPN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCB90C0)
#define COGGDLNBGPN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DCB8CB0)
#define COGGDLNBGPN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DCB8630)
#define COGGDLNBGPN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DCB88C0)
#define COGGDLNBGPN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DCB8D50)
#define COGGDLNBGPN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DCB8DA0)
#define COGGDLNBGPN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DCB8B80)
#define COGGDLNBGPN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DCB8860)
#define COGGDLNBGPN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DCB89F0)
#define COGGDLNBGPN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DCB8C10)
#define COGGDLNBGPN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DCB85B0)

	class COGGDLNBGPN : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "COGGDLNBGPN")->GetStaticField(0x45360);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "COGGDLNBGPN")->GetStaticField(0x45368);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideChallengeListRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideChallengeListRow*>**)UnitySDK::FromName("", "COGGDLNBGPN")->GetStaticField(0x45370);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "COGGDLNBGPN")->GetStaticField(0x10700);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "COGGDLNBGPN")->GetStaticField(0x10701);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COGGDLNBGPN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideChallengeListRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideChallengeListRow*>*(*)())((::PBYTE)hIl2Cpp + COGGDLNBGPN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + COGGDLNBGPN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideChallengeListRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideChallengeListRow*>(*)())((::PBYTE)hIl2Cpp + COGGDLNBGPN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::AetherDivideChallengeListRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AetherDivideChallengeListRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + COGGDLNBGPN_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + COGGDLNBGPN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COGGDLNBGPN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COGGDLNBGPN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + COGGDLNBGPN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + COGGDLNBGPN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + COGGDLNBGPN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::AetherDivideChallengeListRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AetherDivideChallengeListRow*))((::PBYTE)hIl2Cpp + COGGDLNBGPN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
