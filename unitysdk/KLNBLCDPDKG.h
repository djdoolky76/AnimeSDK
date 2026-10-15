#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class LJIBOGDPPCA;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KLNBLCDPDKG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0AC0C0)
#define KLNBLCDPDKG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0AC690)
#define KLNBLCDPDKG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0AC230)
#define KLNBLCDPDKG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0ABB30)
#define KLNBLCDPDKG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0ABDC0)
#define KLNBLCDPDKG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0AC2D0)
#define KLNBLCDPDKG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0AC320)
#define KLNBLCDPDKG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0AC100)
#define KLNBLCDPDKG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0ABD60)
#define KLNBLCDPDKG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0ABF30)
#define KLNBLCDPDKG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0AC190)
#define KLNBLCDPDKG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0ABAB0)

inline static constexpr unsigned int KLNBLCDPDKG_TypeDefinitionIndex = 12011;

	class KLNBLCDPDKG : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KLNBLCDPDKG")->GetStaticField(0x379D0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LJIBOGDPPCA*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LJIBOGDPPCA*>**)UnitySDK::FromName("", "KLNBLCDPDKG")->GetStaticField(0x379D8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KLNBLCDPDKG")->GetStaticField(0x379E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KLNBLCDPDKG")->GetStaticField(0xBD80);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KLNBLCDPDKG")->GetStaticField(0xBD81);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLNBLCDPDKG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LJIBOGDPPCA*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LJIBOGDPPCA*>*(*)())((::PBYTE)hIl2Cpp + KLNBLCDPDKG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KLNBLCDPDKG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::LJIBOGDPPCA*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::LJIBOGDPPCA*>(*)())((::PBYTE)hIl2Cpp + KLNBLCDPDKG_FPHGMAMDFHE_OFFSET))();
		}

		static ::LJIBOGDPPCA* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::LJIBOGDPPCA*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KLNBLCDPDKG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KLNBLCDPDKG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLNBLCDPDKG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLNBLCDPDKG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KLNBLCDPDKG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KLNBLCDPDKG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KLNBLCDPDKG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::LJIBOGDPPCA* a1)
		{
			return ((::System::Void(*)(::LJIBOGDPPCA*))((::PBYTE)hIl2Cpp + KLNBLCDPDKG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
