#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class FKMKAAOPIKF;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BEIJEMIDDMF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DEAB030)
#define BEIJEMIDDMF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEAB630)
#define BEIJEMIDDMF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DEAB1A0)
#define BEIJEMIDDMF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DEAAA60)
#define BEIJEMIDDMF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DEAACF0)
#define BEIJEMIDDMF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DEAB240)
#define BEIJEMIDDMF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DEAB290)
#define BEIJEMIDDMF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DEAB070)
#define BEIJEMIDDMF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DEAAC90)
#define BEIJEMIDDMF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DEAAE60)
#define BEIJEMIDDMF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DEAB100)
#define BEIJEMIDDMF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DEAA9E0)

inline static constexpr unsigned int BEIJEMIDDMF_TypeDefinitionIndex = 11695;

	class BEIJEMIDDMF : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BEIJEMIDDMF")->GetStaticField(0x32D10);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::FKMKAAOPIKF*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::FKMKAAOPIKF*>**)UnitySDK::FromName("", "BEIJEMIDDMF")->GetStaticField(0x32D18);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BEIJEMIDDMF")->GetStaticField(0x32D20);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BEIJEMIDDMF")->GetStaticField(0xAC00);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BEIJEMIDDMF")->GetStaticField(0xAC01);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEIJEMIDDMF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::FKMKAAOPIKF*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::FKMKAAOPIKF*>*(*)())((::PBYTE)hIl2Cpp + BEIJEMIDDMF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BEIJEMIDDMF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::FKMKAAOPIKF*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::FKMKAAOPIKF*>(*)())((::PBYTE)hIl2Cpp + BEIJEMIDDMF_FPHGMAMDFHE_OFFSET))();
		}

		static ::FKMKAAOPIKF* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::FKMKAAOPIKF*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BEIJEMIDDMF_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BEIJEMIDDMF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEIJEMIDDMF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEIJEMIDDMF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BEIJEMIDDMF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BEIJEMIDDMF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BEIJEMIDDMF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::FKMKAAOPIKF* a1)
		{
			return ((::System::Void(*)(::FKMKAAOPIKF*))((::PBYTE)hIl2Cpp + BEIJEMIDDMF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
