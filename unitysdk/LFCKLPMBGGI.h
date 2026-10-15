#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AssetsStaticFlag.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define LFCKLPMBGGI_ADPMKBPLBHK_OFFSET UNITYSDK_OFFSET(0x1C47EF90)
#define LFCKLPMBGGI_CGEKIAIDBGI_OFFSET UNITYSDK_OFFSET(0x1C47F060)
#define LFCKLPMBGGI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C47F670)
#define LFCKLPMBGGI_EOJBCLHBEGA_OFFSET UNITYSDK_OFFSET(0x1C47F510)
#define LFCKLPMBGGI_GETCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x1C47F370)
#define LFCKLPMBGGI_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x1C47F2B0)
#define LFCKLPMBGGI_GETFILESIZE_OFFSET UNITYSDK_OFFSET(0x1C47F330)
#define LFCKLPMBGGI_GETLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x1C47F490)
#define LFCKLPMBGGI_GET_ASSETFLAGS_OFFSET UNITYSDK_OFFSET(0x1C47F180)
#define LFCKLPMBGGI_GET_BLOCKCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x1C47F1F0)
#define LFCKLPMBGGI_GET_BLOCKINDEX_OFFSET UNITYSDK_OFFSET(0x1C47EE80)
#define LFCKLPMBGGI_GET_BUNDLESHORTNAME_OFFSET UNITYSDK_OFFSET(0x1C47F1A0)
#define LFCKLPMBGGI_GET_FILESIZE_OFFSET UNITYSDK_OFFSET(0x1C47F170)
#define LFCKLPMBGGI_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1C47F190)
#define LFCKLPMBGGI_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1C47EEA0)
#define LFCKLPMBGGI_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x1C47F560)
#define LFCKLPMBGGI_GET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x1C47F150)
#define LFCKLPMBGGI_HKKPLBCNHOD_OFFSET UNITYSDK_OFFSET(0x1C47EEC0)
#define LFCKLPMBGGI_ISNEEDWRITECONTENTHASHFILE_OFFSET UNITYSDK_OFFSET(0x1C47F450)
#define LFCKLPMBGGI_ISPATCH_OFFSET UNITYSDK_OFFSET(0x1C47F410)
#define LFCKLPMBGGI_ISTMPFILENAMEADDFILEHASH_OFFSET UNITYSDK_OFFSET(0x1C47F3D0)
#define LFCKLPMBGGI_SET_BLOCKCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x1C47F240)
#define LFCKLPMBGGI_SET_BLOCKINDEX_OFFSET UNITYSDK_OFFSET(0x1C47EE90)
#define LFCKLPMBGGI_SET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1C47EEB0)
#define LFCKLPMBGGI_SET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x1C47F570)
#define LFCKLPMBGGI_SET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x1C47F160)
#define LFCKLPMBGGI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C47F580)

inline static constexpr unsigned int LFCKLPMBGGI_TypeDefinitionIndex = 41529;

	class LFCKLPMBGGI : public ::System::Object
	{
	public:
		::System::String* KLOHFPMFIKN; // 0x10
		::System::String* _RelativePath_k__BackingField; // 0x18
		::System::String* DDMAONMPHBN; // 0x20
		::System::String* BJGGJIAADCE; // 0x28
		::RPG::Client::ByteHash16 JLEDBOLHKLO; // 0x30
		::RPG::Client::ByteHash16 FJINDHNCEPE; // 0x40
		::System::UInt32 BAAKKMLFJEJ; // 0x50
		::System::UInt32 _BlockIndex_k__BackingField; // 0x54
		::System::UInt32 OECFKIEODGK; // 0x58
		::RPG::Client::ByteHash16 AAOBNOGCEJN; // 0x5C
		::RPG::Client::ByteHash16 LCDHMANJOFH; // 0x6C
		::System::Int32 _SubPackId_k__BackingField; // 0x7C
		::System::UInt32 _Offset_k__BackingField; // 0x80
		// static const ::System::String* OIIIIKJMGOA; // 0x0
		// static const ::System::String* NENEMAFDELD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFCKLPMBGGI_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_BlockIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFCKLPMBGGI_GET_BLOCKINDEX_OFFSET))(this);
		}

		::System::Void set_BlockIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LFCKLPMBGGI_SET_BLOCKINDEX_OFFSET))(this, a1);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFCKLPMBGGI_GET_OFFSET_OFFSET))(this);
		}

		::System::Void set_Offset(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LFCKLPMBGGI_SET_OFFSET_OFFSET))(this, a1);
		}

		::System::String* HKKPLBCNHOD()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFCKLPMBGGI_HKKPLBCNHOD_OFFSET))(this);
		}

		::System::String* ADPMKBPLBHK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFCKLPMBGGI_ADPMKBPLBHK_OFFSET))(this);
		}

		::System::String* CGEKIAIDBGI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFCKLPMBGGI_CGEKIAIDBGI_OFFSET))(this);
		}

		::System::Int32 get_SubPackId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFCKLPMBGGI_GET_SUBPACKID_OFFSET))(this);
		}

		::System::Void set_SubPackId(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LFCKLPMBGGI_SET_SUBPACKID_OFFSET))(this, a1);
		}

		::System::Int64 get_FileSize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + LFCKLPMBGGI_GET_FILESIZE_OFFSET))(this);
		}

		::RPG::Client::AssetsStaticFlag get_AssetFlags()
		{
			return ((::RPG::Client::AssetsStaticFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + LFCKLPMBGGI_GET_ASSETFLAGS_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LFCKLPMBGGI_GET_ISVALID_OFFSET))(this);
		}

		::System::String* get_BundleShortName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFCKLPMBGGI_GET_BUNDLESHORTNAME_OFFSET))(this);
		}

		::System::String* get_BlockContentHash()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFCKLPMBGGI_GET_BLOCKCONTENTHASH_OFFSET))(this);
		}

		::System::Void set_BlockContentHash(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LFCKLPMBGGI_SET_BLOCKCONTENTHASH_OFFSET))(this, a1);
		}

		::System::String* GetDownloadRelativeBundleLoadPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFCKLPMBGGI_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
		}

		::System::Int64 GetFileSize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + LFCKLPMBGGI_GETFILESIZE_OFFSET))(this);
		}

		::RPG::Client::ByteHash16 GetContentHash()
		{
			return ((::RPG::Client::ByteHash16(*)(::PVOID))((::PBYTE)hIl2Cpp + LFCKLPMBGGI_GETCONTENTHASH_OFFSET))(this);
		}

		::System::Boolean IsTmpFileNameAddFileHash()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LFCKLPMBGGI_ISTMPFILENAMEADDFILEHASH_OFFSET))(this);
		}

		::System::Boolean IsPatch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LFCKLPMBGGI_ISPATCH_OFFSET))(this);
		}

		::System::Boolean IsNeedWriteContentHashFile()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LFCKLPMBGGI_ISNEEDWRITECONTENTHASHFILE_OFFSET))(this);
		}

		::System::String* GetLoadRelativeBundleLoadPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFCKLPMBGGI_GETLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
		}

		::System::String* EOJBCLHBEGA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFCKLPMBGGI_EOJBCLHBEGA_OFFSET))(this);
		}

		::System::String* get_RelativePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFCKLPMBGGI_GET_RELATIVEPATH_OFFSET))(this);
		}

		::System::Void set_RelativePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LFCKLPMBGGI_SET_RELATIVEPATH_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFCKLPMBGGI_TOSTRING_OFFSET))(this);
		}

	};
