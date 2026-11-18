#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/OBNCFHIKBNI.h"
#include "unitysdk/System/Object.h"

class LJAMCDMNBHP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DFBDCFIICED_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1574F030)
#define DFBDCFIICED_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1574EDB0)
#define DFBDCFIICED_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1574EDC0)
#define DFBDCFIICED_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1574EE80)
#define DFBDCFIICED_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1574EFB0)
#define DFBDCFIICED_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1574F430)
#define DFBDCFIICED_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1574F180)
#define DFBDCFIICED_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1574EA10)
#define DFBDCFIICED_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1574F160)
#define DFBDCFIICED_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1574E9F0)
#define DFBDCFIICED_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1574ECD0)
#define DFBDCFIICED__CTOR_OFFSET UNITYSDK_OFFSET(0x1574F110)

inline static constexpr unsigned int DFBDCFIICED_TypeDefinitionIndex = 15392;

class DFBDCFIICED : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::OBNCFHIKBNI DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::Il2CppArray<::LJAMCDMNBHP*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBDCFIICED__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBDCFIICED_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBDCFIICED_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBDCFIICED_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBDCFIICED_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DFBDCFIICED_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DFBDCFIICED_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBDCFIICED_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBDCFIICED_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBDCFIICED_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DFBDCFIICED_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::LJAMCDMNBHP* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::LJAMCDMNBHP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DFBDCFIICED_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
