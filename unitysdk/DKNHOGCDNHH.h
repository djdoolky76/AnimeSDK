#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AssetsStaticFlag.h"
#include "unitysdk/System/Object.h"
class DAPOMNBNKGC;
class DKNHOGCDNHH;
namespace SimpleJSON { class JSONClass; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class StreamWriter; }

#define DKNHOGCDNHH_CTOR_OFFSET UNITYSDK_OFFSET(0x15AEE5F0)
#define DKNHOGCDNHH_EOJBCLHBEGA_OFFSET UNITYSDK_OFFSET(0x15AECAD0)
#define DKNHOGCDNHH_GET_ASSETFLAGS_OFFSET UNITYSDK_OFFSET(0x15AEC950)
#define DKNHOGCDNHH_GET_BLOCKCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x15AEC9D0)
#define DKNHOGCDNHH_GET_BUNDLESHORTNAMEHASH_OFFSET UNITYSDK_OFFSET(0x15AEC9B0)
#define DKNHOGCDNHH_GET_BUNDLESHORTNAME_OFFSET UNITYSDK_OFFSET(0x15AEC990)
#define DKNHOGCDNHH_GET_FILESIZE_OFFSET UNITYSDK_OFFSET(0x15AEC930)
#define DKNHOGCDNHH_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x15AEC970)
#define DKNHOGCDNHH_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x15AEC910)
#define DKNHOGCDNHH_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x15AECB10)
#define DKNHOGCDNHH_GET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x15AEC8F0)
#define DKNHOGCDNHH_IFPDJCIDGKK_OFFSET UNITYSDK_OFFSET(0x15AEF090)
#define DKNHOGCDNHH_IICAABCDHPM_OFFSET UNITYSDK_OFFSET(0x15AEC9F0)
#define DKNHOGCDNHH_JDHOCOKMBLP_OFFSET UNITYSDK_OFFSET(0x15AF03B0)
#define DKNHOGCDNHH_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x15AECCA0)
#define DKNHOGCDNHH_OPLEPLHGEGN_OFFSET UNITYSDK_OFFSET(0x15AECB30)
#define DKNHOGCDNHH_PKDKAMEKNIK_OFFSET UNITYSDK_OFFSET(0x15AEE680)
#define DKNHOGCDNHH_SET_ASSETFLAGS_OFFSET UNITYSDK_OFFSET(0x15AEC960)
#define DKNHOGCDNHH_SET_BLOCKCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x15AEC9E0)
#define DKNHOGCDNHH_SET_BUNDLESHORTNAMEHASH_OFFSET UNITYSDK_OFFSET(0x15AEC9C0)
#define DKNHOGCDNHH_SET_BUNDLESHORTNAME_OFFSET UNITYSDK_OFFSET(0x15AEC9A0)
#define DKNHOGCDNHH_SET_FILESIZE_OFFSET UNITYSDK_OFFSET(0x15AEC940)
#define DKNHOGCDNHH_SET_ISVALID_OFFSET UNITYSDK_OFFSET(0x15AEC980)
#define DKNHOGCDNHH_SET_OFFSET_OFFSET UNITYSDK_OFFSET(0x15AEC920)
#define DKNHOGCDNHH_SET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x15AECB20)
#define DKNHOGCDNHH_SET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x15AEC900)
#define DKNHOGCDNHH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15AF0530)

