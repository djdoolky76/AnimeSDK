#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class LKDLCJELFCM;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KECFAOCKAIE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D088240)
#define KECFAOCKAIE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D088810)
#define KECFAOCKAIE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0883B0)
#define KECFAOCKAIE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D087CB0)
#define KECFAOCKAIE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D087F40)
#define KECFAOCKAIE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D088450)
#define KECFAOCKAIE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0884A0)
#define KECFAOCKAIE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D088280)
#define KECFAOCKAIE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D087EE0)
#define KECFAOCKAIE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0880B0)
#define KECFAOCKAIE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D088310)
#define KECFAOCKAIE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D087C30)

inline static constexpr unsigned int KECFAOCKAIE_TypeDefinitionIndex = 12005;

	class KECFAOCKAIE : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LKDLCJELFCM*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LKDLCJELFCM*>**)UnitySDK::FromName("", "KECFAOCKAIE")->GetStaticField(0x34250);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KECFAOCKAIE")->GetStaticField(0x34258);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KECFAOCKAIE")->GetStaticField(0x34260);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KECFAOCKAIE")->GetStaticField(0xAF60);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KECFAOCKAIE")->GetStaticField(0xAF61);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KECFAOCKAIE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LKDLCJELFCM*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LKDLCJELFCM*>*(*)())((::PBYTE)hIl2Cpp + KECFAOCKAIE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KECFAOCKAIE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::LKDLCJELFCM*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::LKDLCJELFCM*>(*)())((::PBYTE)hIl2Cpp + KECFAOCKAIE_FPHGMAMDFHE_OFFSET))();
		}

		static ::LKDLCJELFCM* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::LKDLCJELFCM*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KECFAOCKAIE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KECFAOCKAIE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KECFAOCKAIE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KECFAOCKAIE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KECFAOCKAIE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KECFAOCKAIE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KECFAOCKAIE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::LKDLCJELFCM* a1)
		{
			return ((::System::Void(*)(::LKDLCJELFCM*))((::PBYTE)hIl2Cpp + KECFAOCKAIE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
