#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OLGBOBMGFIA;
namespace System { class String; }
namespace System { class Uri; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define PBEKLCMIPAL_CCTOR_OFFSET UNITYSDK_OFFSET(0xBFE43E0)
#define PBEKLCMIPAL_CDLLNIDGONB_OFFSET UNITYSDK_OFFSET(0xBFE3A90)
#define PBEKLCMIPAL_DKHAAPAIFOG_OFFSET UNITYSDK_OFFSET(0xBFE3EF0)
#define PBEKLCMIPAL_ELEPDOMDAGA_1_OFFSET UNITYSDK_OFFSET(0xBFE3600)
#define PBEKLCMIPAL_ELEPDOMDAGA_2_OFFSET UNITYSDK_OFFSET(0xBFE3880)
#define PBEKLCMIPAL_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xBFE3220)
#define PBEKLCMIPAL_KJHFONLPFDG_OFFSET UNITYSDK_OFFSET(0xBFE3490)
#define PBEKLCMIPAL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBFE39D0)
#define PBEKLCMIPAL_NBJBJFMJIDF_1_OFFSET UNITYSDK_OFFSET(0xBFE36B0)
#define PBEKLCMIPAL_NBJBJFMJIDF_OFFSET UNITYSDK_OFFSET(0xBFE32D0)
#define PBEKLCMIPAL_OAFHHCFIJBC_1_OFFSET UNITYSDK_OFFSET(0xBFE3F70)
#define PBEKLCMIPAL_OAFHHCFIJBC_OFFSET UNITYSDK_OFFSET(0xBFE3C50)

inline static constexpr unsigned int PBEKLCMIPAL_TypeDefinitionIndex = 51709;

	class PBEKLCMIPAL : public ::System::Object
	{
	public:
		static ::UnityEngine::Networking::UnityWebRequest** StaticGet_PCLIEKPBNIB()
		{
			return (::UnityEngine::Networking::UnityWebRequest**)UnitySDK::FromName("", "PBEKLCMIPAL")->GetStaticField(0x68CE0);
		}

		static ::System::String** StaticGet_OCHOHJFMMIM()
		{
			return (::System::String**)UnitySDK::FromName("", "PBEKLCMIPAL")->GetStaticField(0x68CE8);
		}

		static ::System::Collections::Generic::Queue_1<::System::String*>** StaticGet_LHKEFIECHNO()
		{
			return (::System::Collections::Generic::Queue_1<::System::String*>**)UnitySDK::FromName("", "PBEKLCMIPAL")->GetStaticField(0x68CF0);
		}

		static ::System::Uri** StaticGet_BFIKAFECNLC()
		{
			return (::System::Uri**)UnitySDK::FromName("", "PBEKLCMIPAL")->GetStaticField(0x68CF8);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_DDGKONKNNIM()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)UnitySDK::FromName("", "PBEKLCMIPAL")->GetStaticField(0x68D00);
		}

		static ::System::String** StaticGet_EAPFHMKBKNE()
		{
			return (::System::String**)UnitySDK::FromName("", "PBEKLCMIPAL")->GetStaticField(0x68D08);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_IKOCAOENCFG()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)UnitySDK::FromName("", "PBEKLCMIPAL")->GetStaticField(0x68D10);
		}

		static ::OLGBOBMGFIA** StaticGet_ONOJFGCGJOB()
		{
			return (::OLGBOBMGFIA**)UnitySDK::FromName("", "PBEKLCMIPAL")->GetStaticField(0x68D18);
		}

		static ::System::Text::StringBuilder** StaticGet_BKLIGLDOEGF()
		{
			return (::System::Text::StringBuilder**)UnitySDK::FromName("", "PBEKLCMIPAL")->GetStaticField(0x68D20);
		}

		static ::System::Boolean* StaticGet_NJGPOCALKFE()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PBEKLCMIPAL")->GetStaticField(0x14E50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBEKLCMIPAL_CCTOR_OFFSET))();
		}

		static ::System::Void ELEPDOMDAGA(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + PBEKLCMIPAL_ELEPDOMDAGA_OFFSET))(a1);
		}

		static ::System::Void ELEPDOMDAGA_1(::System::Collections::Generic::Dictionary_2<::System::String*, ::OLGBOBMGFIA*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::OLGBOBMGFIA*>*))((::PBYTE)hIl2Cpp + PBEKLCMIPAL_ELEPDOMDAGA_1_OFFSET))(a1);
		}

		static ::System::Void ELEPDOMDAGA_2(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PBEKLCMIPAL_ELEPDOMDAGA_2_OFFSET))(a1);
		}

		static ::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBEKLCMIPAL_KPJGDHLENIP_OFFSET))();
		}

		static ::System::Void CDLLNIDGONB(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + PBEKLCMIPAL_CDLLNIDGONB_OFFSET))(a1, a2);
		}

		static ::System::Void KJHFONLPFDG()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBEKLCMIPAL_KJHFONLPFDG_OFFSET))();
		}

		static ::System::Collections::IEnumerator* DKHAAPAIFOG()
		{
			return ((::System::Collections::IEnumerator*(*)())((::PBYTE)hIl2Cpp + PBEKLCMIPAL_DKHAAPAIFOG_OFFSET))();
		}

		static ::System::String* NBJBJFMJIDF(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + PBEKLCMIPAL_NBJBJFMJIDF_OFFSET))(a1);
		}

		static ::System::String* OAFHHCFIJBC(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + PBEKLCMIPAL_OAFHHCFIJBC_OFFSET))(a1);
		}

		static ::System::String* NBJBJFMJIDF_1(::System::Collections::Generic::Dictionary_2<::System::String*, ::OLGBOBMGFIA*>* a1)
		{
			return ((::System::String*(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::OLGBOBMGFIA*>*))((::PBYTE)hIl2Cpp + PBEKLCMIPAL_NBJBJFMJIDF_1_OFFSET))(a1);
		}

		static ::System::Void OAFHHCFIJBC_1(::System::Text::StringBuilder* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::OLGBOBMGFIA*>* a2)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::OLGBOBMGFIA*>*))((::PBYTE)hIl2Cpp + PBEKLCMIPAL_OAFHHCFIJBC_1_OFFSET))(a1, a2);
		}

	};
