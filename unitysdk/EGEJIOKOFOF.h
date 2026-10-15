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

#define EGEJIOKOFOF_CTOR_OFFSET UNITYSDK_OFFSET(0x1450A9C0)
#define EGEJIOKOFOF_EKFOHPPIMMK_OFFSET UNITYSDK_OFFSET(0x1450A720)
#define EGEJIOKOFOF_GETCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x1450A250)
#define EGEJIOKOFOF_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x1450A1D0)
#define EGEJIOKOFOF_GETFILESIZE_OFFSET UNITYSDK_OFFSET(0x1450A210)
#define EGEJIOKOFOF_GJJGFCFLEEO_OFFSET UNITYSDK_OFFSET(0x1450A430)
#define EGEJIOKOFOF_ISNEEDWRITECONTENTHASHFILE_OFFSET UNITYSDK_OFFSET(0x1450A330)
#define EGEJIOKOFOF_ISPATCH_OFFSET UNITYSDK_OFFSET(0x1450A2F0)
#define EGEJIOKOFOF_ISTMPFILENAMEADDFILEHASH_OFFSET UNITYSDK_OFFSET(0x1450A2B0)
#define EGEJIOKOFOF_KODJKMECEKA_OFFSET UNITYSDK_OFFSET(0x1450A4E0)
#define EGEJIOKOFOF_LKBJEICPHKF_OFFSET UNITYSDK_OFFSET(0x1450A840)
#define EGEJIOKOFOF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1450A370)

inline static constexpr unsigned int EGEJIOKOFOF_TypeDefinitionIndex = 59579;

	class EGEJIOKOFOF : public ::System::Object
	{
	public:
		::HGDELEAHIJO* EONAHKFAAJP; // 0x10
		::KGPCBBIOGLB* FJCAKOIDONG; // 0x18
		::System::String* CDMFNHJGGKF; // 0x20
		::CDKEBLNOEPH* PBKAHOBDHKC; // 0x28
		::System::String* MKFEGIMACLO; // 0x30
		::OAPFEGCKDNG* IKJHOFOGAKA; // 0x38
		::System::Int64 EEBBDOKAKOM; // 0x40
		::RPG::Client::ByteHash16 HHPFNGFAJIA; // 0x48
		::RPG::Client::ExeCode MEPFOEEGBEA; // 0x58
		::System::Boolean CIGJFJLAPFJ; // 0x5C
		::System::Boolean EFFAJLMJMDM; // 0x5D
		::System::Boolean BCNKJMPIHFH; // 0x5E
		::System::Boolean PJCKBIHHNCI; // 0x5F
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
