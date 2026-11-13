#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ParsingError.h"
#include "unitysdk/System/UriComponents.h"
#include "unitysdk/System/UriFormat.h"
#include "unitysdk/System/UriHostNameType.h"
#include "unitysdk/System/UriIdnScope.h"
#include "unitysdk/System/UriKind.h"
#include "unitysdk/System/UriPartial.h"
#include "unitysdk/System/Uri_Check.h"
#include "unitysdk/System/Uri_Flags.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { class Uri; }
namespace System { class UriFormatException; }
namespace System { class UriParser; }
namespace System { class Uri_UriInfo; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_URI_ALLOWIDNSTATIC_OFFSET UNITYSDK_OFFSET(0x190DB0D0)
#define SYSTEM_URI_CALCULATECASEINSENSITIVEHASHCODE_OFFSET UNITYSDK_OFFSET(0x190E1CB0)
#define SYSTEM_URI_CCTOR_OFFSET UNITYSDK_OFFSET(0x190ED970)
#define SYSTEM_URI_CHECKAUTHORITYHELPERHANDLEANYHOSTIRI_OFFSET UNITYSDK_OFFSET(0x190EA060)
#define SYSTEM_URI_CHECKAUTHORITYHELPERHANDLEDNSIRI_OFFSET UNITYSDK_OFFSET(0x190E9B50)
#define SYSTEM_URI_CHECKAUTHORITYHELPER_OFFSET UNITYSDK_OFFSET(0x190E4A30)
#define SYSTEM_URI_CHECKCANONICAL_OFFSET UNITYSDK_OFFSET(0x190E65C0)
#define SYSTEM_URI_CHECKFORCOLONINFIRSTPATHSEGMENT_OFFSET UNITYSDK_OFFSET(0x190E2F70)
#define SYSTEM_URI_CHECKFORCONFIGLOAD_OFFSET UNITYSDK_OFFSET(0x190EC2D0)
#define SYSTEM_URI_CHECKFORESCAPEDUNRESERVED_OFFSET UNITYSDK_OFFSET(0x190EC4A0)
#define SYSTEM_URI_CHECKFORUNICODE_OFFSET UNITYSDK_OFFSET(0x190EC390)
#define SYSTEM_URI_CHECKKNOWNSCHEMES_OFFSET UNITYSDK_OFFSET(0x190E93D0)
#define SYSTEM_URI_CHECKSCHEMENAME_OFFSET UNITYSDK_OFFSET(0x190E18D0)
#define SYSTEM_URI_CHECKSCHEMESYNTAX_OFFSET UNITYSDK_OFFSET(0x190DE420)
#define SYSTEM_URI_COMBINEURI_OFFSET UNITYSDK_OFFSET(0x190DE5C0)
#define SYSTEM_URI_COMPRESS_OFFSET UNITYSDK_OFFSET(0x190E0AA0)
#define SYSTEM_URI_CREATEHELPER_OFFSET UNITYSDK_OFFSET(0x190EC8A0)
#define SYSTEM_URI_CREATEHOSTSTRINGHELPER_OFFSET UNITYSDK_OFFSET(0x190E6380)
#define SYSTEM_URI_CREATEHOSTSTRING_OFFSET UNITYSDK_OFFSET(0x190DCAD0)
#define SYSTEM_URI_CREATETHISFROMURI_OFFSET UNITYSDK_OFFSET(0x190DDBA0)
#define SYSTEM_URI_CREATETHIS_OFFSET UNITYSDK_OFFSET(0x190DCFD0)
#define SYSTEM_URI_CREATEURIINFO_OFFSET UNITYSDK_OFFSET(0x190DB290)
#define SYSTEM_URI_CREATEURI_OFFSET UNITYSDK_OFFSET(0x190DD2A0)
#define SYSTEM_URI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x190DD190)
#define SYSTEM_URI_CTOR_2_OFFSET UNITYSDK_OFFSET(0x190DD1E0)
#define SYSTEM_URI_CTOR_3_OFFSET UNITYSDK_OFFSET(0x190DDED0)
#define SYSTEM_URI_CTOR_4_OFFSET UNITYSDK_OFFSET(0x190DF330)
#define SYSTEM_URI_CTOR_5_OFFSET UNITYSDK_OFFSET(0x190ED960)
#define SYSTEM_URI_CTOR_OFFSET UNITYSDK_OFFSET(0x190DCF80)
#define SYSTEM_URI_ENSUREHOSTSTRING_OFFSET UNITYSDK_OFFSET(0x190DCA70)
#define SYSTEM_URI_ENSUREPARSEREMAINING_OFFSET UNITYSDK_OFFSET(0x190DB990)
#define SYSTEM_URI_ENSUREURIINFO_OFFSET UNITYSDK_OFFSET(0x190DB260)
#define SYSTEM_URI_EQUALS_OFFSET UNITYSDK_OFFSET(0x190E2070)
#define SYSTEM_URI_ESCAPEDATASTRING_OFFSET UNITYSDK_OFFSET(0x190ED890)
#define SYSTEM_URI_ESCAPEUNESCAPEIRI_OFFSET UNITYSDK_OFFSET(0x190E93B0)
#define SYSTEM_URI_ESCAPEURISTRING_OFFSET UNITYSDK_OFFSET(0x190ED7C0)
#define SYSTEM_URI_FINDENDOFCOMPONENT_1_OFFSET UNITYSDK_OFFSET(0x190EA6B0)
#define SYSTEM_URI_FINDENDOFCOMPONENT_OFFSET UNITYSDK_OFFSET(0x190E9320)
#define SYSTEM_URI_FROMHEX_OFFSET UNITYSDK_OFFSET(0x190E1B00)
#define SYSTEM_URI_GETCANONICALPATH_OFFSET UNITYSDK_OFFSET(0x190E89C0)
#define SYSTEM_URI_GETCOMBINEDSTRING_OFFSET UNITYSDK_OFFSET(0x190DE150)
#define SYSTEM_URI_GETCOMPONENTSHELPER_OFFSET UNITYSDK_OFFSET(0x190E1E30)
#define SYSTEM_URI_GETCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x190E6BA0)
#define SYSTEM_URI_GETESCAPEDPARTS_OFFSET UNITYSDK_OFFSET(0x190E6D50)
#define SYSTEM_URI_GETEXCEPTION_OFFSET UNITYSDK_OFFSET(0x190DF170)
#define SYSTEM_URI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x190E1B80)
#define SYSTEM_URI_GETHOSTVIACUSTOMSYNTAX_OFFSET UNITYSDK_OFFSET(0x190E5E00)
#define SYSTEM_URI_GETLEFTPART_OFFSET UNITYSDK_OFFSET(0x190E17A0)
#define SYSTEM_URI_GETLOCALPATH_OFFSET UNITYSDK_OFFSET(0x190DF800)
#define SYSTEM_URI_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x190DF410)
#define SYSTEM_URI_GETPARTS_OFFSET UNITYSDK_OFFSET(0x190DF570)
#define SYSTEM_URI_GETRELATIVESERIALIZATIONSTRING_OFFSET UNITYSDK_OFFSET(0x190ECB60)
#define SYSTEM_URI_GETUNESCAPEDPARTS_OFFSET UNITYSDK_OFFSET(0x190E0F70)
#define SYSTEM_URI_GETURIPARTSFROMUSERSTRING_OFFSET UNITYSDK_OFFSET(0x190E6E80)
#define SYSTEM_URI_GET_ABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x190DF580)
#define SYSTEM_URI_GET_ABSOLUTEURI_OFFSET UNITYSDK_OFFSET(0x190DF6D0)
#define SYSTEM_URI_GET_ALLOWIDN_OFFSET UNITYSDK_OFFSET(0x190DB030)
#define SYSTEM_URI_GET_AUTHORITY_OFFSET UNITYSDK_OFFSET(0x190E02A0)
#define SYSTEM_URI_GET_DNSSAFEHOST_OFFSET UNITYSDK_OFFSET(0x190E13F0)
#define SYSTEM_URI_GET_FRAGMENT_OFFSET UNITYSDK_OFFSET(0x190E1210)
#define SYSTEM_URI_GET_HASAUTHORITY_OFFSET UNITYSDK_OFFSET(0x190EB930)
#define SYSTEM_URI_GET_HOSTNAMETYPE_OFFSET UNITYSDK_OFFSET(0x190E0300)
#define SYSTEM_URI_GET_HOSTTYPE_OFFSET UNITYSDK_OFFSET(0x190DAF70)
#define SYSTEM_URI_GET_HOST_OFFSET UNITYSDK_OFFSET(0x190E0710)
#define SYSTEM_URI_GET_INITIALIZELOCK_OFFSET UNITYSDK_OFFSET(0x190E0790)
#define SYSTEM_URI_GET_ISABSOLUTEURI_OFFSET UNITYSDK_OFFSET(0x190DD290)
#define SYSTEM_URI_GET_ISDEFAULTPORT_OFFSET UNITYSDK_OFFSET(0x190E0400)
#define SYSTEM_URI_GET_ISDOSPATH_OFFSET UNITYSDK_OFFSET(0x190DAF50)
#define SYSTEM_URI_GET_ISFILE_OFFSET UNITYSDK_OFFSET(0x190E04C0)
#define SYSTEM_URI_GET_ISIMPLICITFILE_OFFSET UNITYSDK_OFFSET(0x190DAF30)
#define SYSTEM_URI_GET_ISLOOPBACK_OFFSET UNITYSDK_OFFSET(0x190E0540)
#define SYSTEM_URI_GET_ISNOTABSOLUTEURI_OFFSET UNITYSDK_OFFSET(0x190DAF90)
#define SYSTEM_URI_GET_ISUNCORDOSPATH_OFFSET UNITYSDK_OFFSET(0x190DAF40)
#define SYSTEM_URI_GET_ISUNCPATH_OFFSET UNITYSDK_OFFSET(0x190DAF60)
#define SYSTEM_URI_GET_ISUNC_OFFSET UNITYSDK_OFFSET(0x190E0690)
#define SYSTEM_URI_GET_LOCALPATH_OFFSET UNITYSDK_OFFSET(0x190DF790)
#define SYSTEM_URI_GET_ORIGINALSTRINGSWITCHED_OFFSET UNITYSDK_OFFSET(0x190E1320)
#define SYSTEM_URI_GET_ORIGINALSTRING_OFFSET UNITYSDK_OFFSET(0x190DE4F0)
#define SYSTEM_URI_GET_PATHANDQUERY_OFFSET UNITYSDK_OFFSET(0x190E05D0)
#define SYSTEM_URI_GET_PORT_OFFSET UNITYSDK_OFFSET(0x190E1090)
#define SYSTEM_URI_GET_PRIVATEABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x190DF630)
#define SYSTEM_URI_GET_QUERY_OFFSET UNITYSDK_OFFSET(0x190E1150)
#define SYSTEM_URI_GET_SCHEME_OFFSET UNITYSDK_OFFSET(0x190E12D0)
#define SYSTEM_URI_GET_SECUREDPATHINDEX_OFFSET UNITYSDK_OFFSET(0x190DB1C0)
#define SYSTEM_URI_GET_SYNTAX_OFFSET UNITYSDK_OFFSET(0x190DAF80)
#define SYSTEM_URI_GET_USERDRIVENPARSING_OFFSET UNITYSDK_OFFSET(0x190DB190)
#define SYSTEM_URI_GET_USERESCAPED_OFFSET UNITYSDK_OFFSET(0x190E1710)
#define SYSTEM_URI_GET_USERINFO_OFFSET UNITYSDK_OFFSET(0x190E1720)
#define SYSTEM_URI_INFACT_OFFSET UNITYSDK_OFFSET(0x190DB240)
#define SYSTEM_URI_INITIALIZEURICONFIG_OFFSET UNITYSDK_OFFSET(0x190E0840)
#define SYSTEM_URI_INITIALIZEURI_OFFSET UNITYSDK_OFFSET(0x190EB970)
#define SYSTEM_URI_INTERNALESCAPESTRING_OFFSET UNITYSDK_OFFSET(0x190E3050)
#define SYSTEM_URI_INTERNALISWELLFORMEDORIGINALSTRING_OFFSET UNITYSDK_OFFSET(0x190ECE50)
#define SYSTEM_URI_IRIPARSINGSTATIC_OFFSET UNITYSDK_OFFSET(0x190DAFA0)
#define SYSTEM_URI_ISASCIILETTERORDIGIT_OFFSET UNITYSDK_OFFSET(0x190E1AA0)
#define SYSTEM_URI_ISASCIILETTER_OFFSET UNITYSDK_OFFSET(0x190E1A90)
#define SYSTEM_URI_ISBIDICONTROLCHARACTER_OFFSET UNITYSDK_OFFSET(0x190EB940)
#define SYSTEM_URI_ISGENDELIM_OFFSET UNITYSDK_OFFSET(0x190E18B0)
#define SYSTEM_URI_ISHEXDIGIT_OFFSET UNITYSDK_OFFSET(0x190E1AE0)
#define SYSTEM_URI_ISINTRANET_OFFSET UNITYSDK_OFFSET(0x190DB180)
#define SYSTEM_URI_ISLWS_OFFSET UNITYSDK_OFFSET(0x190E49A0)
#define SYSTEM_URI_ISWELLFORMEDORIGINALSTRING_OFFSET UNITYSDK_OFFSET(0x190ECDA0)
#define SYSTEM_URI_ISWELLFORMEDURISTRING_OFFSET UNITYSDK_OFFSET(0x190ED510)
#define SYSTEM_URI_MAKERELATIVEURI_OFFSET UNITYSDK_OFFSET(0x190E2820)
#define SYSTEM_URI_NOTANY_OFFSET UNITYSDK_OFFSET(0x190DB0C0)
#define SYSTEM_URI_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x190E2040)
#define SYSTEM_URI_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x190DDB60)
#define SYSTEM_URI_PARSEMINIMAL_OFFSET UNITYSDK_OFFSET(0x190E4260)
#define SYSTEM_URI_PARSEREMAINING_OFFSET UNITYSDK_OFFSET(0x190DB9A0)
#define SYSTEM_URI_PARSESCHEMECHECKIMPLICITFILE_OFFSET UNITYSDK_OFFSET(0x190E3D30)
#define SYSTEM_URI_PARSESCHEME_OFFSET UNITYSDK_OFFSET(0x190E3CA0)
#define SYSTEM_URI_PATHDIFFERENCE_OFFSET UNITYSDK_OFFSET(0x190E2BF0)
#define SYSTEM_URI_PRIVATEPARSEMINIMALIRI_OFFSET UNITYSDK_OFFSET(0x190E5BF0)
#define SYSTEM_URI_PRIVATEPARSEMINIMAL_OFFSET UNITYSDK_OFFSET(0x190E42B0)
#define SYSTEM_URI_RECREATEPARTS_OFFSET UNITYSDK_OFFSET(0x190E77E0)
#define SYSTEM_URI_RESOLVEHELPER_OFFSET UNITYSDK_OFFSET(0x190DD4C0)
#define SYSTEM_URI_SETUSERDRIVENPARSING_OFFSET UNITYSDK_OFFSET(0x190DB1A0)
#define SYSTEM_URI_STATICINFACT_OFFSET UNITYSDK_OFFSET(0x190DB250)
#define SYSTEM_URI_STATICISFILE_OFFSET UNITYSDK_OFFSET(0x190E0770)
#define SYSTEM_URI_STATICNOTANY_OFFSET UNITYSDK_OFFSET(0x190DB170)
#define SYSTEM_URI_STRIPBIDICONTROLCHARACTER_OFFSET UNITYSDK_OFFSET(0x190EA550)
#define SYSTEM_URI_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x190DF400)
#define SYSTEM_URI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x190E1D80)
#define SYSTEM_URI_TRYCREATE_OFFSET UNITYSDK_OFFSET(0x190E2790)
#define SYSTEM_URI_UNESCAPEDATASTRING_OFFSET UNITYSDK_OFFSET(0x190ED650)
#define SYSTEM_URI_UNESCAPEONLY_OFFSET UNITYSDK_OFFSET(0x190EA7E0)

namespace System
{
	inline static constexpr unsigned int Uri_TypeDefinitionIndex = 2461;

