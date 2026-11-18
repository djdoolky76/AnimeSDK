#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AHCLPIGDLFF.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class CLHDPNMKCFF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ONKNFPIAEBL_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1AB3A6D0)
#define ONKNFPIAEBL_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1AB3A4A0)
#define ONKNFPIAEBL_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1AB3A610)
#define ONKNFPIAEBL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1AB3A7B0)
#define ONKNFPIAEBL_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1AB3A4B0)
#define ONKNFPIAEBL_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1AB3AAE0)
#define ONKNFPIAEBL_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1AB3A8F0)
#define ONKNFPIAEBL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1AB3A100)
#define ONKNFPIAEBL_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1AB3AAC0)
#define ONKNFPIAEBL_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1AB3A0E0)
#define ONKNFPIAEBL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1AB3A3C0)
#define ONKNFPIAEBL__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB3A8E0)

inline static constexpr unsigned int ONKNFPIAEBL_TypeDefinitionIndex = 14538;

class ONKNFPIAEBL : public ::System::Object
{
public:
	::Il2CppArray<::CLHDPNMKCFF*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::AHCLPIGDLFF DHDJDGFNBOA; // 0x20
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONKNFPIAEBL__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ONKNFPIAEBL_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONKNFPIAEBL_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ONKNFPIAEBL_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + ONKNFPIAEBL_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONKNFPIAEBL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONKNFPIAEBL_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONKNFPIAEBL_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ONKNFPIAEBL_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONKNFPIAEBL_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONKNFPIAEBL_CHLEALKAOJO_OFFSET))(this);
	}

	::CLHDPNMKCFF* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::CLHDPNMKCFF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ONKNFPIAEBL_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
