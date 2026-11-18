#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABMKCPPDGAB.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class ACCMMFIENOJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KJHANMGNJGP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B642C40)
#define KJHANMGNJGP_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B642A00)
#define KJHANMGNJGP_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B642B80)
#define KJHANMGNJGP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B642D20)
#define KJHANMGNJGP_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B642A10)
#define KJHANMGNJGP_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B642EC0)
#define KJHANMGNJGP_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B6430F0)
#define KJHANMGNJGP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B642650)
#define KJHANMGNJGP_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B642EA0)
#define KJHANMGNJGP_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B642630)
#define KJHANMGNJGP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B642910)
#define KJHANMGNJGP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B642E50)

inline static constexpr unsigned int KJHANMGNJGP_TypeDefinitionIndex = 14301;

class KJHANMGNJGP : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::Il2CppArray<::ACCMMFIENOJ*>* OJMBOGGMIKO; // 0x20
	::ABMKCPPDGAB DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHANMGNJGP__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHANMGNJGP_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHANMGNJGP_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KJHANMGNJGP_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KJHANMGNJGP_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHANMGNJGP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHANMGNJGP_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHANMGNJGP_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHANMGNJGP_NAMKJOJBAOA_OFFSET))(this);
	}

	::ACCMMFIENOJ* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::ACCMMFIENOJ*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KJHANMGNJGP_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHANMGNJGP_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KJHANMGNJGP_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
