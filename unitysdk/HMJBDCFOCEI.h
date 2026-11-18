#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DFPIAHGJKHN.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class EBAEEGPIEOP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HMJBDCFOCEI_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B126420)
#define HMJBDCFOCEI_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B1261F0)
#define HMJBDCFOCEI_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B126360)
#define HMJBDCFOCEI_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B126500)
#define HMJBDCFOCEI_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B126200)
#define HMJBDCFOCEI_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B126870)
#define HMJBDCFOCEI_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B126680)
#define HMJBDCFOCEI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B125E50)
#define HMJBDCFOCEI_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B126850)
#define HMJBDCFOCEI_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B125E30)
#define HMJBDCFOCEI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B126110)
#define HMJBDCFOCEI__CTOR_OFFSET UNITYSDK_OFFSET(0x1B126630)

inline static constexpr unsigned int HMJBDCFOCEI_TypeDefinitionIndex = 12865;

class HMJBDCFOCEI : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::Il2CppArray<::EBAEEGPIEOP*>* OJMBOGGMIKO; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::DFPIAHGJKHN DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMJBDCFOCEI__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HMJBDCFOCEI_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMJBDCFOCEI_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HMJBDCFOCEI_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HMJBDCFOCEI_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMJBDCFOCEI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMJBDCFOCEI_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMJBDCFOCEI_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMJBDCFOCEI_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HMJBDCFOCEI_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMJBDCFOCEI_NAMKJOJBAOA_OFFSET))(this);
	}

	::EBAEEGPIEOP* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::EBAEEGPIEOP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HMJBDCFOCEI_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
