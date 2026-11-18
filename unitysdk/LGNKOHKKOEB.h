#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/NMHEMEDPMDB.h"
#include "unitysdk/System/Object.h"

class ALIDOCNGNKL;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define LGNKOHKKOEB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x190FAE30)
#define LGNKOHKKOEB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x190FABF0)
#define LGNKOHKKOEB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x190FAD70)
#define LGNKOHKKOEB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x190FAF10)
#define LGNKOHKKOEB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x190FAC00)
#define LGNKOHKKOEB_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x190FB280)
#define LGNKOHKKOEB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x190FB0B0)
#define LGNKOHKKOEB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x190FA840)
#define LGNKOHKKOEB_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x190FB090)
#define LGNKOHKKOEB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x190FA820)
#define LGNKOHKKOEB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x190FAB00)
#define LGNKOHKKOEB__CTOR_OFFSET UNITYSDK_OFFSET(0x190FB040)

inline static constexpr unsigned int LGNKOHKKOEB_TypeDefinitionIndex = 9711;

class LGNKOHKKOEB : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::Il2CppArray<::ALIDOCNGNKL*>* OJMBOGGMIKO; // 0x20
	::NMHEMEDPMDB DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGNKOHKKOEB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LGNKOHKKOEB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGNKOHKKOEB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LGNKOHKKOEB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + LGNKOHKKOEB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGNKOHKKOEB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGNKOHKKOEB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGNKOHKKOEB_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGNKOHKKOEB_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGNKOHKKOEB_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LGNKOHKKOEB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::ALIDOCNGNKL* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::ALIDOCNGNKL*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LGNKOHKKOEB_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
