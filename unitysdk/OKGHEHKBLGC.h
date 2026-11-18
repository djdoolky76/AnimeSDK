#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLKELEMOOLM.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class PMPDGEBDEFE;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define OKGHEHKBLGC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BF7DDB0)
#define OKGHEHKBLGC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BF7DB80)
#define OKGHEHKBLGC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BF7DCF0)
#define OKGHEHKBLGC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BF7DE90)
#define OKGHEHKBLGC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BF7DB90)
#define OKGHEHKBLGC_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1BF7E010)
#define OKGHEHKBLGC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BF7E260)
#define OKGHEHKBLGC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BF7D7E0)
#define OKGHEHKBLGC_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1BF7E240)
#define OKGHEHKBLGC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BF7D7C0)
#define OKGHEHKBLGC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BF7DAA0)
#define OKGHEHKBLGC__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF7DFC0)

inline static constexpr unsigned int OKGHEHKBLGC_TypeDefinitionIndex = 17250;

class OKGHEHKBLGC : public ::System::Object
{
public:
	::HLKELEMOOLM DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::Il2CppArray<::PMPDGEBDEFE*>* OJMBOGGMIKO; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKGHEHKBLGC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OKGHEHKBLGC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKGHEHKBLGC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OKGHEHKBLGC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + OKGHEHKBLGC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKGHEHKBLGC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKGHEHKBLGC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKGHEHKBLGC_FINALIZE_OFFSET))(this);
	}

	::PMPDGEBDEFE* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::PMPDGEBDEFE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OKGHEHKBLGC_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKGHEHKBLGC_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKGHEHKBLGC_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + OKGHEHKBLGC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
