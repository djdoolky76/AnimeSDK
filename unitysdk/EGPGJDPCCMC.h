#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BPACOJBBGDP.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class CAIMLJJFDAD;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define EGPGJDPCCMC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17AA6640)
#define EGPGJDPCCMC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17AA6410)
#define EGPGJDPCCMC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17AA6580)
#define EGPGJDPCCMC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17AA6720)
#define EGPGJDPCCMC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17AA6420)
#define EGPGJDPCCMC_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17AA6A90)
#define EGPGJDPCCMC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17AA68A0)
#define EGPGJDPCCMC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17AA6070)
#define EGPGJDPCCMC_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17AA6A70)
#define EGPGJDPCCMC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17AA6050)
#define EGPGJDPCCMC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17AA6330)
#define EGPGJDPCCMC__CTOR_OFFSET UNITYSDK_OFFSET(0x17AA6850)

inline static constexpr unsigned int EGPGJDPCCMC_TypeDefinitionIndex = 11387;

class EGPGJDPCCMC : public ::System::Object
{
public:
	::Il2CppArray<::CAIMLJJFDAD*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::BPACOJBBGDP DHDJDGFNBOA; // 0x28
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGPGJDPCCMC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EGPGJDPCCMC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGPGJDPCCMC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EGPGJDPCCMC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + EGPGJDPCCMC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGPGJDPCCMC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGPGJDPCCMC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGPGJDPCCMC_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGPGJDPCCMC_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EGPGJDPCCMC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGPGJDPCCMC_NAMKJOJBAOA_OFFSET))(this);
	}

	::CAIMLJJFDAD* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::CAIMLJJFDAD*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EGPGJDPCCMC_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
