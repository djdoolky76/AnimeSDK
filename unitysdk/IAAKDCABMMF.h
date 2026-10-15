#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class EPPEFKBPGDC;
class FCOEMCEDLNL;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IAAKDCABMMF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEA9C90)
#define IAAKDCABMMF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEAA260)
#define IAAKDCABMMF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEA9E00)
#define IAAKDCABMMF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEA9700)
#define IAAKDCABMMF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEA9990)
#define IAAKDCABMMF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEA9EA0)
#define IAAKDCABMMF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEA9EF0)
#define IAAKDCABMMF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEA9CD0)
#define IAAKDCABMMF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEA9930)
#define IAAKDCABMMF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEA9B00)
#define IAAKDCABMMF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEA9D60)
#define IAAKDCABMMF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEA9680)

inline static constexpr unsigned int IAAKDCABMMF_TypeDefinitionIndex = 11528;

	class IAAKDCABMMF : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::EPPEFKBPGDC*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::EPPEFKBPGDC*>**)UnitySDK::FromName("", "IAAKDCABMMF")->GetStaticField(0x1ECB0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "IAAKDCABMMF")->GetStaticField(0x1ECB8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IAAKDCABMMF")->GetStaticField(0x1ECC0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IAAKDCABMMF")->GetStaticField(0x6F50);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IAAKDCABMMF")->GetStaticField(0x6F51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAAKDCABMMF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::EPPEFKBPGDC*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::EPPEFKBPGDC*>*(*)())((::PBYTE)hIl2Cpp + IAAKDCABMMF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IAAKDCABMMF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::EPPEFKBPGDC*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::EPPEFKBPGDC*>(*)())((::PBYTE)hIl2Cpp + IAAKDCABMMF_FPHGMAMDFHE_OFFSET))();
		}

		static ::EPPEFKBPGDC* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::EPPEFKBPGDC*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IAAKDCABMMF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IAAKDCABMMF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAAKDCABMMF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAAKDCABMMF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IAAKDCABMMF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IAAKDCABMMF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IAAKDCABMMF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::EPPEFKBPGDC* a1)
		{
			return ((::System::Void(*)(::EPPEFKBPGDC*))((::PBYTE)hIl2Cpp + IAAKDCABMMF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
