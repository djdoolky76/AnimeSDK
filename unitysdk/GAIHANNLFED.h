#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHEHAFFEFMA.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class NMCAHIECACN;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define GAIHANNLFED_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B869140)
#define GAIHANNLFED_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B868F10)
#define GAIHANNLFED_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B869080)
#define GAIHANNLFED_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B869220)
#define GAIHANNLFED_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B868F20)
#define GAIHANNLFED_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B869590)
#define GAIHANNLFED_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B8693A0)
#define GAIHANNLFED_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B868B70)
#define GAIHANNLFED_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B869570)
#define GAIHANNLFED_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B868B50)
#define GAIHANNLFED_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B868E30)
#define GAIHANNLFED__CTOR_OFFSET UNITYSDK_OFFSET(0x1B869350)

inline static constexpr unsigned int GAIHANNLFED_TypeDefinitionIndex = 11657;

class GAIHANNLFED : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::Il2CppArray<::NMCAHIECACN*>* OJMBOGGMIKO; // 0x28
	::BHEHAFFEFMA DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAIHANNLFED__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GAIHANNLFED_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAIHANNLFED_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GAIHANNLFED_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + GAIHANNLFED_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAIHANNLFED_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAIHANNLFED_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAIHANNLFED_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GAIHANNLFED_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAIHANNLFED_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAIHANNLFED_CHLEALKAOJO_OFFSET))(this);
	}

	::NMCAHIECACN* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::NMCAHIECACN*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GAIHANNLFED_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
