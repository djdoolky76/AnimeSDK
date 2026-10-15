#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class LPGCDGJIMND;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AAPLJKMKEGM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CC6CC10)
#define AAPLJKMKEGM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC6D190)
#define AAPLJKMKEGM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CC6CD80)
#define AAPLJKMKEGM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CC6C700)
#define AAPLJKMKEGM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CC6C990)
#define AAPLJKMKEGM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CC6CE20)
#define AAPLJKMKEGM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CC6CE70)
#define AAPLJKMKEGM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CC6CC50)
#define AAPLJKMKEGM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CC6C930)
#define AAPLJKMKEGM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CC6CAC0)
#define AAPLJKMKEGM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CC6CCE0)
#define AAPLJKMKEGM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CC6C680)

inline static constexpr unsigned int AAPLJKMKEGM_TypeDefinitionIndex = 12472;

	class AAPLJKMKEGM : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AAPLJKMKEGM")->GetStaticField(0x3D100);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LPGCDGJIMND*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LPGCDGJIMND*>**)UnitySDK::FromName("", "AAPLJKMKEGM")->GetStaticField(0x3D108);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "AAPLJKMKEGM")->GetStaticField(0x3D110);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AAPLJKMKEGM")->GetStaticField(0xC380);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AAPLJKMKEGM")->GetStaticField(0xC381);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAPLJKMKEGM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LPGCDGJIMND*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LPGCDGJIMND*>*(*)())((::PBYTE)hIl2Cpp + AAPLJKMKEGM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AAPLJKMKEGM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::LPGCDGJIMND*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::LPGCDGJIMND*>(*)())((::PBYTE)hIl2Cpp + AAPLJKMKEGM_FPHGMAMDFHE_OFFSET))();
		}

		static ::LPGCDGJIMND* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::LPGCDGJIMND*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AAPLJKMKEGM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AAPLJKMKEGM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAPLJKMKEGM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAPLJKMKEGM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AAPLJKMKEGM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AAPLJKMKEGM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AAPLJKMKEGM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::LPGCDGJIMND* a1)
		{
			return ((::System::Void(*)(::LPGCDGJIMND*))((::PBYTE)hIl2Cpp + AAPLJKMKEGM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
