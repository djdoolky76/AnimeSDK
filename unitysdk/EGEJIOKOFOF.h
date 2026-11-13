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

#define EGEJIOKOFOF_CTOR_OFFSET UNITYSDK_OFFSET(0x17C02E90)
#define EGEJIOKOFOF_EKFOHPPIMMK_OFFSET UNITYSDK_OFFSET(0x17C02BF0)
#define EGEJIOKOFOF_GETCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x17C02720)
#define EGEJIOKOFOF_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x17C026A0)
#define EGEJIOKOFOF_GETFILESIZE_OFFSET UNITYSDK_OFFSET(0x17C026E0)
#define EGEJIOKOFOF_GJJGFCFLEEO_OFFSET UNITYSDK_OFFSET(0x17C02900)
#define EGEJIOKOFOF_ISNEEDWRITECONTENTHASHFILE_OFFSET UNITYSDK_OFFSET(0x17C02800)
#define EGEJIOKOFOF_ISPATCH_OFFSET UNITYSDK_OFFSET(0x17C027C0)
#define EGEJIOKOFOF_ISTMPFILENAMEADDFILEHASH_OFFSET UNITYSDK_OFFSET(0x17C02780)
#define EGEJIOKOFOF_KODJKMECEKA_OFFSET UNITYSDK_OFFSET(0x17C029B0)
#define EGEJIOKOFOF_LKBJEICPHKF_OFFSET UNITYSDK_OFFSET(0x17C02D10)
#define EGEJIOKOFOF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17C02840)

inline static constexpr unsigned int EGEJIOKOFOF_TypeDefinitionIndex = 60856;

	class EGEJIOKOFOF : public ::System::Object
	{
	public:
		::HGDELEAHIJO* EONAHKFAAJP; // 0x10
		::System::String* MKFEGIMACLO; // 0x18
		::KGPCBBIOGLB* FJCAKOIDONG; // 0x20
		::OAPFEGCKDNG* IKJHOFOGAKA; // 0x28
		::CDKEBLNOEPH* PBKAHOBDHKC; // 0x30
		::System::String* CDMFNHJGGKF; // 0x38
		::System::Boolean EFFAJLMJMDM; // 0x40
		::System::Boolean CIGJFJLAPFJ; // 0x41
		::System::Boolean PJCKBIHHNCI; // 0x42
		::System::Boolean BCNKJMPIHFH; // 0x43
		::System::Byte _padding0[0x4];
		::System::Int64 EEBBDOKAKOM; // 0x48
		::RPG::Client::ByteHash16 HHPFNGFAJIA; // 0x50
		::RPG::Client::ExeCode MEPFOEEGBEA; // 0x60
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