	class Uri : public ::System::Object
	{
	public:
		::System::String* m_String; // 0x10
		::System::UriParser* m_Syntax; // 0x18
		::System::String* m_DnsSafeHost; // 0x20
		::System::String* m_originalUnicodeString; // 0x28
		::System::Uri_UriInfo* m_Info; // 0x30
		::System::Uri_Flags m_Flags; // 0x38
		::System::Byte _padding0[0x4];
		::System::Boolean m_iriParsing; // 0x40
		static ::System::Object** StaticGet_s_initLock()
		{
			return (::System::Object**)UnitySDK::FromName("System", "Uri")->GetStaticField(0x1E3C0);
		}

		static ::System::String** StaticGet_UriSchemeNetPipe()
		{
			return (::System::String**)UnitySDK::FromName("System", "Uri")->GetStaticField(0x1E3C8);
		}

		static ::System::String** StaticGet_UriSchemeMailto()
		{
			return (::System::String**)UnitySDK::FromName("System", "Uri")->GetStaticField(0x1E3D0);
		}

		static ::System::String** StaticGet_UriSchemeFtp()
		{
			return (::System::String**)UnitySDK::FromName("System", "Uri")->GetStaticField(0x1E3D8);
		}

		static ::Il2CppArray<::System::Char>** StaticGet__WSchars()
		{
			return (::Il2CppArray<::System::Char>**)UnitySDK::FromName("System", "Uri")->GetStaticField(0x1E3E0);
		}

