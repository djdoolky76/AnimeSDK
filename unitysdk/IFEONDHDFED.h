#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/KJDJEOPKBMN.h"
#include "unitysdk/System/Object.h"

class HLIIBGCNCEJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define IFEONDHDFED_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B623930)
#define IFEONDHDFED_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B623700)
#define IFEONDHDFED_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B623870)
#define IFEONDHDFED_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B623A10)
#define IFEONDHDFED_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B623710)
#define IFEONDHDFED_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B623B90)
#define IFEONDHDFED_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B623DE0)
#define IFEONDHDFED_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B623360)
#define IFEONDHDFED_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B623DC0)
#define IFEONDHDFED_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B623340)
#define IFEONDHDFED_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B623620)
#define IFEONDHDFED__CTOR_OFFSET UNITYSDK_OFFSET(0x1B623B40)

inline static constexpr unsigned int IFEONDHDFED_TypeDefinitionIndex = 14491;

class IFEONDHDFED : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::Il2CppArray<::HLIIBGCNCEJ*>* OJMBOGGMIKO; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::KJDJEOPKBMN DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEONDHDFED__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEONDHDFED_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEONDHDFED_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IFEONDHDFED_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + IFEONDHDFED_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEONDHDFED_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEONDHDFED_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEONDHDFED_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEONDHDFED_CHLEALKAOJO_OFFSET))(this);
	}

	::HLIIBGCNCEJ* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::HLIIBGCNCEJ*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFEONDHDFED_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEONDHDFED_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IFEONDHDFED_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
