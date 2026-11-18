#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DPLPCGOJNMJ.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class LMJNJNOECLF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define GFLCDAJCJLC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1932D980)
#define GFLCDAJCJLC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1932D700)
#define GFLCDAJCJLC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1932D710)
#define GFLCDAJCJLC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1932D7D0)
#define GFLCDAJCJLC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1932D900)
#define GFLCDAJCJLC_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1932DD60)
#define GFLCDAJCJLC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1932DAB0)
#define GFLCDAJCJLC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1932D350)
#define GFLCDAJCJLC_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1932DF90)
#define GFLCDAJCJLC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1932D330)
#define GFLCDAJCJLC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1932D610)
#define GFLCDAJCJLC__CTOR_OFFSET UNITYSDK_OFFSET(0x1932DA60)

inline static constexpr unsigned int GFLCDAJCJLC_TypeDefinitionIndex = 17001;

class GFLCDAJCJLC : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::DPLPCGOJNMJ DHDJDGFNBOA; // 0x18
	::Il2CppArray<::LMJNJNOECLF*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFLCDAJCJLC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GFLCDAJCJLC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFLCDAJCJLC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFLCDAJCJLC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFLCDAJCJLC_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GFLCDAJCJLC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + GFLCDAJCJLC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFLCDAJCJLC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFLCDAJCJLC_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GFLCDAJCJLC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::LMJNJNOECLF* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::LMJNJNOECLF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GFLCDAJCJLC_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFLCDAJCJLC_NAMKJOJBAOA_OFFSET))(this);
	}
};