		static ::System::String** StaticGet_SchemeDelimiter()
		{
			return (::System::String**)UnitySDK::FromName("System", "Uri")->GetStaticField(0x1E3E8);
		}

		static ::System::String** StaticGet_UriSchemeNews()
		{
			return (::System::String**)UnitySDK::FromName("System", "Uri")->GetStaticField(0x1E3F0);
		}

		static ::System::String** StaticGet_UriSchemeHttp()
		{
			return (::System::String**)UnitySDK::FromName("System", "Uri")->GetStaticField(0x1E3F8);
		}

		static ::Il2CppArray<::System::Char>** StaticGet_HexLowerChars()
		{
			return (::Il2CppArray<::System::Char>**)UnitySDK::FromName("System", "Uri")->GetStaticField(0x1E400);
		}

		static ::System::String** StaticGet_UriSchemeNetTcp()
		{
			return (::System::String**)UnitySDK::FromName("System", "Uri")->GetStaticField(0x1E408);
		}

		static ::System::String** StaticGet_UriSchemeWss()
		{
			return (::System::String**)UnitySDK::FromName("System", "Uri")->GetStaticField(0x1E410);
		}

		static ::System::String** StaticGet_UriSchemeGopher()
		{
			return (::System::String**)UnitySDK::FromName("System", "Uri")->GetStaticField(0x1E418);
		}

