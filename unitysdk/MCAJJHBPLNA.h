#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJCGNPOGCDK.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class BLPDCNADIDI;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define MCAJJHBPLNA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1AD6D740)
#define MCAJJHBPLNA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1AD6D500)
#define MCAJJHBPLNA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1AD6D680)
#define MCAJJHBPLNA_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x1AD6D9A0)
#define MCAJJHBPLNA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1AD6D820)
#define MCAJJHBPLNA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1AD6D510)
#define MCAJJHBPLNA_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x1AD6DA90)
#define MCAJJHBPLNA_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1AD6DC70)
#define MCAJJHBPLNA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1AD6D150)
#define MCAJJHBPLNA_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1AD6DA70)
#define MCAJJHBPLNA_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1AD6D130)
#define MCAJJHBPLNA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1AD6D410)
#define MCAJJHBPLNA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD6D950)

inline static constexpr unsigned int MCAJJHBPLNA_TypeDefinitionIndex = 11302;

class MCAJJHBPLNA : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::Il2CppArray<::BLPDCNADIDI*>* OJMBOGGMIKO; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::FJCGNPOGCDK DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCAJJHBPLNA__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MCAJJHBPLNA_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCAJJHBPLNA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MCAJJHBPLNA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MCAJJHBPLNA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCAJJHBPLNA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCAJJHBPLNA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCAJJHBPLNA_FINALIZE_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::BLPDCNADIDI*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::BLPDCNADIDI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCAJJHBPLNA_EJABHIAHIAN_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MCAJJHBPLNA_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::BLPDCNADIDI* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::BLPDCNADIDI*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MCAJJHBPLNA_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCAJJHBPLNA_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCAJJHBPLNA_NAMKJOJBAOA_OFFSET))(this);
	}
};
