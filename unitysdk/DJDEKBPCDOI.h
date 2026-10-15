#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class EIJFHONJPAK;
class FCOEMCEDLNL;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DJDEKBPCDOI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD2AFA0)
#define DJDEKBPCDOI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD2B5A0)
#define DJDEKBPCDOI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD2B110)
#define DJDEKBPCDOI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD2A9D0)
#define DJDEKBPCDOI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD2AC60)
#define DJDEKBPCDOI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD2B1B0)
#define DJDEKBPCDOI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD2B200)
#define DJDEKBPCDOI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD2AFE0)
#define DJDEKBPCDOI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD2AC00)
#define DJDEKBPCDOI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD2ADD0)
#define DJDEKBPCDOI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD2B070)
#define DJDEKBPCDOI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD2A950)

inline static constexpr unsigned int DJDEKBPCDOI_TypeDefinitionIndex = 15051;

	class DJDEKBPCDOI : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "DJDEKBPCDOI")->GetStaticField(0x4D820);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DJDEKBPCDOI")->GetStaticField(0x4D828);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::EIJFHONJPAK*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::EIJFHONJPAK*>**)UnitySDK::FromName("", "DJDEKBPCDOI")->GetStaticField(0x4D830);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DJDEKBPCDOI")->GetStaticField(0x11D10);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DJDEKBPCDOI")->GetStaticField(0x11D11);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJDEKBPCDOI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::EIJFHONJPAK*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::EIJFHONJPAK*>*(*)())((::PBYTE)hIl2Cpp + DJDEKBPCDOI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DJDEKBPCDOI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::EIJFHONJPAK*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::EIJFHONJPAK*>(*)())((::PBYTE)hIl2Cpp + DJDEKBPCDOI_FPHGMAMDFHE_OFFSET))();
		}

		static ::EIJFHONJPAK* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::EIJFHONJPAK*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DJDEKBPCDOI_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DJDEKBPCDOI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJDEKBPCDOI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJDEKBPCDOI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DJDEKBPCDOI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DJDEKBPCDOI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DJDEKBPCDOI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::EIJFHONJPAK* a1)
		{
			return ((::System::Void(*)(::EIJFHONJPAK*))((::PBYTE)hIl2Cpp + DJDEKBPCDOI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
