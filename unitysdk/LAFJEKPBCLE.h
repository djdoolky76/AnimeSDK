#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VoiceAtlasRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define LAFJEKPBCLE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0A4880)
#define LAFJEKPBCLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0A4E90)
#define LAFJEKPBCLE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0A49F0)
#define LAFJEKPBCLE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0A4320)
#define LAFJEKPBCLE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0A45B0)
#define LAFJEKPBCLE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0A4A90)
#define LAFJEKPBCLE_IKBMBPKEFLD_OFFSET UNITYSDK_OFFSET(0x1D0A4E40)
#define LAFJEKPBCLE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0A4AE0)
#define LAFJEKPBCLE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0A48C0)
#define LAFJEKPBCLE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0A4550)
#define LAFJEKPBCLE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0A46E0)
#define LAFJEKPBCLE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0A4950)
#define LAFJEKPBCLE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0A42A0)

inline static constexpr unsigned int LAFJEKPBCLE_TypeDefinitionIndex = 12681;

	class LAFJEKPBCLE : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LAFJEKPBCLE")->GetStaticField(0x37C40);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LAFJEKPBCLE")->GetStaticField(0x37C48);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::VoiceAtlasRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::VoiceAtlasRow*>**)UnitySDK::FromName("", "LAFJEKPBCLE")->GetStaticField(0x37C50);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LAFJEKPBCLE")->GetStaticField(0xB4B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LAFJEKPBCLE")->GetStaticField(0xB4B1);
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
