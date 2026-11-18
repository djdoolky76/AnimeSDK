#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOHGLGMEOIN.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class OPJLNONBGDG;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define JLLDHEGPIPP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B7DCE50)
#define JLLDHEGPIPP_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B7DCC10)
#define JLLDHEGPIPP_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B7DCD90)
#define JLLDHEGPIPP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B7DCF30)
#define JLLDHEGPIPP_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B7DCC20)
#define JLLDHEGPIPP_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B7DD2A0)
#define JLLDHEGPIPP_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B7DD0B0)
#define JLLDHEGPIPP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B7DC860)
#define JLLDHEGPIPP_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B7DD280)
#define JLLDHEGPIPP_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B7DC840)
#define JLLDHEGPIPP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B7DCB20)
#define JLLDHEGPIPP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7DD060)

inline static constexpr unsigned int JLLDHEGPIPP_TypeDefinitionIndex = 15127;

class JLLDHEGPIPP : public ::System::Object
{
public:
	::DOHGLGMEOIN DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::Il2CppArray<::OPJLNONBGDG*>* OJMBOGGMIKO; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLLDHEGPIPP__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JLLDHEGPIPP_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLLDHEGPIPP_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JLLDHEGPIPP_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + JLLDHEGPIPP_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLLDHEGPIPP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLLDHEGPIPP_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLLDHEGPIPP_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + JLLDHEGPIPP_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLLDHEGPIPP_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLLDHEGPIPP_NAMKJOJBAOA_OFFSET))(this);
	}

	::OPJLNONBGDG* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::OPJLNONBGDG*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JLLDHEGPIPP_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
