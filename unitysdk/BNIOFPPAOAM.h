#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/KLGCCBHKKMI.h"
#include "unitysdk/System/Object.h"

class CFHGPLNHNME;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BNIOFPPAOAM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x15734150)
#define BNIOFPPAOAM_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x15733ED0)
#define BNIOFPPAOAM_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x15733EE0)
#define BNIOFPPAOAM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x15733FA0)
#define BNIOFPPAOAM_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x157340D0)
#define BNIOFPPAOAM_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x15734550)
#define BNIOFPPAOAM_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x15734280)
#define BNIOFPPAOAM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x15733B30)
#define BNIOFPPAOAM_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x15734530)
#define BNIOFPPAOAM_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x15733B10)
#define BNIOFPPAOAM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x15733DF0)
#define BNIOFPPAOAM__CTOR_OFFSET UNITYSDK_OFFSET(0x15734230)

inline static constexpr unsigned int BNIOFPPAOAM_TypeDefinitionIndex = 13833;

class BNIOFPPAOAM : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::KLGCCBHKKMI DHDJDGFNBOA; // 0x18
	::System::Action* PLDOELOOFLL; // 0x30
	::Il2CppArray<::CFHGPLNHNME*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNIOFPPAOAM__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BNIOFPPAOAM_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNIOFPPAOAM_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNIOFPPAOAM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNIOFPPAOAM_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BNIOFPPAOAM_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + BNIOFPPAOAM_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNIOFPPAOAM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNIOFPPAOAM_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BNIOFPPAOAM_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNIOFPPAOAM_NAMKJOJBAOA_OFFSET))(this);
	}

	::CFHGPLNHNME* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::CFHGPLNHNME*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BNIOFPPAOAM_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
