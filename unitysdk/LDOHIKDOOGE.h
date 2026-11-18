#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/POGBCCFOJMJ.h"
#include "unitysdk/System/Object.h"

class BNLCDBNAFJC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define LDOHIKDOOGE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1958CD80)
#define LDOHIKDOOGE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1958CB00)
#define LDOHIKDOOGE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1958CB10)
#define LDOHIKDOOGE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1958CBD0)
#define LDOHIKDOOGE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1958CD00)
#define LDOHIKDOOGE_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1958D180)
#define LDOHIKDOOGE_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1958CED0)
#define LDOHIKDOOGE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1958C750)
#define LDOHIKDOOGE_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1958CEB0)
#define LDOHIKDOOGE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1958C730)
#define LDOHIKDOOGE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1958CA10)
#define LDOHIKDOOGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1958CE60)

inline static constexpr unsigned int LDOHIKDOOGE_TypeDefinitionIndex = 13652;

class LDOHIKDOOGE : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::Il2CppArray<::BNLCDBNAFJC*>* OJMBOGGMIKO; // 0x18
	::POGBCCFOJMJ DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDOHIKDOOGE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LDOHIKDOOGE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDOHIKDOOGE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDOHIKDOOGE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDOHIKDOOGE_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LDOHIKDOOGE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + LDOHIKDOOGE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDOHIKDOOGE_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDOHIKDOOGE_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDOHIKDOOGE_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LDOHIKDOOGE_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::BNLCDBNAFJC* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::BNLCDBNAFJC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LDOHIKDOOGE_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
