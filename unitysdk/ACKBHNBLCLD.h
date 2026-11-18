#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GBJPEGEHEKB.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class GJNICJDFAMN;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ACKBHNBLCLD_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A15B570)
#define ACKBHNBLCLD_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A15B340)
#define ACKBHNBLCLD_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A15B4B0)
#define ACKBHNBLCLD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A15B650)
#define ACKBHNBLCLD_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A15B350)
#define ACKBHNBLCLD_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1A15B9C0)
#define ACKBHNBLCLD_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A15B7F0)
#define ACKBHNBLCLD_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A15AFA0)
#define ACKBHNBLCLD_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A15B7D0)
#define ACKBHNBLCLD_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A15AF80)
#define ACKBHNBLCLD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A15B260)
#define ACKBHNBLCLD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A15B780)

inline static constexpr unsigned int ACKBHNBLCLD_TypeDefinitionIndex = 16009;

class ACKBHNBLCLD : public ::System::Object
{
public:
	::GBJPEGEHEKB DHDJDGFNBOA; // 0x10
	::Il2CppArray<::GJNICJDFAMN*>* OJMBOGGMIKO; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::HashSet_1<::System::UInt64>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACKBHNBLCLD__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACKBHNBLCLD_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACKBHNBLCLD_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ACKBHNBLCLD_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + ACKBHNBLCLD_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACKBHNBLCLD_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACKBHNBLCLD_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACKBHNBLCLD_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACKBHNBLCLD_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACKBHNBLCLD_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ACKBHNBLCLD_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::GJNICJDFAMN* IFDPKDOFOJD(::System::UInt64 MGMDLMBEDJF)
	{
		return ((::GJNICJDFAMN*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + ACKBHNBLCLD_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
