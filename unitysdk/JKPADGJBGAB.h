#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IKMKMKOHLHL.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class KMEOLMEEJEM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JKPADGJBGAB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A5F0720)
#define JKPADGJBGAB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A5F04E0)
#define JKPADGJBGAB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A5F0660)
#define JKPADGJBGAB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A5F0800)
#define JKPADGJBGAB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A5F04F0)
#define JKPADGJBGAB_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1A5F0940)
#define JKPADGJBGAB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A5F0B50)
#define JKPADGJBGAB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A5F0130)
#define JKPADGJBGAB_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A5F0B30)
#define JKPADGJBGAB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A5F0110)
#define JKPADGJBGAB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A5F03F0)
#define JKPADGJBGAB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5F0930)

inline static constexpr unsigned int JKPADGJBGAB_TypeDefinitionIndex = 11008;

class JKPADGJBGAB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::IKMKMKOHLHL DHDJDGFNBOA; // 0x18
	::Il2CppArray<::KMEOLMEEJEM*>* OJMBOGGMIKO; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPADGJBGAB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPADGJBGAB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPADGJBGAB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JKPADGJBGAB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + JKPADGJBGAB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPADGJBGAB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPADGJBGAB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPADGJBGAB_FINALIZE_OFFSET))(this);
	}

	::KMEOLMEEJEM* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::KMEOLMEEJEM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JKPADGJBGAB_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPADGJBGAB_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + JKPADGJBGAB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPADGJBGAB_CHLEALKAOJO_OFFSET))(this);
	}
};
