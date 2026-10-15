#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/System/Object.h"
class LFCKLPMBGGI;
class PADDMLCPFPI;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HPPGIADOJBF_ADIAODPBFHB_OFFSET UNITYSDK_OFFSET(0x1C45CBB0)
#define HPPGIADOJBF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C404BE0)
#define HPPGIADOJBF_FIPDBFMPEKH_1_OFFSET UNITYSDK_OFFSET(0x1C45CCE0)
#define HPPGIADOJBF_FIPDBFMPEKH_OFFSET UNITYSDK_OFFSET(0x1C45CC30)
#define HPPGIADOJBF_GETCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x1C45CF90)
#define HPPGIADOJBF_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x1C45CE90)
#define HPPGIADOJBF_GETFILESIZE_OFFSET UNITYSDK_OFFSET(0x1C45CF50)
#define HPPGIADOJBF_GETLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x1C45CE10)
#define HPPGIADOJBF_GET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x1C45CB40)
#define HPPGIADOJBF_ISNEEDWRITECONTENTHASHFILE_OFFSET UNITYSDK_OFFSET(0x1C45D0D0)
#define HPPGIADOJBF_ISPATCH_OFFSET UNITYSDK_OFFSET(0x1C45D090)
#define HPPGIADOJBF_ISTMPFILENAMEADDFILEHASH_OFFSET UNITYSDK_OFFSET(0x1C45D050)
#define HPPGIADOJBF_KAAJLOFCMDE_OFFSET UNITYSDK_OFFSET(0x1C45CFF0)
#define HPPGIADOJBF_MBKGDDJMHHD_OFFSET UNITYSDK_OFFSET(0x1C45CB60)
#define HPPGIADOJBF_SET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x1C45CB50)
#define HPPGIADOJBF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C45D110)

inline static constexpr unsigned int HPPGIADOJBF_TypeDefinitionIndex = 41530;

	class HPPGIADOJBF : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::LFCKLPMBGGI*>* OJNILOIOECI; // 0x10
		::System::Int32 _SubPackId_k__BackingField; // 0x18
		::RPG::Client::ByteHash16 HHPFNGFAJIA; // 0x1C
		::System::Byte _padding0[0x4];
		::System::Int64 EEBBDOKAKOM; // 0x30
		// static const ::System::String* OIIIIKJMGOA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPGIADOJBF_CTOR_OFFSET))(this);
		}

		::System::Int32 get_SubPackId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPGIADOJBF_GET_SUBPACKID_OFFSET))(this);
		}

		::System::Void set_SubPackId(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HPPGIADOJBF_SET_SUBPACKID_OFFSET))(this, a1);
		}

		::System::Int32 MBKGDDJMHHD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPGIADOJBF_MBKGDDJMHHD_OFFSET))(this);
		}

		::PADDMLCPFPI* ADIAODPBFHB(::System::Int32 a1)
		{
			return ((::PADDMLCPFPI*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HPPGIADOJBF_ADIAODPBFHB_OFFSET))(this, a1);
		}

		::System::Void FIPDBFMPEKH(::PADDMLCPFPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PADDMLCPFPI*))((::PBYTE)hIl2Cpp + HPPGIADOJBF_FIPDBFMPEKH_OFFSET))(this, a1);
		}

		::System::Void FIPDBFMPEKH_1(::LFCKLPMBGGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFCKLPMBGGI*))((::PBYTE)hIl2Cpp + HPPGIADOJBF_FIPDBFMPEKH_1_OFFSET))(this, a1);
		}

		::System::String* GetLoadRelativeBundleLoadPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPGIADOJBF_GETLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
		}

		::System::String* GetDownloadRelativeBundleLoadPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPGIADOJBF_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
		}

		::System::Int64 GetFileSize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPGIADOJBF_GETFILESIZE_OFFSET))(this);
		}

		::RPG::Client::ByteHash16 GetContentHash()
		{
			return ((::RPG::Client::ByteHash16(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPGIADOJBF_GETCONTENTHASH_OFFSET))(this);
		}

		::System::Void KAAJLOFCMDE(::RPG::Client::ByteHash16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ByteHash16))((::PBYTE)hIl2Cpp + HPPGIADOJBF_KAAJLOFCMDE_OFFSET))(this, a1);
		}

		::System::Boolean IsTmpFileNameAddFileHash()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPGIADOJBF_ISTMPFILENAMEADDFILEHASH_OFFSET))(this);
		}

		::System::Boolean IsPatch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPGIADOJBF_ISPATCH_OFFSET))(this);
		}

		::System::Boolean IsNeedWriteContentHashFile()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPGIADOJBF_ISNEEDWRITECONTENTHASHFILE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPGIADOJBF_TOSTRING_OFFSET))(this);
		}

	};
