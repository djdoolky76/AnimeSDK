#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IKFLFLCMIFA.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class PFABOPOMDAD;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PBIEGCMENPF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1EDBCE90)
#define PBIEGCMENPF_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1EDBCC50)
#define PBIEGCMENPF_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1EDBCDD0)
#define PBIEGCMENPF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1EDBCF70)
#define PBIEGCMENPF_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1EDBCC60)
#define PBIEGCMENPF_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1EDBD2C0)
#define PBIEGCMENPF_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1EDBD0F0)
#define PBIEGCMENPF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1EDBC8A0)
#define PBIEGCMENPF_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1EDBD4F0)
#define PBIEGCMENPF_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1EDBC880)
#define PBIEGCMENPF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1EDBCB60)
#define PBIEGCMENPF__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDBD0A0)

inline static constexpr unsigned int PBIEGCMENPF_TypeDefinitionIndex = 10474;

class PBIEGCMENPF : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::IKFLFLCMIFA DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::Il2CppArray<::PFABOPOMDAD*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIEGCMENPF__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIEGCMENPF_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIEGCMENPF_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PBIEGCMENPF_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + PBIEGCMENPF_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIEGCMENPF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIEGCMENPF_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIEGCMENPF_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + PBIEGCMENPF_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIEGCMENPF_CHLEALKAOJO_OFFSET))(this);
	}

	::PFABOPOMDAD* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::PFABOPOMDAD*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PBIEGCMENPF_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIEGCMENPF_NAMKJOJBAOA_OFFSET))(this);
	}
};
