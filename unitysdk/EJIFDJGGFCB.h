#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKANAPJBJEF.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class BPCLBPCNJCM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define EJIFDJGGFCB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17AA7B10)
#define EJIFDJGGFCB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17AA78E0)
#define EJIFDJGGFCB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17AA7A50)
#define EJIFDJGGFCB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17AA7BF0)
#define EJIFDJGGFCB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17AA78F0)
#define EJIFDJGGFCB_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17AA7D90)
#define EJIFDJGGFCB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17AA7FC0)
#define EJIFDJGGFCB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17AA7540)
#define EJIFDJGGFCB_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17AA7D70)
#define EJIFDJGGFCB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17AA7520)
#define EJIFDJGGFCB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17AA7800)
#define EJIFDJGGFCB__CTOR_OFFSET UNITYSDK_OFFSET(0x17AA7D20)

inline static constexpr unsigned int EJIFDJGGFCB_TypeDefinitionIndex = 12770;

class EJIFDJGGFCB : public ::System::Object
{
public:
	::BKANAPJBJEF DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::System::Action* PLDOELOOFLL; // 0x30
	::Il2CppArray<::BPCLBPCNJCM*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJIFDJGGFCB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJIFDJGGFCB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJIFDJGGFCB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EJIFDJGGFCB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + EJIFDJGGFCB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJIFDJGGFCB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJIFDJGGFCB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJIFDJGGFCB_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJIFDJGGFCB_NAMKJOJBAOA_OFFSET))(this);
	}

	::BPCLBPCNJCM* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::BPCLBPCNJCM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EJIFDJGGFCB_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJIFDJGGFCB_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EJIFDJGGFCB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
