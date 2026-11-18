#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MFPJIMDJFKJ.h"
#include "unitysdk/System/Object.h"

class EBCCCGKCBKP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HHEHBHOPFCC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17473C00)
#define HHEHBHOPFCC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x174739C0)
#define HHEHBHOPFCC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17473B40)
#define HHEHBHOPFCC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17473CE0)
#define HHEHBHOPFCC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x174739D0)
#define HHEHBHOPFCC_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17474030)
#define HHEHBHOPFCC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17473E60)
#define HHEHBHOPFCC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17473610)
#define HHEHBHOPFCC_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17474260)
#define HHEHBHOPFCC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x174735F0)
#define HHEHBHOPFCC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x174738D0)
#define HHEHBHOPFCC__CTOR_OFFSET UNITYSDK_OFFSET(0x17473E10)

inline static constexpr unsigned int HHEHBHOPFCC_TypeDefinitionIndex = 14329;

class HHEHBHOPFCC : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::Il2CppArray<::EBCCCGKCBKP*>* OJMBOGGMIKO; // 0x20
	::MFPJIMDJFKJ DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHEHBHOPFCC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HHEHBHOPFCC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHEHBHOPFCC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HHEHBHOPFCC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HHEHBHOPFCC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHEHBHOPFCC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHEHBHOPFCC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHEHBHOPFCC_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HHEHBHOPFCC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHEHBHOPFCC_CHLEALKAOJO_OFFSET))(this);
	}

	::EBCCCGKCBKP* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::EBCCCGKCBKP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HHEHBHOPFCC_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHEHBHOPFCC_NAMKJOJBAOA_OFFSET))(this);
	}
};
