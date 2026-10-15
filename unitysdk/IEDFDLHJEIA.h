#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class JMECAFJNCOM;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IEDFDLHJEIA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEE8240)
#define IEDFDLHJEIA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEE87C0)
#define IEDFDLHJEIA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEE83B0)
#define IEDFDLHJEIA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEE7CF0)
#define IEDFDLHJEIA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEE7F80)
#define IEDFDLHJEIA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEE8450)
#define IEDFDLHJEIA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEE84A0)
#define IEDFDLHJEIA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEE8280)
#define IEDFDLHJEIA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEE7F20)
#define IEDFDLHJEIA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEE80B0)
#define IEDFDLHJEIA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEE8310)
#define IEDFDLHJEIA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEE7C70)

inline static constexpr unsigned int IEDFDLHJEIA_TypeDefinitionIndex = 11539;

	class IEDFDLHJEIA : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::JMECAFJNCOM*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::JMECAFJNCOM*>**)UnitySDK::FromName("", "IEDFDLHJEIA")->GetStaticField(0x214D0);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "IEDFDLHJEIA")->GetStaticField(0x214D8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IEDFDLHJEIA")->GetStaticField(0x214E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IEDFDLHJEIA")->GetStaticField(0x78A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IEDFDLHJEIA")->GetStaticField(0x78A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEDFDLHJEIA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::JMECAFJNCOM*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::JMECAFJNCOM*>*(*)())((::PBYTE)hIl2Cpp + IEDFDLHJEIA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IEDFDLHJEIA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::JMECAFJNCOM*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::JMECAFJNCOM*>(*)())((::PBYTE)hIl2Cpp + IEDFDLHJEIA_FPHGMAMDFHE_OFFSET))();
		}

		static ::JMECAFJNCOM* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::JMECAFJNCOM*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IEDFDLHJEIA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IEDFDLHJEIA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEDFDLHJEIA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEDFDLHJEIA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IEDFDLHJEIA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IEDFDLHJEIA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IEDFDLHJEIA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::JMECAFJNCOM* a1)
		{
			return ((::System::Void(*)(::JMECAFJNCOM*))((::PBYTE)hIl2Cpp + IEDFDLHJEIA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
