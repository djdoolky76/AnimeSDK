#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNBNIHHHANM.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class FLJPOONFDMB;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HKGJAOIJKPK_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x160F7CA0)
#define HKGJAOIJKPK_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x160F7A20)
#define HKGJAOIJKPK_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x160F7A30)
#define HKGJAOIJKPK_FINALIZE_OFFSET UNITYSDK_OFFSET(0x160F7AF0)
#define HKGJAOIJKPK_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x160F7C20)
#define HKGJAOIJKPK_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x160F7DD0)
#define HKGJAOIJKPK_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x160F8020)
#define HKGJAOIJKPK_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x160F7680)
#define HKGJAOIJKPK_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x160F8000)
#define HKGJAOIJKPK_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x160F7660)
#define HKGJAOIJKPK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x160F7940)
#define HKGJAOIJKPK__CTOR_OFFSET UNITYSDK_OFFSET(0x160F7D80)

inline static constexpr unsigned int HKGJAOIJKPK_TypeDefinitionIndex = 13248;

class HKGJAOIJKPK : public ::System::Object
{
public:
	::Il2CppArray<::FLJPOONFDMB*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::CNBNIHHHANM DHDJDGFNBOA; // 0x28
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKGJAOIJKPK__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HKGJAOIJKPK_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKGJAOIJKPK_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKGJAOIJKPK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKGJAOIJKPK_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HKGJAOIJKPK_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HKGJAOIJKPK_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKGJAOIJKPK_BHLAEBMEOLO_OFFSET))(this);
	}

	::FLJPOONFDMB* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::FLJPOONFDMB*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HKGJAOIJKPK_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HKGJAOIJKPK_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKGJAOIJKPK_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKGJAOIJKPK_NAMKJOJBAOA_OFFSET))(this);
	}
};
