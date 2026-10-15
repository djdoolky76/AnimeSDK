#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarLinkRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IGHNEJLNPHO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEFB3C0)
#define IGHNEJLNPHO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF0D350)
#define IGHNEJLNPHO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CF0CEC0)
#define IGHNEJLNPHO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEFADF0)
#define IGHNEJLNPHO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEFB080)
#define IGHNEJLNPHO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CF0CF60)
#define IGHNEJLNPHO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CF0CFB0)
#define IGHNEJLNPHO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEFB400)
#define IGHNEJLNPHO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEFB020)
#define IGHNEJLNPHO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEFB1F0)
#define IGHNEJLNPHO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEFB490)
#define IGHNEJLNPHO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEFAD70)

inline static constexpr unsigned int IGHNEJLNPHO_TypeDefinitionIndex = 12798;

	class IGHNEJLNPHO : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IGHNEJLNPHO")->GetStaticField(0x22AD0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "IGHNEJLNPHO")->GetStaticField(0x22AD8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarLinkRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarLinkRow*>**)UnitySDK::FromName("", "IGHNEJLNPHO")->GetStaticField(0x22AE0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IGHNEJLNPHO")->GetStaticField(0x7B60);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IGHNEJLNPHO")->GetStaticField(0x7B61);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGHNEJLNPHO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarLinkRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarLinkRow*>*(*)())((::PBYTE)hIl2Cpp + IGHNEJLNPHO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IGHNEJLNPHO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarLinkRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarLinkRow*>(*)())((::PBYTE)hIl2Cpp + IGHNEJLNPHO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::AvatarLinkRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::AvatarLinkRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + IGHNEJLNPHO_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IGHNEJLNPHO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGHNEJLNPHO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGHNEJLNPHO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IGHNEJLNPHO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IGHNEJLNPHO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IGHNEJLNPHO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::AvatarLinkRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarLinkRow*))((::PBYTE)hIl2Cpp + IGHNEJLNPHO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
