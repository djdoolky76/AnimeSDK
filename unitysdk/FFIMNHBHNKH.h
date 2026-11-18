#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/NNHCFJJEBLG.h"
#include "unitysdk/System/Object.h"

class PAGHLNGAFPM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FFIMNHBHNKH_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B9C2750)
#define FFIMNHBHNKH_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B9C2520)
#define FFIMNHBHNKH_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B9C2690)
#define FFIMNHBHNKH_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B9C2830)
#define FFIMNHBHNKH_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B9C2530)
#define FFIMNHBHNKH_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B9C29B0)
#define FFIMNHBHNKH_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B9C2C00)
#define FFIMNHBHNKH_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B9C2180)
#define FFIMNHBHNKH_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B9C2BE0)
#define FFIMNHBHNKH_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B9C2160)
#define FFIMNHBHNKH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B9C2440)
#define FFIMNHBHNKH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9C2960)

inline static constexpr unsigned int FFIMNHBHNKH_TypeDefinitionIndex = 10962;

class FFIMNHBHNKH : public ::System::Object
{
public:
	::Il2CppArray<::PAGHLNGAFPM*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::NNHCFJJEBLG DHDJDGFNBOA; // 0x20
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFIMNHBHNKH__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FFIMNHBHNKH_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFIMNHBHNKH_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FFIMNHBHNKH_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + FFIMNHBHNKH_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFIMNHBHNKH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFIMNHBHNKH_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFIMNHBHNKH_FINALIZE_OFFSET))(this);
	}

	::PAGHLNGAFPM* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::PAGHLNGAFPM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FFIMNHBHNKH_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFIMNHBHNKH_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFIMNHBHNKH_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FFIMNHBHNKH_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
