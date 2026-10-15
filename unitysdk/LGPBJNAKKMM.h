#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class MOHMAHDOBDO;
class OKFLAHFIBCM;
namespace RPG::GameCore { class TurnBasedAbilityConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LGPBJNAKKMM_ABIIOIHHBJG_OFFSET UNITYSDK_OFFSET(0xB698870)
#define LGPBJNAKKMM_AJLHBAFPLFM_OFFSET UNITYSDK_OFFSET(0xB6971C0)
#define LGPBJNAKKMM_ANDMNKBKBFG_OFFSET UNITYSDK_OFFSET(0xB698ED0)
#define LGPBJNAKKMM_APIAFIEENII_OFFSET UNITYSDK_OFFSET(0xB697CE0)
#define LGPBJNAKKMM_BCMKJHOMALH_OFFSET UNITYSDK_OFFSET(0xB698C40)
#define LGPBJNAKKMM_BCPNCPJKJAE_OFFSET UNITYSDK_OFFSET(0xB697BD0)
#define LGPBJNAKKMM_CCTOR_OFFSET UNITYSDK_OFFSET(0xB698F60)
#define LGPBJNAKKMM_COEKPLIJJCC_OFFSET UNITYSDK_OFFSET(0xB697DE0)
#define LGPBJNAKKMM_JLMGKOGMGOF_OFFSET UNITYSDK_OFFSET(0xB698D70)
#define LGPBJNAKKMM_KLNALKFEIGA_OFFSET UNITYSDK_OFFSET(0xB697050)
#define LGPBJNAKKMM_KNAMDDCPIBI_OFFSET UNITYSDK_OFFSET(0xB698E90)
#define LGPBJNAKKMM_LFANOJFAEDL_OFFSET UNITYSDK_OFFSET(0xB698520)
#define LGPBJNAKKMM_MKGKNCHFGNH_OFFSET UNITYSDK_OFFSET(0xB698950)
#define LGPBJNAKKMM_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xB696E80)

inline static constexpr unsigned int LGPBJNAKKMM_TypeDefinitionIndex = 56042;

	class LGPBJNAKKMM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedAbilityConfig*>** StaticGet_IKFOAELDLMC()
		{
			return (::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedAbilityConfig*>**)UnitySDK::FromName("", "LGPBJNAKKMM")->GetStaticField(0x4B4B0);
		}

		static ::FCOEMCEDLNL** StaticGet_LGKDIIPBIOD()
		{
			return (::FCOEMCEDLNL**)UnitySDK::FromName("", "LGPBJNAKKMM")->GetStaticField(0x4B4B8);
		}

		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_FNPCGDCIDLD()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)UnitySDK::FromName("", "LGPBJNAKKMM")->GetStaticField(0x4B4C0);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MOHMAHDOBDO*>** StaticGet_KBFLPHJJFKG()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MOHMAHDOBDO*>**)UnitySDK::FromName("", "LGPBJNAKKMM")->GetStaticField(0x4B4C8);
		}

		static ::System::UInt32* StaticGet_DCMBDAHCIEM()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "LGPBJNAKKMM")->GetStaticField(0x11400);
		}

		static ::System::Boolean* StaticGet_PAMJFKFIKHK()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LGPBJNAKKMM")->GetStaticField(0x11404);
		}

		static ::System::Boolean* StaticGet_PIILBJOIMKB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LGPBJNAKKMM")->GetStaticField(0x11405);
		}

		static ::System::Boolean* StaticGet_OAPCBAGCJCE()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LGPBJNAKKMM")->GetStaticField(0x11406);
		}

		static ::System::UInt32* StaticGet_ADEKPGPLAFK()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "LGPBJNAKKMM")->GetStaticField(0x11408);
		}

		// static const ::System::Object JAOJLOGELPK; // 0x0
		// static const ::System::String* NCEBLPHOKKJ; // 0x0
		// static const ::System::String* NDEJLCFHLFD; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGPBJNAKKMM_CCTOR_OFFSET))();
		}

		static ::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGPBJNAKKMM_PJPFIHFAHGO_OFFSET))();
		}

		static ::System::Void KLNALKFEIGA(::RPG::GameCore::TurnBasedAbilityConfig* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TurnBasedAbilityConfig*))((::PBYTE)hIl2Cpp + LGPBJNAKKMM_KLNALKFEIGA_OFFSET))(a1);
		}

		static ::System::Void AJLHBAFPLFM(::OKFLAHFIBCM* a1)
		{
			return ((::System::Void(*)(::OKFLAHFIBCM*))((::PBYTE)hIl2Cpp + LGPBJNAKKMM_AJLHBAFPLFM_OFFSET))(a1);
		}

		static ::System::Boolean COEKPLIJJCC(::OKFLAHFIBCM* a1)
		{
			return ((::System::Boolean(*)(::OKFLAHFIBCM*))((::PBYTE)hIl2Cpp + LGPBJNAKKMM_COEKPLIJJCC_OFFSET))(a1);
		}

		static ::System::Void BCPNCPJKJAE(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LGPBJNAKKMM_BCPNCPJKJAE_OFFSET))(a1);
		}

		static ::System::Void MKGKNCHFGNH(::System::String* a1, ::FCOEMCEDLNL* a2)
		{
			return ((::System::Void(*)(::System::String*, ::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LGPBJNAKKMM_MKGKNCHFGNH_OFFSET))(a1, a2);
		}

		static ::System::Void BCMKJHOMALH(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LGPBJNAKKMM_BCMKJHOMALH_OFFSET))(a1);
		}

		static ::FCOEMCEDLNL* LFANOJFAEDL(::System::String* a1, ::System::Int64 a2, ::System::Int64 a3)
		{
			return ((::FCOEMCEDLNL*(*)(::System::String*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + LGPBJNAKKMM_LFANOJFAEDL_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean JLMGKOGMGOF(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + LGPBJNAKKMM_JLMGKOGMGOF_OFFSET))(a1);
		}

		static ::System::Boolean KNAMDDCPIBI()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LGPBJNAKKMM_KNAMDDCPIBI_OFFSET))();
		}

		static ::System::Void ANDMNKBKBFG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + LGPBJNAKKMM_ANDMNKBKBFG_OFFSET))(a1);
		}

		static ::System::Boolean ABIIOIHHBJG()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LGPBJNAKKMM_ABIIOIHHBJG_OFFSET))();
		}

		static ::FCOEMCEDLNL* APIAFIEENII()
		{
			return ((::FCOEMCEDLNL*(*)())((::PBYTE)hIl2Cpp + LGPBJNAKKMM_APIAFIEENII_OFFSET))();
		}

	};
