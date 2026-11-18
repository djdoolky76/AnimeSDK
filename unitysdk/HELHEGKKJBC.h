#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AGIFIKGDHDK.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class KGMGPHPLHDA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HELHEGKKJBC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17BF9C90)
#define HELHEGKKJBC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17BF9A50)
#define HELHEGKKJBC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17BF9BD0)
#define HELHEGKKJBC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17BF9D70)
#define HELHEGKKJBC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17BF9A60)
#define HELHEGKKJBC_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x17BFA0C0)
#define HELHEGKKJBC_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17BFA2C0)
#define HELHEGKKJBC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17BF9EF0)
#define HELHEGKKJBC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17BF96A0)
#define HELHEGKKJBC_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17BFA2A0)
#define HELHEGKKJBC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17BF9680)
#define HELHEGKKJBC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17BF9960)
#define HELHEGKKJBC__CTOR_OFFSET UNITYSDK_OFFSET(0x17BF9EA0)

inline static constexpr unsigned int HELHEGKKJBC_TypeDefinitionIndex = 15549;

class HELHEGKKJBC : public ::System::Object
{
public:
	::AGIFIKGDHDK DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::Il2CppArray<::KGMGPHPLHDA*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HELHEGKKJBC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HELHEGKKJBC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HELHEGKKJBC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HELHEGKKJBC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HELHEGKKJBC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HELHEGKKJBC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HELHEGKKJBC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HELHEGKKJBC_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HELHEGKKJBC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::KGMGPHPLHDA* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::KGMGPHPLHDA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HELHEGKKJBC_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HELHEGKKJBC_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HELHEGKKJBC_CHLEALKAOJO_OFFSET))(this);
	}

	::KGMGPHPLHDA* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::KGMGPHPLHDA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HELHEGKKJBC_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
