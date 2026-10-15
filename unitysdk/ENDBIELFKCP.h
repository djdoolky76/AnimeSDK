#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyGameConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ENDBIELFKCP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDAB480)
#define ENDBIELFKCP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDABA00)
#define ENDBIELFKCP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDAB5F0)
#define ENDBIELFKCP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDAAF70)
#define ENDBIELFKCP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDAB200)
#define ENDBIELFKCP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDAB690)
#define ENDBIELFKCP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDAB6E0)
#define ENDBIELFKCP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDAB4C0)
#define ENDBIELFKCP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDAB1A0)
#define ENDBIELFKCP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDAB330)
#define ENDBIELFKCP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDAB550)
#define ENDBIELFKCP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDAAEF0)

	class ENDBIELFKCP : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ENDBIELFKCP")->GetStaticField(0xBDF0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyGameConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyGameConfigRow*>**)UnitySDK::FromName("", "ENDBIELFKCP")->GetStaticField(0xBDF8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "ENDBIELFKCP")->GetStaticField(0xBE00);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ENDBIELFKCP")->GetStaticField(0x29B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ENDBIELFKCP")->GetStaticField(0x29B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENDBIELFKCP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyGameConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyGameConfigRow*>*(*)())((::PBYTE)hIl2Cpp + ENDBIELFKCP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ENDBIELFKCP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyGameConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyGameConfigRow*>(*)())((::PBYTE)hIl2Cpp + ENDBIELFKCP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MonopolyGameConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MonopolyGameConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ENDBIELFKCP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ENDBIELFKCP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENDBIELFKCP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENDBIELFKCP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ENDBIELFKCP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ENDBIELFKCP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ENDBIELFKCP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MonopolyGameConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonopolyGameConfigRow*))((::PBYTE)hIl2Cpp + ENDBIELFKCP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
