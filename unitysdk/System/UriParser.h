#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/UriComponents.h"
#include "unitysdk/System/UriFormat.h"
#include "unitysdk/System/UriParser_UriQuirksVersion.h"
#include "unitysdk/System/UriSyntaxFlags.h"
namespace System { class String; }
namespace System { class Uri; }
namespace System { class UriFormatException; }
namespace System { class UriParser; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define SYSTEM_URIPARSER_CCTOR_OFFSET UNITYSDK_OFFSET(0x203A1630)
#define SYSTEM_URIPARSER_CTOR_OFFSET UNITYSDK_OFFSET(0x203A2430)
#define SYSTEM_URIPARSER_FINDORFETCHASUNKNOWNV1SYNTAX_OFFSET UNITYSDK_OFFSET(0x2039A9E0)
#define SYSTEM_URIPARSER_GETCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x203A1440)
#define SYSTEM_URIPARSER_GETSYNTAX_OFFSET UNITYSDK_OFFSET(0x203A00B0)
#define SYSTEM_URIPARSER_GET_DEFAULTPORT_OFFSET UNITYSDK_OFFSET(0x203A1150)
#define SYSTEM_URIPARSER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x203A23E0)
#define SYSTEM_URIPARSER_GET_ISSIMPLE_OFFSET UNITYSDK_OFFSET(0x2038E750)
#define SYSTEM_URIPARSER_GET_SCHEMENAME_OFFSET UNITYSDK_OFFSET(0x203A1140)
#define SYSTEM_URIPARSER_GET_SHOULDUSELEGACYV2QUIRKS_OFFSET UNITYSDK_OFFSET(0x2039A590)
#define SYSTEM_URIPARSER_INFACT_OFFSET UNITYSDK_OFFSET(0x2038C2A0)
#define SYSTEM_URIPARSER_INITIALIZEANDVALIDATE_OFFSET UNITYSDK_OFFSET(0x203A1170)
#define SYSTEM_URIPARSER_INTERNALGETCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x20397DA0)
#define SYSTEM_URIPARSER_INTERNALISWELLFORMEDORIGINALSTRING_OFFSET UNITYSDK_OFFSET(0x2039E720)
#define SYSTEM_URIPARSER_INTERNALONNEWURI_OFFSET UNITYSDK_OFFSET(0x2039D990)
#define SYSTEM_URIPARSER_INTERNALRESOLVE_OFFSET UNITYSDK_OFFSET(0x2038F0D0)
#define SYSTEM_URIPARSER_INTERNALVALIDATE_OFFSET UNITYSDK_OFFSET(0x2039DA30)
#define SYSTEM_URIPARSER_ISALLSET_OFFSET UNITYSDK_OFFSET(0x20395C60)
#define SYSTEM_URIPARSER_ISFULLMATCH_OFFSET UNITYSDK_OFFSET(0x203A23F0)
#define SYSTEM_URIPARSER_ISWELLFORMEDORIGINALSTRING_OFFSET UNITYSDK_OFFSET(0x203A1610)
#define SYSTEM_URIPARSER_NOTANY_OFFSET UNITYSDK_OFFSET(0x20395CA0)
#define SYSTEM_URIPARSER_ONNEWURI_OFFSET UNITYSDK_OFFSET(0x203A1160)
#define SYSTEM_URIPARSER_RESOLVE_OFFSET UNITYSDK_OFFSET(0x203A11D0)

namespace System
{
	inline static constexpr unsigned int UriParser_TypeDefinitionIndex = 2477;

	class UriParser : public ::System::Object
	{
	public:
		::System::String* m_Scheme; // 0x10
		::System::Boolean m_UpdatableFlagsUsed; // 0x18
		::System::Byte _padding0[0x3];
		::System::UriSyntaxFlags m_UpdatableFlags; // 0x1C
		::System::Int32 m_Port; // 0x20
		::System::UriSyntaxFlags m_Flags; // 0x24
		static ::System::UriParser** StaticGet_HttpUri()
		{
			return (::System::UriParser**)UnitySDK::FromName("System", "UriParser")->GetStaticField(0x3C440);
		}

