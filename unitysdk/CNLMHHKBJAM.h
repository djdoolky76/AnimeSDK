#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class LDGFEEFHNKH;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CNLMHHKBJAM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DCB6020)
#define CNLMHHKBJAM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCB6620)
#define CNLMHHKBJAM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DCB6190)
#define CNLMHHKBJAM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DCB5A50)
#define CNLMHHKBJAM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DCB5CE0)
#define CNLMHHKBJAM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DCB6230)
#define CNLMHHKBJAM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DCB6280)
#define CNLMHHKBJAM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DCB6060)
#define CNLMHHKBJAM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DCB5C80)
#define CNLMHHKBJAM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DCB5E50)
#define CNLMHHKBJAM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DCB60F0)
#define CNLMHHKBJAM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DCB59D0)

inline static constexpr unsigned int CNLMHHKBJAM_TypeDefinitionIndex = 13927;

	class CNLMHHKBJAM : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CNLMHHKBJAM")->GetStaticField(0x450B0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LDGFEEFHNKH*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LDGFEEFHNKH*>**)UnitySDK::FromName("", "CNLMHHKBJAM")->GetStaticField(0x450B8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CNLMHHKBJAM")->GetStaticField(0x450C0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CNLMHHKBJAM")->GetStaticField(0x10670);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CNLMHHKBJAM")->GetStaticField(0x10671);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNLMHHKBJAM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LDGFEEFHNKH*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LDGFEEFHNKH*>*(*)())((::PBYTE)hIl2Cpp + CNLMHHKBJAM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CNLMHHKBJAM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::LDGFEEFHNKH*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::LDGFEEFHNKH*>(*)())((::PBYTE)hIl2Cpp + CNLMHHKBJAM_FPHGMAMDFHE_OFFSET))();
		}

		static ::LDGFEEFHNKH* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::LDGFEEFHNKH*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CNLMHHKBJAM_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CNLMHHKBJAM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNLMHHKBJAM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNLMHHKBJAM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CNLMHHKBJAM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CNLMHHKBJAM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CNLMHHKBJAM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::LDGFEEFHNKH* a1)
		{
			return ((::System::Void(*)(::LDGFEEFHNKH*))((::PBYTE)hIl2Cpp + CNLMHHKBJAM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
