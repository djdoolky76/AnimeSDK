#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class GPOKNODKHGL;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JGPKIKLCMKC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CFFEA70)
#define JGPKIKLCMKC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CFFF040)
#define JGPKIKLCMKC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CFFEBE0)
#define JGPKIKLCMKC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CFFE4E0)
#define JGPKIKLCMKC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CFFE770)
#define JGPKIKLCMKC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CFFEC80)
#define JGPKIKLCMKC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CFFECD0)
#define JGPKIKLCMKC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CFFEAB0)
#define JGPKIKLCMKC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CFFE710)
#define JGPKIKLCMKC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CFFE8E0)
#define JGPKIKLCMKC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CFFEB40)
#define JGPKIKLCMKC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CFFE460)

inline static constexpr unsigned int JGPKIKLCMKC_TypeDefinitionIndex = 11314;

	class JGPKIKLCMKC : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JGPKIKLCMKC")->GetStaticField(0x2E250);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "JGPKIKLCMKC")->GetStaticField(0x2E258);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::GPOKNODKHGL*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::GPOKNODKHGL*>**)UnitySDK::FromName("", "JGPKIKLCMKC")->GetStaticField(0x2E260);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JGPKIKLCMKC")->GetStaticField(0x98F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JGPKIKLCMKC")->GetStaticField(0x98F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGPKIKLCMKC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::GPOKNODKHGL*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::GPOKNODKHGL*>*(*)())((::PBYTE)hIl2Cpp + JGPKIKLCMKC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JGPKIKLCMKC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::GPOKNODKHGL*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::GPOKNODKHGL*>(*)())((::PBYTE)hIl2Cpp + JGPKIKLCMKC_FPHGMAMDFHE_OFFSET))();
		}

		static ::GPOKNODKHGL* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::GPOKNODKHGL*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JGPKIKLCMKC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JGPKIKLCMKC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGPKIKLCMKC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGPKIKLCMKC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JGPKIKLCMKC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JGPKIKLCMKC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JGPKIKLCMKC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::GPOKNODKHGL* a1)
		{
			return ((::System::Void(*)(::GPOKNODKHGL*))((::PBYTE)hIl2Cpp + JGPKIKLCMKC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
