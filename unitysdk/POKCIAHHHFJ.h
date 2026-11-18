#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGJFMFAKCHD.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class JLPJAHLEOOF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define POKCIAHHHFJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1D008F20)
#define POKCIAHHHFJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1D008CA0)
#define POKCIAHHHFJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1D008CB0)
#define POKCIAHHHFJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D008D70)
#define POKCIAHHHFJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1D008EA0)
#define POKCIAHHHFJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1D009050)
#define POKCIAHHHFJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1D008900)
#define POKCIAHHHFJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1D0088E0)
#define POKCIAHHHFJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1D008BC0)
#define POKCIAHHHFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1D009000)

inline static constexpr unsigned int POKCIAHHHFJ_TypeDefinitionIndex = 11265;

class POKCIAHHHFJ : public ::System::Object
{
public:
	::Il2CppArray<::JLPJAHLEOOF*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::DGJFMFAKCHD DHDJDGFNBOA; // 0x28
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POKCIAHHHFJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POKCIAHHHFJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POKCIAHHHFJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POKCIAHHHFJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POKCIAHHHFJ_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + POKCIAHHHFJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + POKCIAHHHFJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POKCIAHHHFJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POKCIAHHHFJ_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + POKCIAHHHFJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
