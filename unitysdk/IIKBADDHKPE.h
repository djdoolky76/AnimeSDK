#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MNCKNICJEKA.h"
#include "unitysdk/System/Object.h"

class MOLCDEKEJFJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define IIKBADDHKPE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x152E78F0)
#define IIKBADDHKPE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x152E7670)
#define IIKBADDHKPE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x152E7680)
#define IIKBADDHKPE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x152E7740)
#define IIKBADDHKPE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x152E7870)
#define IIKBADDHKPE_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x152E7CD0)
#define IIKBADDHKPE_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x152E7A20)
#define IIKBADDHKPE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x152E72C0)
#define IIKBADDHKPE_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x152E7F00)
#define IIKBADDHKPE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x152E72A0)
#define IIKBADDHKPE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x152E7580)
#define IIKBADDHKPE__CTOR_OFFSET UNITYSDK_OFFSET(0x152E79D0)

inline static constexpr unsigned int IIKBADDHKPE_TypeDefinitionIndex = 15193;

class IIKBADDHKPE : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::MNCKNICJEKA DHDJDGFNBOA; // 0x20
	::Il2CppArray<::MOLCDEKEJFJ*>* OJMBOGGMIKO; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIKBADDHKPE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IIKBADDHKPE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIKBADDHKPE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIKBADDHKPE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIKBADDHKPE_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IIKBADDHKPE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + IIKBADDHKPE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIKBADDHKPE_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IIKBADDHKPE_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIKBADDHKPE_CHLEALKAOJO_OFFSET))(this);
	}

	::MOLCDEKEJFJ* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::MOLCDEKEJFJ*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IIKBADDHKPE_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIKBADDHKPE_NAMKJOJBAOA_OFFSET))(this);
	}
};
