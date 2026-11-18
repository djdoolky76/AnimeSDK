#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CDCEEGKDINL.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class MBJLOCGLPNP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define AFLMNMEFGOI_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17746B20)
#define AFLMNMEFGOI_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x177468E0)
#define AFLMNMEFGOI_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17746A60)
#define AFLMNMEFGOI_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17746C00)
#define AFLMNMEFGOI_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x177468F0)
#define AFLMNMEFGOI_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17746F70)
#define AFLMNMEFGOI_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17746DA0)
#define AFLMNMEFGOI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17746530)
#define AFLMNMEFGOI_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17746D80)
#define AFLMNMEFGOI_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17746510)
#define AFLMNMEFGOI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x177467F0)
#define AFLMNMEFGOI__CTOR_OFFSET UNITYSDK_OFFSET(0x17746D30)

inline static constexpr unsigned int AFLMNMEFGOI_TypeDefinitionIndex = 17664;

class AFLMNMEFGOI : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::CDCEEGKDINL DHDJDGFNBOA; // 0x18
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::Il2CppArray<::MBJLOCGLPNP*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLMNMEFGOI__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLMNMEFGOI_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLMNMEFGOI_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + AFLMNMEFGOI_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + AFLMNMEFGOI_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLMNMEFGOI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLMNMEFGOI_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLMNMEFGOI_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLMNMEFGOI_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLMNMEFGOI_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + AFLMNMEFGOI_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::MBJLOCGLPNP* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::MBJLOCGLPNP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AFLMNMEFGOI_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
