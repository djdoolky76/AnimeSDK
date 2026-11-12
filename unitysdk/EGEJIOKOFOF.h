#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/System/Object.h"
class CDKEBLNOEPH;
class HGDELEAHIJO;
class KGPCBBIOGLB;
class OAPFEGCKDNG;
namespace System { class String; }

#define EGEJIOKOFOF_CTOR_OFFSET UNITYSDK_OFFSET(0x152E11E0)
#define EGEJIOKOFOF_EKFOHPPIMMK_OFFSET UNITYSDK_OFFSET(0x152E0F40)
#define EGEJIOKOFOF_GETCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x152E0A70)
#define EGEJIOKOFOF_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x152E09F0)
#define EGEJIOKOFOF_GETFILESIZE_OFFSET UNITYSDK_OFFSET(0x152E0A30)
#define EGEJIOKOFOF_GJJGFCFLEEO_OFFSET UNITYSDK_OFFSET(0x152E0C50)
#define EGEJIOKOFOF_ISNEEDWRITECONTENTHASHFILE_OFFSET UNITYSDK_OFFSET(0x152E0B50)
#define EGEJIOKOFOF_ISPATCH_OFFSET UNITYSDK_OFFSET(0x152E0B10)
#define EGEJIOKOFOF_ISTMPFILENAMEADDFILEHASH_OFFSET UNITYSDK_OFFSET(0x152E0AD0)
#define EGEJIOKOFOF_KODJKMECEKA_OFFSET UNITYSDK_OFFSET(0x152E0D00)
#define EGEJIOKOFOF_LKBJEICPHKF_OFFSET UNITYSDK_OFFSET(0x152E1060)
#define EGEJIOKOFOF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x152E0B90)

inline static constexpr unsigned int EGEJIOKOFOF_TypeDefinitionIndex = 60856;

	class EGEJIOKOFOF : public ::System::Object
	{
	public:
		::OAPFEGCKDNG* IKJHOFOGAKA; // 0x10
		::System::String* CDMFNHJGGKF; // 0x18
		::KGPCBBIOGLB* FJCAKOIDONG; // 0x20
		::HGDELEAHIJO* EONAHKFAAJP; // 0x28
		::System::String* MKFEGIMACLO; // 0x30
		::CDKEBLNOEPH* PBKAHOBDHKC; // 0x38
		::RPG::Client::ExeCode MEPFOEEGBEA; // 0x40
		::RPG::Client::ByteHash16 HHPFNGFAJIA; // 0x44
		::System::Boolean CIGJFJLAPFJ; // 0x54
		::System::Boolean EFFAJLMJMDM; // 0x55
		::System::Boolean BCNKJMPIHFH; // 0x56
		::System::Boolean PJCKBIHHNCI; // 0x57
		::System::Int64 EEBBDOKAKOM; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGEJIOKOFOF_CTOR_OFFSET))(this);
		}

		::System::String* GetDownloadRelativeBundleLoadPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGEJIOKOFOF_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
		}

		::System::Int64 GetFileSize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EGEJIOKOFOF_GETFILESIZE_OFFSET))(this);
		}

		::RPG::Client::ByteHash16 GetContentHash()
		{
			return ((::RPG::Client::ByteHash16(*)(::PVOID))((::PBYTE)hIl2Cpp + EGEJIOKOFOF_GETCONTENTHASH_OFFSET))(this);
		}

		::System::Boolean IsTmpFileNameAddFileHash()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EGEJIOKOFOF_ISTMPFILENAMEADDFILEHASH_OFFSET))(this);
		}

		::System::Boolean IsPatch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EGEJIOKOFOF_ISPATCH_OFFSET))(this);
		}

		::System::Boolean IsNeedWriteContentHashFile()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EGEJIOKOFOF_ISNEEDWRITECONTENTHASHFILE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGEJIOKOFOF_TOSTRING_OFFSET))(this);
		}

		::System::String* GJJGFCFLEEO()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGEJIOKOFOF_GJJGFCFLEEO_OFFSET))(this);
		}

		::System::String* KODJKMECEKA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGEJIOKOFOF_KODJKMECEKA_OFFSET))(this);
		}

		::System::String* EKFOHPPIMMK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGEJIOKOFOF_EKFOHPPIMMK_OFFSET))(this);
		}

		::System::String* LKBJEICPHKF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGEJIOKOFOF_LKBJEICPHKF_OFFSET))(this);
		}

	};
