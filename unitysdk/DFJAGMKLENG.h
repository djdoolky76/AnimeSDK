#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CDBFLGMDPEF.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class NHIMDHEAJKO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DFJAGMKLENG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17780810)
#define DFJAGMKLENG_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x177805D0)
#define DFJAGMKLENG_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17780750)
#define DFJAGMKLENG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x177808F0)
#define DFJAGMKLENG_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x177805E0)
#define DFJAGMKLENG_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17780A70)
#define DFJAGMKLENG_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17780CC0)
#define DFJAGMKLENG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17780220)
#define DFJAGMKLENG_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17780CA0)
#define DFJAGMKLENG_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17780200)
#define DFJAGMKLENG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x177804E0)
#define DFJAGMKLENG__CTOR_OFFSET UNITYSDK_OFFSET(0x17780A20)

inline static constexpr unsigned int DFJAGMKLENG_TypeDefinitionIndex = 15991;

class DFJAGMKLENG : public ::System::Object
{
public:
	::CDBFLGMDPEF DHDJDGFNBOA; // 0x10
	::System::Action* PLDOELOOFLL; // 0x28
	::Il2CppArray<::NHIMDHEAJKO*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJAGMKLENG__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJAGMKLENG_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJAGMKLENG_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DFJAGMKLENG_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DFJAGMKLENG_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJAGMKLENG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJAGMKLENG_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJAGMKLENG_FINALIZE_OFFSET))(this);
	}

	::NHIMDHEAJKO* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::NHIMDHEAJKO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DFJAGMKLENG_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DFJAGMKLENG_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJAGMKLENG_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJAGMKLENG_CHLEALKAOJO_OFFSET))(this);
	}
};
