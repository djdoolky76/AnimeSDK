#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGKHOGNMPMO;
class ODGPPIHLOFF;
class OFLBAIOGIMO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ALEAFADNBPL_ADLHNKOLGHL_OFFSET UNITYSDK_OFFSET(0x155643C0)
#define ALEAFADNBPL_CCTOR_OFFSET UNITYSDK_OFFSET(0x15564FF0)
#define ALEAFADNBPL_DMBBMCMNECL_OFFSET UNITYSDK_OFFSET(0x15564790)
#define ALEAFADNBPL_ELJIAJLMJIO_OFFSET UNITYSDK_OFFSET(0x15564830)
#define ALEAFADNBPL_INNOGOBKOCJ_OFFSET UNITYSDK_OFFSET(0x155641D0)
#define ALEAFADNBPL_MBJLECNOAAB_OFFSET UNITYSDK_OFFSET(0x15563E50)
#define ALEAFADNBPL_NGINDNLDJAA_OFFSET UNITYSDK_OFFSET(0x15564050)

	class ALEAFADNBPL : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_JFPJIMPMPAG()
		{
			return (::System::Action**)UnitySDK::FromName("", "ALEAFADNBPL")->GetStaticField(0x5E1A0);
		}

		static ::ODGPPIHLOFF** StaticGet_OEPKPNECODG()
		{
			return (::ODGPPIHLOFF**)UnitySDK::FromName("", "ALEAFADNBPL")->GetStaticField(0x5E1A8);
		}

		static ::System::Action** StaticGet_PPCAPJJKHNE()
		{
			return (::System::Action**)UnitySDK::FromName("", "ALEAFADNBPL")->GetStaticField(0x5E1B0);
		}

		static ::ODGPPIHLOFF** StaticGet_DOJJOAFMGFM()
		{
			return (::ODGPPIHLOFF**)UnitySDK::FromName("", "ALEAFADNBPL")->GetStaticField(0x5E1B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALEAFADNBPL_CCTOR_OFFSET))();
		}

		static ::ODGPPIHLOFF* MBJLECNOAAB()
		{
			return ((::ODGPPIHLOFF*(*)())((::PBYTE)hIl2Cpp + ALEAFADNBPL_MBJLECNOAAB_OFFSET))();
		}

		static ::ODGPPIHLOFF* NGINDNLDJAA()
		{
			return ((::ODGPPIHLOFF*(*)())((::PBYTE)hIl2Cpp + ALEAFADNBPL_NGINDNLDJAA_OFFSET))();
		}

		static ::System::Void INNOGOBKOCJ(::System::Int64 a1, ::System::Boolean a2, ::AGKHOGNMPMO* a3)
		{
			return ((::System::Void(*)(::System::Int64, ::System::Boolean, ::AGKHOGNMPMO*))((::PBYTE)hIl2Cpp + ALEAFADNBPL_INNOGOBKOCJ_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ADLHNKOLGHL(::System::Int64 a1, ::System::Boolean a2, ::AGKHOGNMPMO* a3)
		{
			return ((::System::Void(*)(::System::Int64, ::System::Boolean, ::AGKHOGNMPMO*))((::PBYTE)hIl2Cpp + ALEAFADNBPL_ADLHNKOLGHL_OFFSET))(a1, a2, a3);
		}

		static ::ODGPPIHLOFF* DMBBMCMNECL(::System::Collections::Generic::List_1<::ODGPPIHLOFF*>* a1, ::System::Action* a2, ::System::Int32 a3)
		{
			return ((::ODGPPIHLOFF*(*)(::System::Collections::Generic::List_1<::ODGPPIHLOFF*>*, ::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + ALEAFADNBPL_DMBBMCMNECL_OFFSET))(a1, a2, a3);
		}

		static ::ODGPPIHLOFF* ELJIAJLMJIO(::System::Collections::Generic::List_1<::ODGPPIHLOFF*>* a1, ::OFLBAIOGIMO* a2, ::System::Int32 a3)
		{
			return ((::ODGPPIHLOFF*(*)(::System::Collections::Generic::List_1<::ODGPPIHLOFF*>*, ::OFLBAIOGIMO*, ::System::Int32))((::PBYTE)hIl2Cpp + ALEAFADNBPL_ELJIAJLMJIO_OFFSET))(a1, a2, a3);
		}

	};
