#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLFCHLFNLFH.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class PEBBENOBNCJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PJNPEKMLBKK_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1EDC12A0)
#define PJNPEKMLBKK_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1EDC1020)
#define PJNPEKMLBKK_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1EDC1030)
#define PJNPEKMLBKK_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1EDC10F0)
#define PJNPEKMLBKK_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1EDC1220)
#define PJNPEKMLBKK_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1EDC13F0)
#define PJNPEKMLBKK_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1EDC1620)
#define PJNPEKMLBKK_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1EDC0C70)
#define PJNPEKMLBKK_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1EDC13D0)
#define PJNPEKMLBKK_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1EDC0C50)
#define PJNPEKMLBKK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1EDC0F30)
#define PJNPEKMLBKK__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDC1380)

inline static constexpr unsigned int PJNPEKMLBKK_TypeDefinitionIndex = 12079;

class PJNPEKMLBKK : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::BLFCHLFNLFH DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::Il2CppArray<::PEBBENOBNCJ*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJNPEKMLBKK__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PJNPEKMLBKK_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJNPEKMLBKK_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJNPEKMLBKK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJNPEKMLBKK_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PJNPEKMLBKK_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + PJNPEKMLBKK_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJNPEKMLBKK_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJNPEKMLBKK_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJNPEKMLBKK_NAMKJOJBAOA_OFFSET))(this);
	}

	::PEBBENOBNCJ* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::PEBBENOBNCJ*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PJNPEKMLBKK_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + PJNPEKMLBKK_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
