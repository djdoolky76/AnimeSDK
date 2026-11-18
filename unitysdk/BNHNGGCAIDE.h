#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/OKCNKOCHAIP.h"
#include "unitysdk/System/Object.h"

class KJIEFIKLMKN;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BNHNGGCAIDE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1877E0F0)
#define BNHNGGCAIDE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1877DE70)
#define BNHNGGCAIDE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1877DE80)
#define BNHNGGCAIDE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1877DF40)
#define BNHNGGCAIDE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1877E070)
#define BNHNGGCAIDE_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1877E4F0)
#define BNHNGGCAIDE_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1877E240)
#define BNHNGGCAIDE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1877DAC0)
#define BNHNGGCAIDE_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1877E220)
#define BNHNGGCAIDE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1877DAA0)
#define BNHNGGCAIDE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1877DD80)
#define BNHNGGCAIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1877E1D0)

inline static constexpr unsigned int BNHNGGCAIDE_TypeDefinitionIndex = 13769;

class BNHNGGCAIDE : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::OKCNKOCHAIP DHDJDGFNBOA; // 0x20
	::Il2CppArray<::KJIEFIKLMKN*>* OJMBOGGMIKO; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNHNGGCAIDE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BNHNGGCAIDE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNHNGGCAIDE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNHNGGCAIDE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNHNGGCAIDE_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BNHNGGCAIDE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + BNHNGGCAIDE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNHNGGCAIDE_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNHNGGCAIDE_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BNHNGGCAIDE_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNHNGGCAIDE_CHLEALKAOJO_OFFSET))(this);
	}

	::KJIEFIKLMKN* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::KJIEFIKLMKN*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BNHNGGCAIDE_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