		static ::System::String** StaticGet_UriSchemeFile()
		{
			return (::System::String**)UnitySDK::FromName("System", "Uri")->GetStaticField(0x1E420);
		}

		static ::System::String** StaticGet_UriSchemeNntp()
		{
			return (::System::String**)UnitySDK::FromName("System", "Uri")->GetStaticField(0x1E428);
		}

		static ::System::String** StaticGet_UriSchemeHttps()
		{
			return (::System::String**)UnitySDK::FromName("System", "Uri")->GetStaticField(0x1E430);
		}

		static ::System::String** StaticGet_UriSchemeWs()
		{
			return (::System::String**)UnitySDK::FromName("System", "Uri")->GetStaticField(0x1E438);
		}

		static ::System::Boolean* StaticGet_s_IriParsing()
		{
			return (::System::Boolean*)UnitySDK::FromName("System", "Uri")->GetStaticField(0x6780);
		}

		static ::System::Boolean* StaticGet_s_ConfigInitializing()
		{
			return (::System::Boolean*)UnitySDK::FromName("System", "Uri")->GetStaticField(0x6781);
		}

		static ::System::Boolean* StaticGet_IsWindowsFileSystem()
		{
			return (::System::Boolean*)UnitySDK::FromName("System", "Uri")->GetStaticField(0x6782);
		}

		static ::System::UriIdnScope* StaticGet_s_IdnScope()
		{
			return (::System::UriIdnScope*)UnitySDK::FromName("System", "Uri")->GetStaticField(0x6784);
		}

		static ::System::Boolean* StaticGet_useDotNetRelativeOrAbsolute()
		{
			return (::System::Boolean*)UnitySDK::FromName("System", "Uri")->GetStaticField(0x6788);
		}

		static ::System::Boolean* StaticGet_s_ConfigInitialized()
		{
			return (::System::Boolean*)UnitySDK::FromName("System", "Uri")->GetStaticField(0x6789);
		}

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URI_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::UriKind a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UriKind))((::PBYTE)hIl2Cpp + SYSTEM_URI_CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::Uri* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URI_CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::System::Uri* a1, ::System::Uri* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_URI_CTOR_3_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_4(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_URI_CTOR_4_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_5(::System::Uri_Flags a1, ::System::UriParser* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri_Flags, ::System::UriParser*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URI_CTOR_5_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_URI_CCTOR_OFFSET))();
		}