inline static constexpr unsigned int DKNHOGCDNHH_TypeDefinitionIndex = 42419;

	class DKNHOGCDNHH : public ::System::Object
	{
	public:
		::System::String* _RelativePath_k__BackingField; // 0x10
		::System::String* _BlockContentHash_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* BPJFBNFFPBK; // 0x20
		::System::Collections::Generic::List_1<::DAPOMNBNKGC*>* NPENGFBHFJN; // 0x28
		::System::String* EBFOHGMMHKL; // 0x30
		::System::String* DFHBOAJLBBG; // 0x38
		::System::String* _BundleShortName_k__BackingField; // 0x40
		::System::Int32 OKJOKFMDOHE; // 0x48
		::System::UInt32 _Offset_k__BackingField; // 0x4C
		::System::Int64 _FileSize_k__BackingField; // 0x50
		::System::UInt64 _BundleShortNameHash_k__BackingField; // 0x58
		::System::Boolean _IsValid_k__BackingField; // 0x60
		::System::Byte _padding0[0x1];
		::RPG::Client::AssetsStaticFlag _AssetFlags_k__BackingField; // 0x62
		::System::Int32 _SubPackId_k__BackingField; // 0x64
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNHOGCDNHH_CTOR_OFFSET))(this);
		}

		::System::Int32 get_SubPackId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNHOGCDNHH_GET_SUBPACKID_OFFSET))(this);
		}

		::System::Void set_SubPackId(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DKNHOGCDNHH_SET_SUBPACKID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNHOGCDNHH_GET_OFFSET_OFFSET))(this);
		}

		::System::Void set_Offset(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DKNHOGCDNHH_SET_OFFSET_OFFSET))(this, a1);
		}

		::System::Int64 get_FileSize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNHOGCDNHH_GET_FILESIZE_OFFSET))(this);
		}

		::System::Void set_FileSize(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + DKNHOGCDNHH_SET_FILESIZE_OFFSET))(this, a1);
		}

		::RPG::Client::AssetsStaticFlag get_AssetFlags()
		{
			return ((::RPG::Client::AssetsStaticFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNHOGCDNHH_GET_ASSETFLAGS_OFFSET))(this);
		}

		::System::Void set_AssetFlags(::RPG::Client::AssetsStaticFlag a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AssetsStaticFlag))((::PBYTE)hIl2Cpp + DKNHOGCDNHH_SET_ASSETFLAGS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNHOGCDNHH_GET_ISVALID_OFFSET))(this);
		}

		::System::Void set_IsValid(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DKNHOGCDNHH_SET_ISVALID_OFFSET))(this, a1);
		}

		::System::String* get_BundleShortName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNHOGCDNHH_GET_BUNDLESHORTNAME_OFFSET))(this);
		}

		::System::Void set_BundleShortName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DKNHOGCDNHH_SET_BUNDLESHORTNAME_OFFSET))(this, a1);
		}

		::System::UInt64 get_BundleShortNameHash()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNHOGCDNHH_GET_BUNDLESHORTNAMEHASH_OFFSET))(this);
		}

		::System::Void set_BundleShortNameHash(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + DKNHOGCDNHH_SET_BUNDLESHORTNAMEHASH_OFFSET))(this, a1);
		}

		::System::String* get_BlockContentHash()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNHOGCDNHH_GET_BLOCKCONTENTHASH_OFFSET))(this);
		}

		::System::Void set_BlockContentHash(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DKNHOGCDNHH_SET_BLOCKCONTENTHASH_OFFSET))(this, a1);
		}

		::System::Boolean IICAABCDHPM(::DKNHOGCDNHH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DKNHOGCDNHH*))((::PBYTE)hIl2Cpp + DKNHOGCDNHH_IICAABCDHPM_OFFSET))(this, a1);
		}

		::System::String* EOJBCLHBEGA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNHOGCDNHH_EOJBCLHBEGA_OFFSET))(this);
		}

		::System::String* get_RelativePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNHOGCDNHH_GET_RELATIVEPATH_OFFSET))(this);
		}

		::System::Void set_RelativePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DKNHOGCDNHH_SET_RELATIVEPATH_OFFSET))(this, a1);
		}

		::System::Void OPLEPLHGEGN(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DKNHOGCDNHH_OPLEPLHGEGN_OFFSET))(this, a1);
		}

		static ::DKNHOGCDNHH* LJACLBNEEEB(::System::String* a1)
		{
			return ((::DKNHOGCDNHH*(*)(::System::String*))((::PBYTE)hIl2Cpp + DKNHOGCDNHH_LJACLBNEEEB_OFFSET))(a1);
		}

		::SimpleJSON::JSONClass* PKDKAMEKNIK()
		{
			return ((::SimpleJSON::JSONClass*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNHOGCDNHH_PKDKAMEKNIK_OFFSET))(this);
		}

		::System::Void IFPDJCIDGKK(::System::IO::StreamWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::StreamWriter*))((::PBYTE)hIl2Cpp + DKNHOGCDNHH_IFPDJCIDGKK_OFFSET))(this, a1);
		}

		::System::Void JDHOCOKMBLP(::System::IO::StreamWriter* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::StreamWriter*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + DKNHOGCDNHH_JDHOCOKMBLP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNHOGCDNHH_TOSTRING_OFFSET))(this);
		}

	};
