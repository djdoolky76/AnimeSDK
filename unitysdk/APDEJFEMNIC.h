#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/NNFGCMLPBEJ.h"
#include "unitysdk/System/Object.h"

class GKABEFEELHL;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define APDEJFEMNIC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1ADAC2B0)
#define APDEJFEMNIC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1ADAC070)
#define APDEJFEMNIC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1ADAC1F0)
#define APDEJFEMNIC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1ADAC390)
#define APDEJFEMNIC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1ADAC080)
#define APDEJFEMNIC_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1ADAC510)
#define APDEJFEMNIC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1ADAC760)
#define APDEJFEMNIC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1ADABCC0)
#define APDEJFEMNIC_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1ADAC740)
#define APDEJFEMNIC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1ADABCA0)
#define APDEJFEMNIC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1ADABF80)
#define APDEJFEMNIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADAC4C0)

inline static constexpr unsigned int APDEJFEMNIC_TypeDefinitionIndex = 14544;

class APDEJFEMNIC : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::NNFGCMLPBEJ DHDJDGFNBOA; // 0x18
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::Il2CppArray<::GKABEFEELHL*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APDEJFEMNIC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + APDEJFEMNIC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APDEJFEMNIC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + APDEJFEMNIC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + APDEJFEMNIC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APDEJFEMNIC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APDEJFEMNIC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APDEJFEMNIC_FINALIZE_OFFSET))(this);
	}

	::GKABEFEELHL* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::GKABEFEELHL*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + APDEJFEMNIC_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + APDEJFEMNIC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APDEJFEMNIC_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APDEJFEMNIC_CHLEALKAOJO_OFFSET))(this);
	}
};
