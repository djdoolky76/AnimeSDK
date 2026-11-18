#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFCKILENBFF.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class INDFIKGNPHL;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HHDOLACCNPF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B87AE50)
#define HHDOLACCNPF_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B87ABD0)
#define HHDOLACCNPF_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B87ABE0)
#define HHDOLACCNPF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B87ACA0)
#define HHDOLACCNPF_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B87ADD0)
#define HHDOLACCNPF_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B87AFA0)
#define HHDOLACCNPF_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B87B3D0)
#define HHDOLACCNPF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B87A850)
#define HHDOLACCNPF_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B87AF80)
#define HHDOLACCNPF_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B87A830)
#define HHDOLACCNPF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B87AAE0)
#define HHDOLACCNPF__CTOR_OFFSET UNITYSDK_OFFSET(0x1B87AF30)

inline static constexpr unsigned int HHDOLACCNPF_TypeDefinitionIndex = 16315;

class HHDOLACCNPF : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* FLBOKGKPECD; // 0x10
	::HFCKILENBFF DHDJDGFNBOA; // 0x18
	::System::Action* PLDOELOOFLL; // 0x30
	::Il2CppArray<::INDFIKGNPHL*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHDOLACCNPF__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HHDOLACCNPF_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHDOLACCNPF_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHDOLACCNPF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHDOLACCNPF_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HHDOLACCNPF_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HHDOLACCNPF_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHDOLACCNPF_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHDOLACCNPF_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHDOLACCNPF_CHLEALKAOJO_OFFSET))(this);
	}

	::INDFIKGNPHL* IFDPKDOFOJD(::System::Int32 NKOGCJBGOGK, ::System::Int32 GPGPEJHGDNL)
	{
		return ((::INDFIKGNPHL*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HHDOLACCNPF_IFDPKDOFOJD_OFFSET))(this, NKOGCJBGOGK, GPGPEJHGDNL);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HHDOLACCNPF_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
