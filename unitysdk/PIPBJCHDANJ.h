#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJPNLJBBHDC.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class ANFBAJDCLEN;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PIPBJCHDANJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17FEB030)
#define PIPBJCHDANJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17FEADF0)
#define PIPBJCHDANJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17FEAF70)
#define PIPBJCHDANJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17FEB110)
#define PIPBJCHDANJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17FEAE00)
#define PIPBJCHDANJ_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17FEB2B0)
#define PIPBJCHDANJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17FEB4E0)
#define PIPBJCHDANJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17FEAA40)
#define PIPBJCHDANJ_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17FEB290)
#define PIPBJCHDANJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17FEAA20)
#define PIPBJCHDANJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17FEAD00)
#define PIPBJCHDANJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17FEB240)

inline static constexpr unsigned int PIPBJCHDANJ_TypeDefinitionIndex = 13586;

class PIPBJCHDANJ : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::DJPNLJBBHDC DHDJDGFNBOA; // 0x20
	::Il2CppArray<::ANFBAJDCLEN*>* OJMBOGGMIKO; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPBJCHDANJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPBJCHDANJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPBJCHDANJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PIPBJCHDANJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + PIPBJCHDANJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPBJCHDANJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPBJCHDANJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPBJCHDANJ_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPBJCHDANJ_NAMKJOJBAOA_OFFSET))(this);
	}

	::ANFBAJDCLEN* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::ANFBAJDCLEN*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PIPBJCHDANJ_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + PIPBJCHDANJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPBJCHDANJ_CHLEALKAOJO_OFFSET))(this);
	}
};
