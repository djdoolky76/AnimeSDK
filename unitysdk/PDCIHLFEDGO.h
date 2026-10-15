#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PamChatGreetingRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PDCIHLFEDGO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2CD070)
#define PDCIHLFEDGO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2CD640)
#define PDCIHLFEDGO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2CD1E0)
#define PDCIHLFEDGO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2CCAE0)
#define PDCIHLFEDGO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2CCD70)
#define PDCIHLFEDGO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2CD280)
#define PDCIHLFEDGO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2CD2D0)
#define PDCIHLFEDGO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2CD0B0)
#define PDCIHLFEDGO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2CCD10)
#define PDCIHLFEDGO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2CCEE0)
#define PDCIHLFEDGO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2CD140)
#define PDCIHLFEDGO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2CCA60)

	class PDCIHLFEDGO : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamChatGreetingRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamChatGreetingRow*>**)UnitySDK::FromName("", "PDCIHLFEDGO")->GetStaticField(0x3E510);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "PDCIHLFEDGO")->GetStaticField(0x3E518);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PDCIHLFEDGO")->GetStaticField(0x3E520);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PDCIHLFEDGO")->GetStaticField(0xD5C0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PDCIHLFEDGO")->GetStaticField(0xD5C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDCIHLFEDGO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamChatGreetingRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamChatGreetingRow*>*(*)())((::PBYTE)hIl2Cpp + PDCIHLFEDGO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PDCIHLFEDGO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamChatGreetingRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamChatGreetingRow*>(*)())((::PBYTE)hIl2Cpp + PDCIHLFEDGO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PamChatGreetingRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PamChatGreetingRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PDCIHLFEDGO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PDCIHLFEDGO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDCIHLFEDGO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDCIHLFEDGO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PDCIHLFEDGO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PDCIHLFEDGO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PDCIHLFEDGO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PamChatGreetingRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PamChatGreetingRow*))((::PBYTE)hIl2Cpp + PDCIHLFEDGO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
