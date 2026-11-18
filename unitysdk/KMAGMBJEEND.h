#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFEPABBAJDE.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class IHGNKPMLMDE;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KMAGMBJEEND_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B50B1C0)
#define KMAGMBJEEND_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B50AF40)
#define KMAGMBJEEND_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B50AF50)
#define KMAGMBJEEND_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B50B010)
#define KMAGMBJEEND_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B50B140)
#define KMAGMBJEEND_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B50B5C0)
#define KMAGMBJEEND_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B50B310)
#define KMAGMBJEEND_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B50AB90)
#define KMAGMBJEEND_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B50B2F0)
#define KMAGMBJEEND_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B50AB70)
#define KMAGMBJEEND_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B50AE50)
#define KMAGMBJEEND__CTOR_OFFSET UNITYSDK_OFFSET(0x1B50B2A0)

inline static constexpr unsigned int KMAGMBJEEND_TypeDefinitionIndex = 11757;

class KMAGMBJEEND : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::Il2CppArray<::IHGNKPMLMDE*>* OJMBOGGMIKO; // 0x28
	::IFEPABBAJDE DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMAGMBJEEND__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KMAGMBJEEND_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMAGMBJEEND_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMAGMBJEEND_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMAGMBJEEND_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KMAGMBJEEND_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KMAGMBJEEND_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMAGMBJEEND_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMAGMBJEEND_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KMAGMBJEEND_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMAGMBJEEND_CHLEALKAOJO_OFFSET))(this);
	}

	::IHGNKPMLMDE* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::IHGNKPMLMDE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KMAGMBJEEND_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
