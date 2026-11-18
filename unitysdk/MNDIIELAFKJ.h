#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBMPOOLHDCD.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class JOPHFMALNAF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MNDIIELAFKJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BA9DF40)
#define MNDIIELAFKJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BA9DD10)
#define MNDIIELAFKJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BA9DE80)
#define MNDIIELAFKJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BA9E020)
#define MNDIIELAFKJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BA9DD20)
#define MNDIIELAFKJ_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1BA9E350)
#define MNDIIELAFKJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BA9E180)
#define MNDIIELAFKJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BA9D970)
#define MNDIIELAFKJ_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1BA9E160)
#define MNDIIELAFKJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BA9D950)
#define MNDIIELAFKJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BA9DC30)
#define MNDIIELAFKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA9E150)

inline static constexpr unsigned int MNDIIELAFKJ_TypeDefinitionIndex = 14554;

class MNDIIELAFKJ : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::Il2CppArray<::JOPHFMALNAF*>* OJMBOGGMIKO; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::HBMPOOLHDCD DHDJDGFNBOA; // 0x28
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNDIIELAFKJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MNDIIELAFKJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNDIIELAFKJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MNDIIELAFKJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MNDIIELAFKJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNDIIELAFKJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNDIIELAFKJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNDIIELAFKJ_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNDIIELAFKJ_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNDIIELAFKJ_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MNDIIELAFKJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::JOPHFMALNAF* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::JOPHFMALNAF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MNDIIELAFKJ_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