		static ::System::UriParser** StaticGet_UuidUri()
		{
			return (::System::UriParser**)UnitySDK::FromName("System", "UriParser")->GetStaticField(0x3C448);
		}

		static ::System::UriParser** StaticGet_FtpUri()
		{
			return (::System::UriParser**)UnitySDK::FromName("System", "UriParser")->GetStaticField(0x3C450);
		}

		static ::System::UriParser** StaticGet_NetTcpUri()
		{
			return (::System::UriParser**)UnitySDK::FromName("System", "UriParser")->GetStaticField(0x3C458);
		}

		static ::System::UriParser** StaticGet_FileUri()
		{
			return (::System::UriParser**)UnitySDK::FromName("System", "UriParser")->GetStaticField(0x3C460);
		}

		static ::System::UriParser** StaticGet_MailToUri()
		{
			return (::System::UriParser**)UnitySDK::FromName("System", "UriParser")->GetStaticField(0x3C468);
		}

		static ::System::UriParser** StaticGet_WsUri()
		{
			return (::System::UriParser**)UnitySDK::FromName("System", "UriParser")->GetStaticField(0x3C470);
		}

		static ::System::UriParser** StaticGet_LdapUri()
		{
			return (::System::UriParser**)UnitySDK::FromName("System", "UriParser")->GetStaticField(0x3C478);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UriParser*>** StaticGet_m_Table()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UriParser*>**)UnitySDK::FromName("System", "UriParser")->GetStaticField(0x3C480);
		}

		static ::System::UriParser** StaticGet_NntpUri()
		{
			return (::System::UriParser**)UnitySDK::FromName("System", "UriParser")->GetStaticField(0x3C488);
		}

		static ::System::UriParser** StaticGet_NewsUri()
		{
			return (::System::UriParser**)UnitySDK::FromName("System", "UriParser")->GetStaticField(0x3C490);
		}

		static ::System::UriParser** StaticGet_HttpsUri()
		{
			return (::System::UriParser**)UnitySDK::FromName("System", "UriParser")->GetStaticField(0x3C498);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UriParser*>** StaticGet_m_TempTable()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UriParser*>**)UnitySDK::FromName("System", "UriParser")->GetStaticField(0x3C4A0);
		}

		static ::System::UriParser** StaticGet_NetPipeUri()
		{
			return (::System::UriParser**)UnitySDK::FromName("System", "UriParser")->GetStaticField(0x3C4A8);
		}

		static ::System::UriParser** StaticGet_GopherUri()
		{
			return (::System::UriParser**)UnitySDK::FromName("System", "UriParser")->GetStaticField(0x3C4B0);
		}

		static ::System::UriParser** StaticGet_VsMacrosUri()
		{
			return (::System::UriParser**)UnitySDK::FromName("System", "UriParser")->GetStaticField(0x3C4B8);
		}

		static ::System::UriParser** StaticGet_WssUri()
		{
			return (::System::UriParser**)UnitySDK::FromName("System", "UriParser")->GetStaticField(0x3C4C0);
		}

		static ::System::UriParser** StaticGet_TelnetUri()
		{
			return (::System::UriParser**)UnitySDK::FromName("System", "UriParser")->GetStaticField(0x3C4C8);
		}

		static ::System::UriSyntaxFlags* StaticGet_FileSyntaxFlags()
		{
			return (::System::UriSyntaxFlags*)UnitySDK::FromName("System", "UriParser")->GetStaticField(0xD4E0);
		}

		static ::System::UriParser_UriQuirksVersion* StaticGet_s_QuirksVersion()
		{
			return (::System::UriParser_UriQuirksVersion*)UnitySDK::FromName("System", "UriParser")->GetStaticField(0xD4E4);
		}

