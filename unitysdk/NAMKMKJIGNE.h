#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENPHNELNLOL.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class KONIHGAKPLI;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NAMKMKJIGNE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B321AE0)
#define NAMKMKJIGNE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B3218A0)
#define NAMKMKJIGNE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B321A20)
#define NAMKMKJIGNE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B321BC0)
#define NAMKMKJIGNE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B3218B0)
#define NAMKMKJIGNE_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B321D60)
#define NAMKMKJIGNE_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B321F90)
#define NAMKMKJIGNE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B3214F0)
#define NAMKMKJIGNE_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B321D40)
#define NAMKMKJIGNE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B3214D0)
#define NAMKMKJIGNE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B3217B0)
#define NAMKMKJIGNE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B321CF0)

inline static constexpr unsigned int NAMKMKJIGNE_TypeDefinitionIndex = 15139;

class NAMKMKJIGNE : public ::System::Object
{
public:
	::Il2CppArray<::KONIHGAKPLI*>* OJMBOGGMIKO; // 0x10
	::ENPHNELNLOL DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMKMKJIGNE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMKMKJIGNE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMKMKJIGNE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NAMKMKJIGNE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NAMKMKJIGNE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMKMKJIGNE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMKMKJIGNE_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMKMKJIGNE_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMKMKJIGNE_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMKMKJIGNE_CHLEALKAOJO_OFFSET))(this);
	}

	::KONIHGAKPLI* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::KONIHGAKPLI*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAMKMKJIGNE_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NAMKMKJIGNE_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
