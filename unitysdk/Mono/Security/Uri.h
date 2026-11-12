#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/UriPartial.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }

#define MONO_SECURITY_URI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D20C380)
#define MONO_SECURITY_URI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D207C40)
#define MONO_SECURITY_URI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D207BE0)
#define MONO_SECURITY_URI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D2080B0)
#define MONO_SECURITY_URI_ESCAPESTRING_1_OFFSET UNITYSDK_OFFSET(0x1D209FF0)
#define MONO_SECURITY_URI_ESCAPESTRING_OFFSET UNITYSDK_OFFSET(0x1D209F90)
#define MONO_SECURITY_URI_FROMHEX_OFFSET UNITYSDK_OFFSET(0x1D209050)
#define MONO_SECURITY_URI_GETDEFAULTPORT_OFFSET UNITYSDK_OFFSET(0x1D208E00)
#define MONO_SECURITY_URI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D208370)
#define MONO_SECURITY_URI_GETLEFTPART_OFFSET UNITYSDK_OFFSET(0x1D208650)
#define MONO_SECURITY_URI_GETOPAQUEWISESCHEMEDELIMITER_OFFSET UNITYSDK_OFFSET(0x1D208D90)
#define MONO_SECURITY_URI_GETSCHEMEDELIMITER_OFFSET UNITYSDK_OFFSET(0x1D20C110)
#define MONO_SECURITY_URI_GET_ABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x1D207D80)
#define MONO_SECURITY_URI_GET_ISFILE_OFFSET UNITYSDK_OFFSET(0x1D207D90)
#define MONO_SECURITY_URI_GET_ISUNC_OFFSET UNITYSDK_OFFSET(0x1D207E40)
#define MONO_SECURITY_URI_GET_LOCALPATH_OFFSET UNITYSDK_OFFSET(0x1D207E50)
#define MONO_SECURITY_URI_HEXESCAPE_OFFSET UNITYSDK_OFFSET(0x1D2090F0)
#define MONO_SECURITY_URI_HEXUNESCAPE_OFFSET UNITYSDK_OFFSET(0x1D209300)
#define MONO_SECURITY_URI_ISHEXDIGIT_OFFSET UNITYSDK_OFFSET(0x1D209830)
#define MONO_SECURITY_URI_ISHEXENCODING_OFFSET UNITYSDK_OFFSET(0x1D209850)
#define MONO_SECURITY_URI_ISPREDEFINEDSCHEME_OFFSET UNITYSDK_OFFSET(0x1D20B930)
#define MONO_SECURITY_URI_PARSEASUNIXABSOLUTEFILEPATH_OFFSET UNITYSDK_OFFSET(0x1D20B7C0)
#define MONO_SECURITY_URI_PARSEASWINDOWSABSOLUTEFILEPATH_OFFSET UNITYSDK_OFFSET(0x1D20B6B0)
#define MONO_SECURITY_URI_PARSEASWINDOWSUNC_OFFSET UNITYSDK_OFFSET(0x1D20B530)
#define MONO_SECURITY_URI_PARSE_1_OFFSET UNITYSDK_OFFSET(0x1D20A6C0)
#define MONO_SECURITY_URI_PARSE_OFFSET UNITYSDK_OFFSET(0x1D207CB0)
#define MONO_SECURITY_URI_REDUCE_OFFSET UNITYSDK_OFFSET(0x1D20BAB0)
#define MONO_SECURITY_URI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D2099F0)
#define MONO_SECURITY_URI_UNESCAPE_1_OFFSET UNITYSDK_OFFSET(0x1D209AE0)
#define MONO_SECURITY_URI_UNESCAPE_OFFSET UNITYSDK_OFFSET(0x1D2080A0)

namespace Mono::Security
{
	inline static constexpr unsigned int Uri_TypeDefinitionIndex = 52;

	class Uri : public ::System::Object
	{
	public:
		::System::String* query; // 0x10
		::System::String* userinfo; // 0x18
		::System::String* cachedToString; // 0x20
		::System::String* fragment; // 0x28
		::System::String* scheme; // 0x30
		::System::String* source; // 0x38
		::System::String* path; // 0x40
		::System::String* cachedLocalPath; // 0x48
		::System::String* host; // 0x50
		::System::Boolean isUnc; // 0x58
		::System::Boolean isOpaquePart; // 0x59
		::System::Byte _padding0[0x2];
		::System::Int32 port; // 0x5C
		::System::Int32 cachedHashCode; // 0x60
		::System::Boolean isUnixFilePath; // 0x64
		::System::Boolean userEscaped; // 0x65
		::System::Boolean reduce; // 0x66
		static ::System::String** StaticGet_UriSchemeFile()
		{
			return (::System::String**)UnitySDK::FromName("Mono.Security", "Uri")->GetStaticField(0xC040);
		}

