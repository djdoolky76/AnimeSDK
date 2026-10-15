#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceAvatarTalkRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CIJEKDDNAHN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DBE8FB0)
#define CIJEKDDNAHN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DBE9580)
#define CIJEKDDNAHN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DBE9120)
#define CIJEKDDNAHN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DBE8A20)
#define CIJEKDDNAHN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DBE8CB0)
#define CIJEKDDNAHN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DBE91C0)
#define CIJEKDDNAHN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DBE9210)
#define CIJEKDDNAHN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DBE8FF0)
#define CIJEKDDNAHN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DBE8C50)
#define CIJEKDDNAHN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DBE8E20)
#define CIJEKDDNAHN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DBE9080)
#define CIJEKDDNAHN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DBE89A0)

inline static constexpr unsigned int CIJEKDDNAHN_TypeDefinitionIndex = 11028;

	class CIJEKDDNAHN : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceAvatarTalkRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceAvatarTalkRow*>**)UnitySDK::FromName("", "CIJEKDDNAHN")->GetStaticField(0x3D260);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CIJEKDDNAHN")->GetStaticField(0x3D268);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CIJEKDDNAHN")->GetStaticField(0x3D270);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CIJEKDDNAHN")->GetStaticField(0xC3D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CIJEKDDNAHN")->GetStaticField(0xC3D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CIJEKDDNAHN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceAvatarTalkRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceAvatarTalkRow*>*(*)())((::PBYTE)hIl2Cpp + CIJEKDDNAHN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CIJEKDDNAHN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceAvatarTalkRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceAvatarTalkRow*>(*)())((::PBYTE)hIl2Cpp + CIJEKDDNAHN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::CakeRaceAvatarTalkRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::CakeRaceAvatarTalkRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CIJEKDDNAHN_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CIJEKDDNAHN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CIJEKDDNAHN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CIJEKDDNAHN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CIJEKDDNAHN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CIJEKDDNAHN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CIJEKDDNAHN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::CakeRaceAvatarTalkRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::CakeRaceAvatarTalkRow*))((::PBYTE)hIl2Cpp + CIJEKDDNAHN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
