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

#define KLNBLCDPDKG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1ECDD780)
#define KLNBLCDPDKG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1ECDDD50)
#define KLNBLCDPDKG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1ECDD8F0)
#define KLNBLCDPDKG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1ECDD1F0)
#define KLNBLCDPDKG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1ECDD480)
#define KLNBLCDPDKG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1ECDD990)
#define KLNBLCDPDKG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1ECDD9E0)
#define KLNBLCDPDKG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1ECDD7C0)
#define KLNBLCDPDKG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1ECDD420)
#define KLNBLCDPDKG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1ECDD5F0)
#define KLNBLCDPDKG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1ECDD850)
#define KLNBLCDPDKG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1ECDD170)

inline static constexpr unsigned int KLNBLCDPDKG_TypeDefinitionIndex = 12068;

	class KLNBLCDPDKG : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KLNBLCDPDKG")->GetStaticField(0x38100);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LJIBOGDPPCA*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LJIBOGDPPCA*>**)UnitySDK::FromName("", "KLNBLCDPDKG")->GetStaticField(0x38108);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KLNBLCDPDKG")->GetStaticField(0x38110);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KLNBLCDPDKG")->GetStaticField(0xB0D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KLNBLCDPDKG")->GetStaticField(0xB0D1);
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
