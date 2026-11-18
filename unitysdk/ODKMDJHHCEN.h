#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JFJNAOMCHOM.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class KCPEDLEBJMH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ODKMDJHHCEN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1C09D750)
#define ODKMDJHHCEN_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1C09D510)
#define ODKMDJHHCEN_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1C09D690)
#define ODKMDJHHCEN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C09D830)
#define ODKMDJHHCEN_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1C09D520)
#define ODKMDJHHCEN_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1C09DBA0)
#define ODKMDJHHCEN_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1C09D9B0)
#define ODKMDJHHCEN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1C09D160)
#define ODKMDJHHCEN_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1C09DB80)
#define ODKMDJHHCEN_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1C09D140)
#define ODKMDJHHCEN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C09D420)
#define ODKMDJHHCEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1C09D960)

inline static constexpr unsigned int ODKMDJHHCEN_TypeDefinitionIndex = 15769;

class ODKMDJHHCEN : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::Il2CppArray<::KCPEDLEBJMH*>* OJMBOGGMIKO; // 0x18
	::JFJNAOMCHOM DHDJDGFNBOA; // 0x20
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKMDJHHCEN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKMDJHHCEN_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKMDJHHCEN_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ODKMDJHHCEN_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + ODKMDJHHCEN_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKMDJHHCEN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKMDJHHCEN_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKMDJHHCEN_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ODKMDJHHCEN_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKMDJHHCEN_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKMDJHHCEN_CHLEALKAOJO_OFFSET))(this);
	}

	::KCPEDLEBJMH* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::KCPEDLEBJMH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ODKMDJHHCEN_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
