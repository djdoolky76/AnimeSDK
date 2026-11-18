#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/LCELCMABIHL.h"
#include "unitysdk/System/Object.h"

class LCONPHCBECE;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BAKICGHOFPE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A5268A0)
#define BAKICGHOFPE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A526660)
#define BAKICGHOFPE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A5267E0)
#define BAKICGHOFPE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A526980)
#define BAKICGHOFPE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A526670)
#define BAKICGHOFPE_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1A526B00)
#define BAKICGHOFPE_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A526D50)
#define BAKICGHOFPE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A5262B0)
#define BAKICGHOFPE_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A526D30)
#define BAKICGHOFPE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A526290)
#define BAKICGHOFPE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A526570)
#define BAKICGHOFPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A526AB0)

inline static constexpr unsigned int BAKICGHOFPE_TypeDefinitionIndex = 14088;

class BAKICGHOFPE : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::LCELCMABIHL DHDJDGFNBOA; // 0x18
	::Il2CppArray<::LCONPHCBECE*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKICGHOFPE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKICGHOFPE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKICGHOFPE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BAKICGHOFPE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + BAKICGHOFPE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKICGHOFPE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKICGHOFPE_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKICGHOFPE_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKICGHOFPE_CHLEALKAOJO_OFFSET))(this);
	}

	::LCONPHCBECE* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::LCONPHCBECE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BAKICGHOFPE_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BAKICGHOFPE_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKICGHOFPE_NAMKJOJBAOA_OFFSET))(this);
	}
};
