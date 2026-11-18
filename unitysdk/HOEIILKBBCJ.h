#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJIACFJENMA.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class NFEIINEGJKC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HOEIILKBBCJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B882290)
#define HOEIILKBBCJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B882060)
#define HOEIILKBBCJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B8821D0)
#define HOEIILKBBCJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B882370)
#define HOEIILKBBCJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B882070)
#define HOEIILKBBCJ_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B8824F0)
#define HOEIILKBBCJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B882740)
#define HOEIILKBBCJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B881CC0)
#define HOEIILKBBCJ_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B882720)
#define HOEIILKBBCJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B881CA0)
#define HOEIILKBBCJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B881F80)
#define HOEIILKBBCJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8824A0)

inline static constexpr unsigned int HOEIILKBBCJ_TypeDefinitionIndex = 15103;

class HOEIILKBBCJ : public ::System::Object
{
public:
	::IJIACFJENMA DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::Il2CppArray<::NFEIINEGJKC*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOEIILKBBCJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOEIILKBBCJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOEIILKBBCJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HOEIILKBBCJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HOEIILKBBCJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOEIILKBBCJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOEIILKBBCJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOEIILKBBCJ_FINALIZE_OFFSET))(this);
	}

	::NFEIINEGJKC* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::NFEIINEGJKC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOEIILKBBCJ_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HOEIILKBBCJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOEIILKBBCJ_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOEIILKBBCJ_CHLEALKAOJO_OFFSET))(this);
	}
};
