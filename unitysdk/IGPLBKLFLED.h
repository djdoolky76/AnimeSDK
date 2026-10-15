#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define IGPLBKLFLED_CTOR_OFFSET UNITYSDK_OFFSET(0x1C49F9F0)
#define IGPLBKLFLED_GETCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x1C49F690)
#define IGPLBKLFLED_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x1C49F6F0)
#define IGPLBKLFLED_GETFILESIZE_OFFSET UNITYSDK_OFFSET(0x1C49F730)
#define IGPLBKLFLED_GETLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x1C49F770)
#define IGPLBKLFLED_GET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x1C49F680)
#define IGPLBKLFLED_ISNEEDWRITECONTENTHASHFILE_OFFSET UNITYSDK_OFFSET(0x1C49F7D0)
#define IGPLBKLFLED_ISPATCH_OFFSET UNITYSDK_OFFSET(0x1C49F810)
#define IGPLBKLFLED_ISTMPFILENAMEADDFILEHASH_OFFSET UNITYSDK_OFFSET(0x1C49F940)
#define IGPLBKLFLED_JNJGCMAIMMN_OFFSET UNITYSDK_OFFSET(0x1C49F850)
#define IGPLBKLFLED_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C49F980)

inline static constexpr unsigned int IGPLBKLFLED_TypeDefinitionIndex = 41501;

	class IGPLBKLFLED : public ::System::Object
	{
	public:
		::System::String* BCJAPFOGMAI; // 0x10
		::RPG::Client::ByteHash16 HHPFNGFAJIA; // 0x18
		::System::Int64 HFIMKFMLOBG; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGPLBKLFLED_CTOR_OFFSET))(this);
		}

		::System::Int32 get_SubPackId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGPLBKLFLED_GET_SUBPACKID_OFFSET))(this);
		}

		::RPG::Client::ByteHash16 GetContentHash()
		{
			return ((::RPG::Client::ByteHash16(*)(::PVOID))((::PBYTE)hIl2Cpp + IGPLBKLFLED_GETCONTENTHASH_OFFSET))(this);
		}

		::System::String* GetDownloadRelativeBundleLoadPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGPLBKLFLED_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
		}

		::System::Int64 GetFileSize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + IGPLBKLFLED_GETFILESIZE_OFFSET))(this);
		}

		::System::String* GetLoadRelativeBundleLoadPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGPLBKLFLED_GETLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
		}

		::System::Boolean IsNeedWriteContentHashFile()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IGPLBKLFLED_ISNEEDWRITECONTENTHASHFILE_OFFSET))(this);
		}

		::System::Boolean IsPatch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IGPLBKLFLED_ISPATCH_OFFSET))(this);
		}

		::System::Boolean JNJGCMAIMMN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IGPLBKLFLED_JNJGCMAIMMN_OFFSET))(this);
		}

		::System::Boolean IsTmpFileNameAddFileHash()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IGPLBKLFLED_ISTMPFILENAMEADDFILEHASH_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGPLBKLFLED_TOSTRING_OFFSET))(this);
		}

	};
