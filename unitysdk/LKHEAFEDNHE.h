#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DPCDPKMLFHG.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class PCKNFAHGFCH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define LKHEAFEDNHE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17338CB0)
#define LKHEAFEDNHE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17338A80)
#define LKHEAFEDNHE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17338BF0)
#define LKHEAFEDNHE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17338D90)
#define LKHEAFEDNHE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17338A90)
#define LKHEAFEDNHE_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17339100)
#define LKHEAFEDNHE_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17338F30)
#define LKHEAFEDNHE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x173386E0)
#define LKHEAFEDNHE_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17338F10)
#define LKHEAFEDNHE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x173386C0)
#define LKHEAFEDNHE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x173389A0)
#define LKHEAFEDNHE__CTOR_OFFSET UNITYSDK_OFFSET(0x17338EC0)

inline static constexpr unsigned int LKHEAFEDNHE_TypeDefinitionIndex = 10259;

class LKHEAFEDNHE : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::Il2CppArray<::PCKNFAHGFCH*>* OJMBOGGMIKO; // 0x20
	::DPCDPKMLFHG DHDJDGFNBOA; // 0x28
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKHEAFEDNHE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LKHEAFEDNHE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKHEAFEDNHE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LKHEAFEDNHE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + LKHEAFEDNHE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKHEAFEDNHE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKHEAFEDNHE_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKHEAFEDNHE_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKHEAFEDNHE_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKHEAFEDNHE_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LKHEAFEDNHE_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::PCKNFAHGFCH* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::PCKNFAHGFCH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LKHEAFEDNHE_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
