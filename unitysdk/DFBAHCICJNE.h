#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/RPG/Client/DesignDataShortNameHash.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define DFBAHCICJNE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C45A420)
#define DFBAHCICJNE_FIOHPNNGKAM_OFFSET UNITYSDK_OFFSET(0x1C45A480)
#define DFBAHCICJNE_GETCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x1C45A7F0)
#define DFBAHCICJNE_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x1C45A6B0)
#define DFBAHCICJNE_GETFILESIZE_OFFSET UNITYSDK_OFFSET(0x1C45A7B0)
#define DFBAHCICJNE_GETLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x1C45A4D0)
#define DFBAHCICJNE_GET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x1C45A9F0)
#define DFBAHCICJNE_ISNEEDWRITECONTENTHASHFILE_OFFSET UNITYSDK_OFFSET(0x1C45A9B0)
#define DFBAHCICJNE_ISPATCH_OFFSET UNITYSDK_OFFSET(0x1C45A970)
#define DFBAHCICJNE_ISTMPFILENAMEADDFILEHASH_OFFSET UNITYSDK_OFFSET(0x1C45A930)
#define DFBAHCICJNE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C45A850)

	class DFBAHCICJNE : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::DesignDataShortNameHash>* AFGPCICJOFN; // 0x10
		::System::String* BJGGJIAADCE; // 0x18
		::RPG::Client::DesignDataShortNameHash HOGGCCKFBEK; // 0x20
		::System::Byte FEMFCJCKOKC; // 0x28
		::System::Byte _padding0[0x3];
		::RPG::Client::ByteHash16 HHPFNGFAJIA; // 0x2C
		::System::Byte _padding1[0x4];
		::System::Int64 OGPDIJFMIHM; // 0x40
		// static const ::System::Object HJPCFHNAIOA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBAHCICJNE_CTOR_OFFSET))(this);
		}

		::System::String* FIOHPNNGKAM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBAHCICJNE_FIOHPNNGKAM_OFFSET))(this);
		}

		::System::String* GetLoadRelativeBundleLoadPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBAHCICJNE_GETLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
		}

		::System::String* GetDownloadRelativeBundleLoadPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBAHCICJNE_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
		}

		::System::Int64 GetFileSize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBAHCICJNE_GETFILESIZE_OFFSET))(this);
		}

		::RPG::Client::ByteHash16 GetContentHash()
		{
			return ((::RPG::Client::ByteHash16(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBAHCICJNE_GETCONTENTHASH_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBAHCICJNE_TOSTRING_OFFSET))(this);
		}

		::System::Boolean IsTmpFileNameAddFileHash()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBAHCICJNE_ISTMPFILENAMEADDFILEHASH_OFFSET))(this);
		}

		::System::Boolean IsPatch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBAHCICJNE_ISPATCH_OFFSET))(this);
		}

		::System::Boolean IsNeedWriteContentHashFile()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBAHCICJNE_ISNEEDWRITECONTENTHASHFILE_OFFSET))(this);
		}

		::System::Int32 get_SubPackId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBAHCICJNE_GET_SUBPACKID_OFFSET))(this);
		}

	};
