#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/PEJNJJEALPJ.h"
#include "unitysdk/System/Object.h"

class CEGODBPEOFG;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define AAKPOMENNOJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17EE31F0)
#define AAKPOMENNOJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17EE2FC0)
#define AAKPOMENNOJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17EE3130)
#define AAKPOMENNOJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17EE32D0)
#define AAKPOMENNOJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17EE2FD0)
#define AAKPOMENNOJ_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17EE3620)
#define AAKPOMENNOJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17EE3450)
#define AAKPOMENNOJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17EE2C20)
#define AAKPOMENNOJ_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17EE3850)
#define AAKPOMENNOJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17EE2C00)
#define AAKPOMENNOJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17EE2EE0)
#define AAKPOMENNOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17EE3400)

inline static constexpr unsigned int AAKPOMENNOJ_TypeDefinitionIndex = 13831;

class AAKPOMENNOJ : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::Il2CppArray<::CEGODBPEOFG*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::PEJNJJEALPJ DHDJDGFNBOA; // 0x28
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKPOMENNOJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKPOMENNOJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKPOMENNOJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + AAKPOMENNOJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + AAKPOMENNOJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKPOMENNOJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKPOMENNOJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKPOMENNOJ_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + AAKPOMENNOJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::CEGODBPEOFG* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::CEGODBPEOFG*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AAKPOMENNOJ_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKPOMENNOJ_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKPOMENNOJ_CHLEALKAOJO_OFFSET))(this);
	}
};