		::System::Boolean get_IsImplicitFile()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_ISIMPLICITFILE_OFFSET))(this);
		}

		::System::Boolean get_IsUncOrDosPath()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_ISUNCORDOSPATH_OFFSET))(this);
		}

		::System::Boolean get_IsDosPath()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_ISDOSPATH_OFFSET))(this);
		}

		::System::Boolean get_IsUncPath()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_ISUNCPATH_OFFSET))(this);
		}

		::System::Uri_Flags get_HostType()
		{
			return ((::System::Uri_Flags(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_HOSTTYPE_OFFSET))(this);
		}

		::System::UriParser* get_Syntax()
		{
			return ((::System::UriParser*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_SYNTAX_OFFSET))(this);
		}

		::System::Boolean get_IsNotAbsoluteUri()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_ISNOTABSOLUTEURI_OFFSET))(this);
		}

		static ::System::Boolean IriParsingStatic(::System::UriParser* a1)
		{
			return ((::System::Boolean(*)(::System::UriParser*))((::PBYTE)hIl2Cpp + SYSTEM_URI_IRIPARSINGSTATIC_OFFSET))(a1);
		}

		::System::Boolean get_AllowIdn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_ALLOWIDN_OFFSET))(this);
		}

		::System::Boolean AllowIdnStatic(::System::UriParser* a1, ::System::Uri_Flags a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UriParser*, ::System::Uri_Flags))((::PBYTE)hIl2Cpp + SYSTEM_URI_ALLOWIDNSTATIC_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsIntranet(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URI_ISINTRANET_OFFSET))(this, a1);
		}

		::System::Boolean get_UserDrivenParsing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_USERDRIVENPARSING_OFFSET))(this);
		}

		::System::Void SetUserDrivenParsing()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_SETUSERDRIVENPARSING_OFFSET))(this);
		}

		::System::UInt16 get_SecuredPathIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_SECUREDPATHINDEX_OFFSET))(this);
		}

		::System::Boolean NotAny(::System::Uri_Flags a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri_Flags))((::PBYTE)hIl2Cpp + SYSTEM_URI_NOTANY_OFFSET))(this, a1);
		}

		::System::Boolean InFact(::System::Uri_Flags a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri_Flags))((::PBYTE)hIl2Cpp + SYSTEM_URI_INFACT_OFFSET))(this, a1);
		}

		static ::System::Boolean StaticNotAny(::System::Uri_Flags a1, ::System::Uri_Flags a2)
		{
			return ((::System::Boolean(*)(::System::Uri_Flags, ::System::Uri_Flags))((::PBYTE)hIl2Cpp + SYSTEM_URI_STATICNOTANY_OFFSET))(a1, a2);
		}

		static ::System::Boolean StaticInFact(::System::Uri_Flags a1, ::System::Uri_Flags a2)
		{
			return ((::System::Boolean(*)(::System::Uri_Flags, ::System::Uri_Flags))((::PBYTE)hIl2Cpp + SYSTEM_URI_STATICINFACT_OFFSET))(a1, a2);
		}

		::System::Uri_UriInfo* EnsureUriInfo()
		{
			return ((::System::Uri_UriInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_ENSUREURIINFO_OFFSET))(this);
		}

		::System::Void EnsureParseRemaining()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_ENSUREPARSEREMAINING_OFFSET))(this);
		}

		::System::Void EnsureHostString(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_URI_ENSUREHOSTSTRING_OFFSET))(this, a1);
		}

		::System::Void CreateUri(::System::Uri* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_URI_CREATEURI_OFFSET))(this, a1, a2, a3);
		}

		static ::System::ParsingError GetCombinedString(::System::Uri* a1, ::System::String* a2, ::System::Boolean a3, ::System::String* a4)
		{
			return ((::System::ParsingError(*)(::System::Uri*, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URI_GETCOMBINEDSTRING_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::UriFormatException* GetException(::System::ParsingError a1)
		{
			return ((::System::UriFormatException*(*)(::System::ParsingError))((::PBYTE)hIl2Cpp + SYSTEM_URI_GETEXCEPTION_OFFSET))(a1);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_URI_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_URI_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::String* get_AbsolutePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_ABSOLUTEPATH_OFFSET))(this);
		}

		::System::String* get_PrivateAbsolutePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_PRIVATEABSOLUTEPATH_OFFSET))(this);
		}

		::System::String* get_AbsoluteUri()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_ABSOLUTEURI_OFFSET))(this);
		}

		::System::String* get_LocalPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_LOCALPATH_OFFSET))(this);
		}

		::System::String* get_Authority()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_AUTHORITY_OFFSET))(this);
		}

		::System::UriHostNameType get_HostNameType()
		{
			return ((::System::UriHostNameType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_HOSTNAMETYPE_OFFSET))(this);
		}

		::System::Boolean get_IsDefaultPort()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_ISDEFAULTPORT_OFFSET))(this);
		}

		::System::Boolean get_IsFile()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_ISFILE_OFFSET))(this);
		}

		::System::Boolean get_IsLoopback()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_ISLOOPBACK_OFFSET))(this);
		}

		::System::String* get_PathAndQuery()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_PATHANDQUERY_OFFSET))(this);
		}

		::System::Boolean get_IsUnc()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_ISUNC_OFFSET))(this);
		}

		::System::String* get_Host()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_HOST_OFFSET))(this);
		}

		static ::System::Boolean StaticIsFile(::System::UriParser* a1)
		{
			return ((::System::Boolean(*)(::System::UriParser*))((::PBYTE)hIl2Cpp + SYSTEM_URI_STATICISFILE_OFFSET))(a1);
		}

		static ::System::Object* get_InitializeLock()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_INITIALIZELOCK_OFFSET))();
		}

		static ::System::Void InitializeUriConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_URI_INITIALIZEURICONFIG_OFFSET))();
		}

		::System::String* GetLocalPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GETLOCALPATH_OFFSET))(this);
		}

		::System::Int32 get_Port()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_PORT_OFFSET))(this);
		}

		::System::String* get_Query()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_QUERY_OFFSET))(this);
		}

		::System::String* get_Fragment()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_FRAGMENT_OFFSET))(this);
		}

		::System::String* get_Scheme()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_SCHEME_OFFSET))(this);
		}

		::System::Boolean get_OriginalStringSwitched()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_ORIGINALSTRINGSWITCHED_OFFSET))(this);
		}

		::System::String* get_OriginalString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_ORIGINALSTRING_OFFSET))(this);
		}

		::System::String* get_DnsSafeHost()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_DNSSAFEHOST_OFFSET))(this);
		}

		::System::Boolean get_IsAbsoluteUri()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_ISABSOLUTEURI_OFFSET))(this);
		}

		::System::Boolean get_UserEscaped()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_USERESCAPED_OFFSET))(this);
		}

		::System::String* get_UserInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_USERINFO_OFFSET))(this);
		}

		::System::String* GetLeftPart(::System::UriPartial a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UriPartial))((::PBYTE)hIl2Cpp + SYSTEM_URI_GETLEFTPART_OFFSET))(this, a1);
		}

		static ::System::Boolean IsGenDelim(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_URI_ISGENDELIM_OFFSET))(a1);
		}

		static ::System::Boolean CheckSchemeName(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URI_CHECKSCHEMENAME_OFFSET))(a1);
		}

		static ::System::Boolean IsHexDigit(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_URI_ISHEXDIGIT_OFFSET))(a1);
		}

		static ::System::Int32 FromHex(::System::Char a1)
		{
			return ((::System::Int32(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_URI_FROMHEX_OFFSET))(a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_TOSTRING_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::System::Uri* a1, ::System::Uri* a2)
		{
			return ((::System::Boolean(*)(::System::Uri*, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_URI_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::System::Uri* a1, ::System::Uri* a2)
		{
			return ((::System::Boolean(*)(::System::Uri*, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_URI_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_URI_EQUALS_OFFSET))(this, a1);
		}

		::System::Uri* MakeRelativeUri(::System::Uri* a1)
		{
			return ((::System::Uri*(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_URI_MAKERELATIVEURI_OFFSET))(this, a1);
		}

		static ::System::Boolean CheckForColonInFirstPathSegment(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URI_CHECKFORCOLONINFIRSTPATHSEGMENT_OFFSET))(a1);
		}

		static ::System::String* InternalEscapeString(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URI_INTERNALESCAPESTRING_OFFSET))(a1);
		}

		static ::System::ParsingError ParseScheme(::System::String* a1, ::System::Uri_Flags a2, ::System::UriParser* a3)
		{
			return ((::System::ParsingError(*)(::System::String*, ::System::Uri_Flags, ::System::UriParser*))((::PBYTE)hIl2Cpp + SYSTEM_URI_PARSESCHEME_OFFSET))(a1, a2, a3);
		}

		::System::UriFormatException* ParseMinimal()
		{
			return ((::System::UriFormatException*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_PARSEMINIMAL_OFFSET))(this);
		}

		::System::ParsingError PrivateParseMinimal()
		{
			return ((::System::ParsingError(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_PRIVATEPARSEMINIMAL_OFFSET))(this);
		}

		::System::Void PrivateParseMinimalIri(::System::String* a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_URI_PRIVATEPARSEMINIMALIRI_OFFSET))(this, a1, a2);
		}

		::System::Void CreateUriInfo(::System::Uri_Flags a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri_Flags))((::PBYTE)hIl2Cpp + SYSTEM_URI_CREATEURIINFO_OFFSET))(this, a1);
		}

		::System::Void CreateHostString()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_CREATEHOSTSTRING_OFFSET))(this);
		}

		static ::System::String* CreateHostStringHelper(::System::String* a1, ::System::UInt16 a2, ::System::UInt16 a3, ::System::Uri_Flags a4, ::System::String* a5)
		{
			return ((::System::String*(*)(::System::String*, ::System::UInt16, ::System::UInt16, ::System::Uri_Flags, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URI_CREATEHOSTSTRINGHELPER_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Void GetHostViaCustomSyntax()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GETHOSTVIACUSTOMSYNTAX_OFFSET))(this);
		}

		::System::String* GetParts(::System::UriComponents a1, ::System::UriFormat a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::UriComponents, ::System::UriFormat))((::PBYTE)hIl2Cpp + SYSTEM_URI_GETPARTS_OFFSET))(this, a1, a2);
		}

		::System::String* GetEscapedParts(::System::UriComponents a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UriComponents))((::PBYTE)hIl2Cpp + SYSTEM_URI_GETESCAPEDPARTS_OFFSET))(this, a1);
		}

		::System::String* GetUnescapedParts(::System::UriComponents a1, ::System::UriFormat a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::UriComponents, ::System::UriFormat))((::PBYTE)hIl2Cpp + SYSTEM_URI_GETUNESCAPEDPARTS_OFFSET))(this, a1, a2);
		}

		::System::String* ReCreateParts(::System::UriComponents a1, ::System::UInt16 a2, ::System::UriFormat a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::UriComponents, ::System::UInt16, ::System::UriFormat))((::PBYTE)hIl2Cpp + SYSTEM_URI_RECREATEPARTS_OFFSET))(this, a1, a2, a3);
		}

		::System::String* GetUriPartsFromUserString(::System::UriComponents a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UriComponents))((::PBYTE)hIl2Cpp + SYSTEM_URI_GETURIPARTSFROMUSERSTRING_OFFSET))(this, a1);
		}

		::System::Void ParseRemaining()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_PARSEREMAINING_OFFSET))(this);
		}

		static ::System::UInt16 ParseSchemeCheckImplicitFile(::PVOID a1, ::System::UInt16 a2, ::System::ParsingError a3, ::System::Uri_Flags a4, ::System::UriParser* a5)
		{
			return ((::System::UInt16(*)(::PVOID, ::System::UInt16, ::System::ParsingError, ::System::Uri_Flags, ::System::UriParser*))((::PBYTE)hIl2Cpp + SYSTEM_URI_PARSESCHEMECHECKIMPLICITFILE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean CheckKnownSchemes(::PVOID a1, ::System::UInt16 a2, ::System::UriParser* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt16, ::System::UriParser*))((::PBYTE)hIl2Cpp + SYSTEM_URI_CHECKKNOWNSCHEMES_OFFSET))(a1, a2, a3);
		}

		static ::System::ParsingError CheckSchemeSyntax(::PVOID a1, ::System::UInt16 a2, ::System::UriParser* a3)
		{
			return ((::System::ParsingError(*)(::PVOID, ::System::UInt16, ::System::UriParser*))((::PBYTE)hIl2Cpp + SYSTEM_URI_CHECKSCHEMESYNTAX_OFFSET))(a1, a2, a3);
		}

		::System::UInt16 CheckAuthorityHelper(::PVOID a1, ::System::UInt16 a2, ::System::UInt16 a3, ::System::ParsingError a4, ::System::Uri_Flags a5, ::System::UriParser* a6, ::System::String* a7)
		{
			return ((::System::UInt16(*)(::PVOID, ::PVOID, ::System::UInt16, ::System::UInt16, ::System::ParsingError, ::System::Uri_Flags, ::System::UriParser*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URI_CHECKAUTHORITYHELPER_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void CheckAuthorityHelperHandleDnsIri(::PVOID a1, ::System::UInt16 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Boolean a5, ::System::Boolean a6, ::System::UriParser* a7, ::System::String* a8, ::System::Uri_Flags a9, ::System::Boolean a10, ::System::String* a11, ::System::ParsingError a12)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::UInt16, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::UriParser*, ::System::String*, ::System::Uri_Flags, ::System::Boolean, ::System::String*, ::System::ParsingError))((::PBYTE)hIl2Cpp + SYSTEM_URI_CHECKAUTHORITYHELPERHANDLEDNSIRI_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
		}

		::System::Void CheckAuthorityHelperHandleAnyHostIri(::PVOID a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Boolean a5, ::System::UriParser* a6, ::System::Uri_Flags a7, ::System::String* a8, ::System::ParsingError a9)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::UriParser*, ::System::Uri_Flags, ::System::String*, ::System::ParsingError))((::PBYTE)hIl2Cpp + SYSTEM_URI_CHECKAUTHORITYHELPERHANDLEANYHOSTIRI_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void FindEndOfComponent(::System::String* a1, ::System::UInt16 a2, ::System::UInt16 a3, ::System::Char a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt16, ::System::UInt16, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_URI_FINDENDOFCOMPONENT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void FindEndOfComponent_1(::PVOID a1, ::System::UInt16 a2, ::System::UInt16 a3, ::System::Char a4)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::UInt16, ::System::UInt16, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_URI_FINDENDOFCOMPONENT_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Uri_Check CheckCanonical(::PVOID a1, ::System::UInt16 a2, ::System::UInt16 a3, ::System::Char a4)
		{
			return ((::System::Uri_Check(*)(::PVOID, ::PVOID, ::System::UInt16, ::System::UInt16, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_URI_CHECKCANONICAL_OFFSET))(this, a1, a2, a3, a4);
		}

		::Il2CppArray<::System::Char>* GetCanonicalPath(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::UriFormat a3)
		{
			return ((::Il2CppArray<::System::Char>*(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::UriFormat))((::PBYTE)hIl2Cpp + SYSTEM_URI_GETCANONICALPATH_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void UnescapeOnly(::PVOID a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Char a4, ::System::Char a5, ::System::Char a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Char, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_URI_UNESCAPEONLY_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::Il2CppArray<::System::Char>* Compress(::Il2CppArray<::System::Char>* a1, ::System::UInt16 a2, ::System::Int32 a3, ::System::UriParser* a4)
		{
			return ((::Il2CppArray<::System::Char>*(*)(::Il2CppArray<::System::Char>*, ::System::UInt16, ::System::Int32, ::System::UriParser*))((::PBYTE)hIl2Cpp + SYSTEM_URI_COMPRESS_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 CalculateCaseInsensitiveHashCode(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URI_CALCULATECASEINSENSITIVEHASHCODE_OFFSET))(a1);
		}

		static ::System::String* CombineUri(::System::Uri* a1, ::System::String* a2, ::System::UriFormat a3)
		{
			return ((::System::String*(*)(::System::Uri*, ::System::String*, ::System::UriFormat))((::PBYTE)hIl2Cpp + SYSTEM_URI_COMBINEURI_OFFSET))(a1, a2, a3);
		}

		static ::System::String* PathDifference(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_URI_PATHDIFFERENCE_OFFSET))(a1, a2, a3);
		}

		::System::Boolean get_HasAuthority()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_HASAUTHORITY_OFFSET))(this);
		}

		static ::System::Boolean IsLWS(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_URI_ISLWS_OFFSET))(a1);
		}

		static ::System::Boolean IsAsciiLetter(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_URI_ISASCIILETTER_OFFSET))(a1);
		}

		static ::System::Boolean IsAsciiLetterOrDigit(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_URI_ISASCIILETTERORDIGIT_OFFSET))(a1);
		}

		static ::System::Boolean IsBidiControlCharacter(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_URI_ISBIDICONTROLCHARACTER_OFFSET))(a1);
		}

		static ::System::String* StripBidiControlCharacter(::PVOID a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_URI_STRIPBIDICONTROLCHARACTER_OFFSET))(a1, a2, a3);
		}

		::System::Void CreateThis(::System::String* a1, ::System::Boolean a2, ::System::UriKind a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::UriKind))((::PBYTE)hIl2Cpp + SYSTEM_URI_CREATETHIS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void InitializeUri(::System::ParsingError a1, ::System::UriKind a2, ::System::UriFormatException* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::ParsingError, ::System::UriKind, ::System::UriFormatException*))((::PBYTE)hIl2Cpp + SYSTEM_URI_INITIALIZEURI_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean CheckForConfigLoad(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URI_CHECKFORCONFIGLOAD_OFFSET))(this, a1);
		}

		::System::Boolean CheckForUnicode(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URI_CHECKFORUNICODE_OFFSET))(this, a1);
		}

		::System::Boolean CheckForEscapedUnreserved(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URI_CHECKFORESCAPEDUNRESERVED_OFFSET))(this, a1);
		}

		static ::System::Boolean TryCreate(::System::String* a1, ::System::UriKind a2, ::System::Uri* a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::UriKind, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_URI_TRYCREATE_OFFSET))(a1, a2, a3);
		}

		::System::String* GetComponents(::System::UriComponents a1, ::System::UriFormat a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::UriComponents, ::System::UriFormat))((::PBYTE)hIl2Cpp + SYSTEM_URI_GETCOMPONENTS_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsWellFormedOriginalString()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_ISWELLFORMEDORIGINALSTRING_OFFSET))(this);
		}

		static ::System::Boolean IsWellFormedUriString(::System::String* a1, ::System::UriKind a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::UriKind))((::PBYTE)hIl2Cpp + SYSTEM_URI_ISWELLFORMEDURISTRING_OFFSET))(a1, a2);
		}

		::System::Boolean InternalIsWellFormedOriginalString()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_INTERNALISWELLFORMEDORIGINALSTRING_OFFSET))(this);
		}

		static ::System::String* UnescapeDataString(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URI_UNESCAPEDATASTRING_OFFSET))(a1);
		}

		static ::System::String* EscapeUriString(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URI_ESCAPEURISTRING_OFFSET))(a1);
		}

		static ::System::String* EscapeDataString(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URI_ESCAPEDATASTRING_OFFSET))(a1);
		}

		::System::String* EscapeUnescapeIri(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::UriComponents a4)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::UriComponents))((::PBYTE)hIl2Cpp + SYSTEM_URI_ESCAPEUNESCAPEIRI_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Uri* CreateHelper(::System::String* a1, ::System::Boolean a2, ::System::UriKind a3, ::System::UriFormatException* a4)
		{
			return ((::System::Uri*(*)(::System::String*, ::System::Boolean, ::System::UriKind, ::System::UriFormatException*))((::PBYTE)hIl2Cpp + SYSTEM_URI_CREATEHELPER_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Uri* ResolveHelper(::System::Uri* a1, ::System::Uri* a2, ::System::String* a3, ::System::Boolean a4, ::System::UriFormatException* a5)
		{
			return ((::System::Uri*(*)(::System::Uri*, ::System::Uri*, ::System::String*, ::System::Boolean, ::System::UriFormatException*))((::PBYTE)hIl2Cpp + SYSTEM_URI_RESOLVEHELPER_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::String* GetRelativeSerializationString(::System::UriFormat a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UriFormat))((::PBYTE)hIl2Cpp + SYSTEM_URI_GETRELATIVESERIALIZATIONSTRING_OFFSET))(this, a1);
		}

		::System::String* GetComponentsHelper(::System::UriComponents a1, ::System::UriFormat a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::UriComponents, ::System::UriFormat))((::PBYTE)hIl2Cpp + SYSTEM_URI_GETCOMPONENTSHELPER_OFFSET))(this, a1, a2);
		}

		::System::Void CreateThisFromUri(::System::Uri* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_URI_CREATETHISFROMURI_OFFSET))(this, a1);
		}

	};
}
