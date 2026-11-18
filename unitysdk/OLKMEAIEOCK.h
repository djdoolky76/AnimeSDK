#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DDACFIADCLL.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class JMBHIKKPGMB;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define OLKMEAIEOCK_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1C1A0B70)
#define OLKMEAIEOCK_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1C1A08F0)
#define OLKMEAIEOCK_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1C1A0900)
#define OLKMEAIEOCK_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C1A09C0)
#define OLKMEAIEOCK_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1C1A0AF0)
#define OLKMEAIEOCK_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1C1A0CA0)
#define OLKMEAIEOCK_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1C1A0EF0)
#define OLKMEAIEOCK_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1C1A0540)
#define OLKMEAIEOCK_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1C1A0ED0)
#define OLKMEAIEOCK_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1C1A0520)
#define OLKMEAIEOCK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C1A0800)
#define OLKMEAIEOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1A0C50)

inline static constexpr unsigned int OLKMEAIEOCK_TypeDefinitionIndex = 12273;

class OLKMEAIEOCK : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::DDACFIADCLL DHDJDGFNBOA; // 0x20
	::System::Action* PLDOELOOFLL; // 0x38
	::Il2CppArray<::JMBHIKKPGMB*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLKMEAIEOCK__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OLKMEAIEOCK_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLKMEAIEOCK_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLKMEAIEOCK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLKMEAIEOCK_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OLKMEAIEOCK_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + OLKMEAIEOCK_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLKMEAIEOCK_BHLAEBMEOLO_OFFSET))(this);
	}

	::JMBHIKKPGMB* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::JMBHIKKPGMB*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OLKMEAIEOCK_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLKMEAIEOCK_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + OLKMEAIEOCK_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLKMEAIEOCK_NAMKJOJBAOA_OFFSET))(this);
	}
};