		static ::System::UriSyntaxFlags* StaticGet_HttpSyntaxFlags()
		{
			return (::System::UriSyntaxFlags*)UnitySDK::FromName("System", "UriParser")->GetStaticField(0xD4E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::UriSyntaxFlags a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UriSyntaxFlags))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_CTOR_OFFSET))(this, a1);
		}

		::System::String* get_SchemeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_GET_SCHEMENAME_OFFSET))(this);
		}

		::System::Int32 get_DefaultPort()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_GET_DEFAULTPORT_OFFSET))(this);
		}

		::System::UriParser* OnNewUri()
		{
			return ((::System::UriParser*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_ONNEWURI_OFFSET))(this);
		}

		::System::Void InitializeAndValidate(::System::Uri* a1, ::System::UriFormatException* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::UriFormatException*))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_INITIALIZEANDVALIDATE_OFFSET))(this, a1, a2);
		}

		::System::String* Resolve(::System::Uri* a1, ::System::Uri* a2, ::System::UriFormatException* a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::Uri*, ::System::Uri*, ::System::UriFormatException*))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_RESOLVE_OFFSET))(this, a1, a2, a3);
		}

		::System::String* GetComponents(::System::Uri* a1, ::System::UriComponents a2, ::System::UriFormat a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::Uri*, ::System::UriComponents, ::System::UriFormat))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_GETCOMPONENTS_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IsWellFormedOriginalString(::System::Uri* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_ISWELLFORMEDORIGINALSTRING_OFFSET))(this, a1);
		}

		static ::System::Boolean get_ShouldUseLegacyV2Quirks()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_GET_SHOULDUSELEGACYV2QUIRKS_OFFSET))();
		}

		::System::UriSyntaxFlags get_Flags()
		{
			return ((::System::UriSyntaxFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_GET_FLAGS_OFFSET))(this);
		}

		::System::Boolean NotAny(::System::UriSyntaxFlags a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UriSyntaxFlags))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_NOTANY_OFFSET))(this, a1);
		}

		::System::Boolean InFact(::System::UriSyntaxFlags a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UriSyntaxFlags))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_INFACT_OFFSET))(this, a1);
		}

		::System::Boolean IsAllSet(::System::UriSyntaxFlags a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UriSyntaxFlags))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_ISALLSET_OFFSET))(this, a1);
		}

		::System::Boolean IsFullMatch(::System::UriSyntaxFlags a1, ::System::UriSyntaxFlags a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UriSyntaxFlags, ::System::UriSyntaxFlags))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_ISFULLMATCH_OFFSET))(this, a1, a2);
		}

		static ::System::UriParser* FindOrFetchAsUnknownV1Syntax(::System::String* a1)
		{
			return ((::System::UriParser*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_FINDORFETCHASUNKNOWNV1SYNTAX_OFFSET))(a1);
		}

		static ::System::UriParser* GetSyntax(::System::String* a1)
		{
			return ((::System::UriParser*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_GETSYNTAX_OFFSET))(a1);
		}

		::System::Boolean get_IsSimple()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_GET_ISSIMPLE_OFFSET))(this);
		}

		::System::UriParser* InternalOnNewUri()
		{
			return ((::System::UriParser*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_INTERNALONNEWURI_OFFSET))(this);
		}

		::System::Void InternalValidate(::System::Uri* a1, ::System::UriFormatException* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::UriFormatException*))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_INTERNALVALIDATE_OFFSET))(this, a1, a2);
		}

		::System::String* InternalResolve(::System::Uri* a1, ::System::Uri* a2, ::System::UriFormatException* a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::Uri*, ::System::Uri*, ::System::UriFormatException*))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_INTERNALRESOLVE_OFFSET))(this, a1, a2, a3);
		}

		::System::String* InternalGetComponents(::System::Uri* a1, ::System::UriComponents a2, ::System::UriFormat a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::Uri*, ::System::UriComponents, ::System::UriFormat))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_INTERNALGETCOMPONENTS_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean InternalIsWellFormedOriginalString(::System::Uri* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_INTERNALISWELLFORMEDORIGINALSTRING_OFFSET))(this, a1);
		}

	};
}
