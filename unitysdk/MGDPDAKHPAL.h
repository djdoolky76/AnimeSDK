#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDOAKFJMBFG.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class BPPLJBLPKAN;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MGDPDAKHPAL_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BA94340)
#define MGDPDAKHPAL_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BA940C0)
#define MGDPDAKHPAL_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BA940D0)
#define MGDPDAKHPAL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BA94190)
#define MGDPDAKHPAL_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BA942C0)
#define MGDPDAKHPAL_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1BA94470)
#define MGDPDAKHPAL_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BA946C0)
#define MGDPDAKHPAL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BA93D10)
#define MGDPDAKHPAL_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1BA946A0)
#define MGDPDAKHPAL_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BA93CF0)
#define MGDPDAKHPAL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BA93FD0)
#define MGDPDAKHPAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA94420)

inline static constexpr unsigned int MGDPDAKHPAL_TypeDefinitionIndex = 13051;

class MGDPDAKHPAL : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::Il2CppArray<::BPPLJBLPKAN*>* OJMBOGGMIKO; // 0x28
	::BDOAKFJMBFG DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGDPDAKHPAL__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MGDPDAKHPAL_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGDPDAKHPAL_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGDPDAKHPAL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGDPDAKHPAL_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MGDPDAKHPAL_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MGDPDAKHPAL_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGDPDAKHPAL_BHLAEBMEOLO_OFFSET))(this);
	}

	::BPPLJBLPKAN* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::BPPLJBLPKAN*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MGDPDAKHPAL_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGDPDAKHPAL_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGDPDAKHPAL_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MGDPDAKHPAL_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
