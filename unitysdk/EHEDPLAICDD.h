#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JALJDGDFEFI.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class JKKCCDALGJE;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define EHEDPLAICDD_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1951F870)
#define EHEDPLAICDD_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1951F630)
#define EHEDPLAICDD_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1951F7B0)
#define EHEDPLAICDD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1951F950)
#define EHEDPLAICDD_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1951F640)
#define EHEDPLAICDD_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x1951FCC0)
#define EHEDPLAICDD_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1951FAD0)
#define EHEDPLAICDD_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1951F280)
#define EHEDPLAICDD_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1951FCA0)
#define EHEDPLAICDD_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1951F260)
#define EHEDPLAICDD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1951F540)
#define EHEDPLAICDD__CTOR_OFFSET UNITYSDK_OFFSET(0x1951FA80)

inline static constexpr unsigned int EHEDPLAICDD_TypeDefinitionIndex = 12835;

class EHEDPLAICDD : public ::System::Object
{
public:
	::Il2CppArray<::JKKCCDALGJE*>* OJMBOGGMIKO; // 0x10
	::JALJDGDFEFI DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHEDPLAICDD__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHEDPLAICDD_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHEDPLAICDD_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EHEDPLAICDD_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + EHEDPLAICDD_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHEDPLAICDD_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHEDPLAICDD_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHEDPLAICDD_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHEDPLAICDD_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EHEDPLAICDD_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHEDPLAICDD_NAMKJOJBAOA_OFFSET))(this);
	}

	::JKKCCDALGJE* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::JKKCCDALGJE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EHEDPLAICDD_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}
};
