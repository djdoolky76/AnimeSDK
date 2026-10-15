#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VoiceAtlasRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define LAFJEKPBCLE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0D2750)
#define LAFJEKPBCLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0D2D60)
#define LAFJEKPBCLE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0D28C0)
#define LAFJEKPBCLE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0D21F0)
#define LAFJEKPBCLE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0D2480)
#define LAFJEKPBCLE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0D2960)
#define LAFJEKPBCLE_IKBMBPKEFLD_OFFSET UNITYSDK_OFFSET(0x1D0D2D10)
#define LAFJEKPBCLE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0D29B0)
#define LAFJEKPBCLE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0D2790)
#define LAFJEKPBCLE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0D2420)
#define LAFJEKPBCLE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0D25B0)
#define LAFJEKPBCLE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0D2820)
#define LAFJEKPBCLE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0D2170)

	class LAFJEKPBCLE : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LAFJEKPBCLE")->GetStaticField(0x3AA20);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::VoiceAtlasRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::VoiceAtlasRow*>**)UnitySDK::FromName("", "LAFJEKPBCLE")->GetStaticField(0x3AA28);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "LAFJEKPBCLE")->GetStaticField(0x3AA30);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LAFJEKPBCLE")->GetStaticField(0xC7F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LAFJEKPBCLE")->GetStaticField(0xC7F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LAFJEKPBCLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::VoiceAtlasRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::VoiceAtlasRow*>*(*)())((::PBYTE)hIl2Cpp + LAFJEKPBCLE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LAFJEKPBCLE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::VoiceAtlasRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::VoiceAtlasRow*>(*)())((::PBYTE)hIl2Cpp + LAFJEKPBCLE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::VoiceAtlasRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::VoiceAtlasRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + LAFJEKPBCLE_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LAFJEKPBCLE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LAFJEKPBCLE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LAFJEKPBCLE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LAFJEKPBCLE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LAFJEKPBCLE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LAFJEKPBCLE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::VoiceAtlasRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::VoiceAtlasRow*))((::PBYTE)hIl2Cpp + LAFJEKPBCLE_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerator_1<::RPG::GameCore::VoiceAtlasRow*>* IKBMBPKEFLD(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::RPG::GameCore::VoiceAtlasRow*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LAFJEKPBCLE_IKBMBPKEFLD_OFFSET))(a1);
		}

	};
