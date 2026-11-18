#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JPIHBAMECNH.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class AFMIELLOBIJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PCBHJGHJHKC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17375290)
#define PCBHJGHJHKC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17375060)
#define PCBHJGHJHKC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x173751D0)
#define PCBHJGHJHKC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17375370)
#define PCBHJGHJHKC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17375070)
#define PCBHJGHJHKC_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17375510)
#define PCBHJGHJHKC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17375740)
#define PCBHJGHJHKC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17374CC0)
#define PCBHJGHJHKC_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x173754F0)
#define PCBHJGHJHKC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17374CA0)
#define PCBHJGHJHKC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17374F80)
#define PCBHJGHJHKC__CTOR_OFFSET UNITYSDK_OFFSET(0x173754A0)

inline static constexpr unsigned int PCBHJGHJHKC_TypeDefinitionIndex = 11632;

class PCBHJGHJHKC : public ::System::Object
{
public:
	::JPIHBAMECNH DHDJDGFNBOA; // 0x10
	::System::Action* PLDOELOOFLL; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::Il2CppArray<::AFMIELLOBIJ*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBHJGHJHKC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBHJGHJHKC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBHJGHJHKC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PCBHJGHJHKC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + PCBHJGHJHKC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBHJGHJHKC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBHJGHJHKC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBHJGHJHKC_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBHJGHJHKC_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBHJGHJHKC_NAMKJOJBAOA_OFFSET))(this);
	}

	::AFMIELLOBIJ* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::AFMIELLOBIJ*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PCBHJGHJHKC_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + PCBHJGHJHKC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