		static ::System::String** StaticGet_hexUpperChars()
		{
			return (::System::String**)UnitySDK::FromName("Mono.Security", "Uri")->GetStaticField(0xC048);
		}

		static ::System::String** StaticGet_SchemeDelimiter()
		{
			return (::System::String**)UnitySDK::FromName("Mono.Security", "Uri")->GetStaticField(0xC050);
		}

		static ::System::String** StaticGet_UriSchemeMailto()
		{
			return (::System::String**)UnitySDK::FromName("Mono.Security", "Uri")->GetStaticField(0xC058);
		}

		static ::Il2CppArray<::System::Object*>** StaticGet_schemes()
		{
			return (::Il2CppArray<::System::Object*>**)UnitySDK::FromName("Mono.Security", "Uri")->GetStaticField(0xC060);
		}

		static ::System::String** StaticGet_UriSchemeNews()
		{
			return (::System::String**)UnitySDK::FromName("Mono.Security", "Uri")->GetStaticField(0xC068);
		}

		static ::System::String** StaticGet_UriSchemeGopher()
		{
			return (::System::String**)UnitySDK::FromName("Mono.Security", "Uri")->GetStaticField(0xC070);
		}

		static ::System::String** StaticGet_UriSchemeFtp()
		{
			return (::System::String**)UnitySDK::FromName("Mono.Security", "Uri")->GetStaticField(0xC078);
		}

		static ::System::String** StaticGet_UriSchemeNntp()
		{
			return (::System::String**)UnitySDK::FromName("Mono.Security", "Uri")->GetStaticField(0xC080);
		}

		static ::System::String** StaticGet_UriSchemeHttps()
		{
			return (::System::String**)UnitySDK::FromName("Mono.Security", "Uri")->GetStaticField(0xC088);
		}

		static ::System::String** StaticGet_UriSchemeHttp()
		{
			return (::System::String**)UnitySDK::FromName("Mono.Security", "Uri")->GetStaticField(0xC090);
		}

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_CTOR_1_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_CCTOR_OFFSET))();
		}

		::System::String* get_AbsolutePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_GET_ABSOLUTEPATH_OFFSET))(this);
		}

		::System::Boolean get_IsFile()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_GET_ISFILE_OFFSET))(this);
		}

		::System::Boolean get_IsUnc()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_GET_ISUNC_OFFSET))(this);
		}

		::System::String* get_LocalPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_GET_LOCALPATH_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* GetLeftPart(::Mono::Security::UriPartial a1)
		{
			return ((::System::String*(*)(::PVOID, ::Mono::Security::UriPartial))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_GETLEFTPART_OFFSET))(this, a1);
		}

		static ::System::Int32 FromHex(::System::Char a1)
		{
			return ((::System::Int32(*)(::System::Char))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_FROMHEX_OFFSET))(a1);
		}

		static ::System::String* HexEscape(::System::Char a1)
		{
			return ((::System::String*(*)(::System::Char))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_HEXESCAPE_OFFSET))(a1);
		}

		static ::System::Char HexUnescape(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Char(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_HEXUNESCAPE_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsHexDigit(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_ISHEXDIGIT_OFFSET))(a1);
		}

		static ::System::Boolean IsHexEncoding(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_ISHEXENCODING_OFFSET))(a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_TOSTRING_OFFSET))(this);
		}

		static ::System::String* EscapeString(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_ESCAPESTRING_OFFSET))(a1);
		}

		static ::System::String* EscapeString_1(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_ESCAPESTRING_1_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void Parse()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_PARSE_OFFSET))(this);
		}

		::System::String* Unescape(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_UNESCAPE_OFFSET))(this, a1);
		}

		::System::String* Unescape_1(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_UNESCAPE_1_OFFSET))(this, a1, a2);
		}

		::System::Void ParseAsWindowsUNC(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_PARSEASWINDOWSUNC_OFFSET))(this, a1);
		}

		::System::Void ParseAsWindowsAbsoluteFilePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_PARSEASWINDOWSABSOLUTEFILEPATH_OFFSET))(this, a1);
		}

		::System::Void ParseAsUnixAbsoluteFilePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_PARSEASUNIXABSOLUTEFILEPATH_OFFSET))(this, a1);
		}

		::System::Void Parse_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_PARSE_1_OFFSET))(this, a1);
		}

		static ::System::String* Reduce(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_REDUCE_OFFSET))(a1);
		}

		static ::System::String* GetSchemeDelimiter(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_GETSCHEMEDELIMITER_OFFSET))(a1);
		}

		static ::System::Int32 GetDefaultPort(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_GETDEFAULTPORT_OFFSET))(a1);
		}

		::System::String* GetOpaqueWiseSchemeDelimiter()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_GETOPAQUEWISESCHEMEDELIMITER_OFFSET))(this);
		}

		static ::System::Boolean IsPredefinedScheme(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_ISPREDEFINEDSCHEME_OFFSET))(a1);
		}

	};
}
