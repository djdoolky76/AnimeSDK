#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BlockFlag.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
namespace System { class String; }

#define CCKNOHGIONG_EOJBCLHBEGA_OFFSET UNITYSDK_OFFSET(0x3C27BC0)
#define CCKNOHGIONG_GETCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x3C27B60)
#define CCKNOHGIONG_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x3C27C10)
#define CCKNOHGIONG_GETFILESIZE_OFFSET UNITYSDK_OFFSET(0x3C27B10)
#define CCKNOHGIONG_GETLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x3C27CA0)
#define CCKNOHGIONG_GET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x3260)
#define CCKNOHGIONG_ISNEEDWRITECONTENTHASHFILE_OFFSET UNITYSDK_OFFSET(0x3C27CB0)
#define CCKNOHGIONG_ISPATCH_OFFSET UNITYSDK_OFFSET(0x3C27A40)
#define CCKNOHGIONG_ISTMPFILENAMEADDFILEHASH_OFFSET UNITYSDK_OFFSET(0x3C27AC0)
#define CCKNOHGIONG_SET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0xDD9C0)
#define CCKNOHGIONG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C27D00)

inline static constexpr unsigned int CCKNOHGIONG_TypeDefinitionIndex = 41497;

	struct alignas(4) CCKNOHGIONG
	{
		::RPG::Client::ByteHash16 HHPFNGFAJIA; // 0x10
		::System::Int32 _SubPackId_k__BackingField; // 0x20
		::RPG::Client::BlockFlag FEMFCJCKOKC; // 0x24
		::System::UInt32 OGPDIJFMIHM; // 0x28
		::System::Int32 get_SubPackId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKNOHGIONG_GET_SUBPACKID_OFFSET))(this);
		}

		::System::Void set_SubPackId(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CCKNOHGIONG_SET_SUBPACKID_OFFSET))(this, a1);
		}

		::System::Boolean IsPatch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKNOHGIONG_ISPATCH_OFFSET))(this);
		}

		::System::Boolean IsTmpFileNameAddFileHash()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKNOHGIONG_ISTMPFILENAMEADDFILEHASH_OFFSET))(this);
		}

		::System::Int64 GetFileSize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKNOHGIONG_GETFILESIZE_OFFSET))(this);
		}

		::RPG::Client::ByteHash16 GetContentHash()
		{
			return ((::RPG::Client::ByteHash16(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKNOHGIONG_GETCONTENTHASH_OFFSET))(this);
		}

		::System::String* EOJBCLHBEGA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKNOHGIONG_EOJBCLHBEGA_OFFSET))(this);
		}

		::System::String* GetDownloadRelativeBundleLoadPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKNOHGIONG_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
		}

		::System::String* GetLoadRelativeBundleLoadPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKNOHGIONG_GETLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
		}

		::System::Boolean IsNeedWriteContentHashFile()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKNOHGIONG_ISNEEDWRITECONTENTHASHFILE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKNOHGIONG_TOSTRING_OFFSET))(this);
		}

	};
