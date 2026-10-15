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

#define EGEJIOKOFOF_CTOR_OFFSET UNITYSDK_OFFSET(0x14507960)
#define EGEJIOKOFOF_EKFOHPPIMMK_OFFSET UNITYSDK_OFFSET(0x145076C0)
#define EGEJIOKOFOF_GETCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x145071F0)
#define EGEJIOKOFOF_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x14507170)
#define EGEJIOKOFOF_GETFILESIZE_OFFSET UNITYSDK_OFFSET(0x145071B0)
#define EGEJIOKOFOF_GJJGFCFLEEO_OFFSET UNITYSDK_OFFSET(0x145073D0)
#define EGEJIOKOFOF_ISNEEDWRITECONTENTHASHFILE_OFFSET UNITYSDK_OFFSET(0x145072D0)
#define EGEJIOKOFOF_ISPATCH_OFFSET UNITYSDK_OFFSET(0x14507290)
#define EGEJIOKOFOF_ISTMPFILENAMEADDFILEHASH_OFFSET UNITYSDK_OFFSET(0x14507250)
#define EGEJIOKOFOF_KODJKMECEKA_OFFSET UNITYSDK_OFFSET(0x14507480)
#define EGEJIOKOFOF_LKBJEICPHKF_OFFSET UNITYSDK_OFFSET(0x145077E0)
#define EGEJIOKOFOF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x14507310)

inline static constexpr unsigned int EGEJIOKOFOF_TypeDefinitionIndex = 59579;

	class EGEJIOKOFOF : public ::System::Object
	{
	public:
		::System::String* MKFEGIMACLO; // 0x10
		::OAPFEGCKDNG* IKJHOFOGAKA; // 0x18
		::KGPCBBIOGLB* FJCAKOIDONG; // 0x20
		::CDKEBLNOEPH* PBKAHOBDHKC; // 0x28
		::System::String* CDMFNHJGGKF; // 0x30
		::HGDELEAHIJO* EONAHKFAAJP; // 0x38
		::RPG::Client::ExeCode MEPFOEEGBEA; // 0x40
		::System::Byte _padding0[0x4];
		::System::Int64 EEBBDOKAKOM; // 0x48
		::System::Boolean EFFAJLMJMDM; // 0x50
		::System::Boolean BCNKJMPIHFH; // 0x51
		::System::Boolean PJCKBIHHNCI; // 0x52
		::System::Boolean CIGJFJLAPFJ; // 0x53
		::RPG::Client::ByteHash16 HHPFNGFAJIA; // 0x54
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
