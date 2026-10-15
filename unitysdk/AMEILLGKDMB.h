#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define AMEILLGKDMB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C405460)
#define AMEILLGKDMB_GETCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x1C404E70)
#define AMEILLGKDMB_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x1C405040)
#define AMEILLGKDMB_GETFILESIZE_OFFSET UNITYSDK_OFFSET(0x1C405080)
#define AMEILLGKDMB_GETLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x1C405200)
#define AMEILLGKDMB_GET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x1C404E60)
#define AMEILLGKDMB_ISNEEDWRITECONTENTHASHFILE_OFFSET UNITYSDK_OFFSET(0x1C4052E0)
#define AMEILLGKDMB_ISPATCH_OFFSET UNITYSDK_OFFSET(0x1C405320)
#define AMEILLGKDMB_ISTMPFILENAMEADDFILEHASH_OFFSET UNITYSDK_OFFSET(0x1C405360)
#define AMEILLGKDMB_NAHKFBMPGJH_OFFSET UNITYSDK_OFFSET(0x1C4052A0)
#define AMEILLGKDMB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C4053A0)

inline static constexpr unsigned int AMEILLGKDMB_TypeDefinitionIndex = 41522;

	class AMEILLGKDMB : public ::System::Object
	{
	public:
		::System::String* IPKCFNKIDMB; // 0x10
		::RPG::Client::ByteHash16 HHPFNGFAJIA; // 0x18
		::System::Int64 EEBBDOKAKOM; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEILLGKDMB_CTOR_OFFSET))(this);
		}

		::System::Int32 get_SubPackId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEILLGKDMB_GET_SUBPACKID_OFFSET))(this);
		}

		::RPG::Client::ByteHash16 GetContentHash()
		{
			return ((::RPG::Client::ByteHash16(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEILLGKDMB_GETCONTENTHASH_OFFSET))(this);
		}

		::System::String* GetDownloadRelativeBundleLoadPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEILLGKDMB_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
		}

		::System::Int64 GetFileSize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEILLGKDMB_GETFILESIZE_OFFSET))(this);
		}

		::System::String* GetLoadRelativeBundleLoadPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEILLGKDMB_GETLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
		}

		::System::Boolean NAHKFBMPGJH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEILLGKDMB_NAHKFBMPGJH_OFFSET))(this);
		}

		::System::Boolean IsNeedWriteContentHashFile()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEILLGKDMB_ISNEEDWRITECONTENTHASHFILE_OFFSET))(this);
		}

		::System::Boolean IsPatch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEILLGKDMB_ISPATCH_OFFSET))(this);
		}

		::System::Boolean IsTmpFileNameAddFileHash()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEILLGKDMB_ISTMPFILENAMEADDFILEHASH_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEILLGKDMB_TOSTRING_OFFSET))(this);
		}

	};
