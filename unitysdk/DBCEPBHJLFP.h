#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FGGNAHGHAMH.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class AMILFPBMCKH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DBCEPBHJLFP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17A94390)
#define DBCEPBHJLFP_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17A94160)
#define DBCEPBHJLFP_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17A942D0)
#define DBCEPBHJLFP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17A94470)
#define DBCEPBHJLFP_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17A94170)
#define DBCEPBHJLFP_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17A945F0)
#define DBCEPBHJLFP_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17A94840)
#define DBCEPBHJLFP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17A93DC0)
#define DBCEPBHJLFP_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17A94820)
#define DBCEPBHJLFP_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17A93DA0)
#define DBCEPBHJLFP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17A94080)
#define DBCEPBHJLFP__CTOR_OFFSET UNITYSDK_OFFSET(0x17A945A0)

inline static constexpr unsigned int DBCEPBHJLFP_TypeDefinitionIndex = 14142;

class DBCEPBHJLFP : public ::System::Object
{
public:
	::FGGNAHGHAMH DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::Il2CppArray<::AMILFPBMCKH*>* OJMBOGGMIKO; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCEPBHJLFP__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCEPBHJLFP_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCEPBHJLFP_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DBCEPBHJLFP_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DBCEPBHJLFP_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCEPBHJLFP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCEPBHJLFP_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCEPBHJLFP_FINALIZE_OFFSET))(this);
	}

	::AMILFPBMCKH* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::AMILFPBMCKH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DBCEPBHJLFP_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DBCEPBHJLFP_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCEPBHJLFP_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCEPBHJLFP_CHLEALKAOJO_OFFSET))(this);
	}
};
