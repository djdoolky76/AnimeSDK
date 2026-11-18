#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MAOPDACNBCI.h"
#include "unitysdk/System/Object.h"

class BMHHPLPEDDI;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define IFNEPLDEHJP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x16107310)
#define IFNEPLDEHJP_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x161070D0)
#define IFNEPLDEHJP_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x16107250)
#define IFNEPLDEHJP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x161073F0)
#define IFNEPLDEHJP_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x161070E0)
#define IFNEPLDEHJP_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x16107570)
#define IFNEPLDEHJP_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x161077C0)
#define IFNEPLDEHJP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x16106D20)
#define IFNEPLDEHJP_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x161077A0)
#define IFNEPLDEHJP_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x16106D00)
#define IFNEPLDEHJP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x16106FE0)
#define IFNEPLDEHJP__CTOR_OFFSET UNITYSDK_OFFSET(0x16107520)

inline static constexpr unsigned int IFNEPLDEHJP_TypeDefinitionIndex = 16036;

class IFNEPLDEHJP : public ::System::Object
{
public:
	::Il2CppArray<::BMHHPLPEDDI*>* OJMBOGGMIKO; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::MAOPDACNBCI DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFNEPLDEHJP__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFNEPLDEHJP_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFNEPLDEHJP_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IFNEPLDEHJP_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + IFNEPLDEHJP_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFNEPLDEHJP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFNEPLDEHJP_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFNEPLDEHJP_FINALIZE_OFFSET))(this);
	}

	::BMHHPLPEDDI* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::BMHHPLPEDDI*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFNEPLDEHJP_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IFNEPLDEHJP_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFNEPLDEHJP_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFNEPLDEHJP_NAMKJOJBAOA_OFFSET))(this);
	}
};
