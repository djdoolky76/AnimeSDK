#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJKJNFGDJKO.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class AHHCKDKOPDF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define JFCPHBHDHKD_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A5EAA10)
#define JFCPHBHDHKD_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A5EA7D0)
#define JFCPHBHDHKD_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A5EA950)
#define JFCPHBHDHKD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A5EAAF0)
#define JFCPHBHDHKD_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A5EA7E0)
#define JFCPHBHDHKD_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1A5EAE60)
#define JFCPHBHDHKD_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A5EAC90)
#define JFCPHBHDHKD_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A5EA420)
#define JFCPHBHDHKD_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A5EAC70)
#define JFCPHBHDHKD_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A5EA400)
#define JFCPHBHDHKD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A5EA6E0)
#define JFCPHBHDHKD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5EAC20)

inline static constexpr unsigned int JFCPHBHDHKD_TypeDefinitionIndex = 12937;

class JFCPHBHDHKD : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::DJKJNFGDJKO DHDJDGFNBOA; // 0x18
	::Il2CppArray<::AHHCKDKOPDF*>* OJMBOGGMIKO; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFCPHBHDHKD__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JFCPHBHDHKD_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFCPHBHDHKD_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JFCPHBHDHKD_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + JFCPHBHDHKD_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFCPHBHDHKD_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFCPHBHDHKD_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFCPHBHDHKD_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFCPHBHDHKD_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + JFCPHBHDHKD_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFCPHBHDHKD_CHLEALKAOJO_OFFSET))(this);
	}

	::AHHCKDKOPDF* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::AHHCKDKOPDF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JFCPHBHDHKD_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
