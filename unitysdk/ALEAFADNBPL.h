#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGKHOGNMPMO;
class ODGPPIHLOFF;
class OFLBAIOGIMO;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ALEAFADNBPL_ADLHNKOLGHL_OFFSET UNITYSDK_OFFSET(0x197BCD00)
#define ALEAFADNBPL_CCTOR_OFFSET UNITYSDK_OFFSET(0x197BD930)
#define ALEAFADNBPL_DMBBMCMNECL_OFFSET UNITYSDK_OFFSET(0x197BD0D0)
#define ALEAFADNBPL_ELJIAJLMJIO_OFFSET UNITYSDK_OFFSET(0x197BD170)
#define ALEAFADNBPL_INNOGOBKOCJ_OFFSET UNITYSDK_OFFSET(0x197BCB10)
#define ALEAFADNBPL_MBJLECNOAAB_OFFSET UNITYSDK_OFFSET(0x197BC790)
#define ALEAFADNBPL_NGINDNLDJAA_OFFSET UNITYSDK_OFFSET(0x197BC990)

inline static constexpr unsigned int ALEAFADNBPL_TypeDefinitionIndex = 50283;

	class ALEAFADNBPL : public ::System::Object
	{
	public:
		static ::System::Action_3<::System::Int64, ::System::Boolean, ::AGKHOGNMPMO*>** StaticGet_JFPJIMPMPAG()
		{
			return (::System::Action_3<::System::Int64, ::System::Boolean, ::AGKHOGNMPMO*>**)UnitySDK::FromName("", "ALEAFADNBPL")->GetStaticField(0x52EA0);
		}

		static ::ODGPPIHLOFF** StaticGet_DOJJOAFMGFM()
		{
			return (::ODGPPIHLOFF**)UnitySDK::FromName("", "ALEAFADNBPL")->GetStaticField(0x52EA8);
		}

		static ::System::Action_3<::System::Int64, ::System::Boolean, ::AGKHOGNMPMO*>** StaticGet_PPCAPJJKHNE()
		{
			return (::System::Action_3<::System::Int64, ::System::Boolean, ::AGKHOGNMPMO*>**)UnitySDK::FromName("", "ALEAFADNBPL")->GetStaticField(0x52EB0);
		}

		static ::ODGPPIHLOFF** StaticGet_OEPKPNECODG()
		{
			return (::ODGPPIHLOFF**)UnitySDK::FromName("", "ALEAFADNBPL")->GetStaticField(0x52EB8);
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

		static ::ODGPPIHLOFF* DMBBMCMNECL(::System::Collections::Generic::List_1<::ODGPPIHLOFF*>* a1, ::System::Action_1<::System::Boolean>* a2, ::System::Int32 a3)
		{
			return ((::ODGPPIHLOFF*(*)(::System::Collections::Generic::List_1<::ODGPPIHLOFF*>*, ::System::Action_1<::System::Boolean>*, ::System::Int32))((::PBYTE)hIl2Cpp + ALEAFADNBPL_DMBBMCMNECL_OFFSET))(a1, a2, a3);
		}

		static ::ODGPPIHLOFF* ELJIAJLMJIO(::System::Collections::Generic::List_1<::ODGPPIHLOFF*>* a1, ::OFLBAIOGIMO* a2, ::System::Int32 a3)
		{
			return ((::ODGPPIHLOFF*(*)(::System::Collections::Generic::List_1<::ODGPPIHLOFF*>*, ::OFLBAIOGIMO*, ::System::Int32))((::PBYTE)hIl2Cpp + ALEAFADNBPL_ELJIAJLMJIO_OFFSET))(a1, a2, a3);
		}

	};
