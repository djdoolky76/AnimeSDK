#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKBNLMAOOAD.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class LOENBLCNKPA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NFJNCGLAIMI_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17351830)
#define NFJNCGLAIMI_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x173515B0)
#define NFJNCGLAIMI_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x173515C0)
#define NFJNCGLAIMI_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17351680)
#define NFJNCGLAIMI_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x173517B0)
#define NFJNCGLAIMI_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17351C30)
#define NFJNCGLAIMI_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17351980)
#define NFJNCGLAIMI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17351210)
#define NFJNCGLAIMI_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17351960)
#define NFJNCGLAIMI_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x173511F0)
#define NFJNCGLAIMI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x173514D0)
#define NFJNCGLAIMI__CTOR_OFFSET UNITYSDK_OFFSET(0x17351910)

inline static constexpr unsigned int NFJNCGLAIMI_TypeDefinitionIndex = 9447;

class NFJNCGLAIMI : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::AKBNLMAOOAD DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::Il2CppArray<::LOENBLCNKPA*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFJNCGLAIMI__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFJNCGLAIMI_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFJNCGLAIMI_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFJNCGLAIMI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFJNCGLAIMI_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NFJNCGLAIMI_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NFJNCGLAIMI_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFJNCGLAIMI_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFJNCGLAIMI_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NFJNCGLAIMI_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFJNCGLAIMI_CHLEALKAOJO_OFFSET))(this);
	}

	::LOENBLCNKPA* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::LOENBLCNKPA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NFJNCGLAIMI_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
