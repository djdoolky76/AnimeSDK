#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACOFMGDEHBG.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class BFEJEGADNAF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define OLDPMPNJNGK_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1AD8F5C0)
#define OLDPMPNJNGK_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1AD8F340)
#define OLDPMPNJNGK_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1AD8F350)
#define OLDPMPNJNGK_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1AD8F410)
#define OLDPMPNJNGK_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1AD8F540)
#define OLDPMPNJNGK_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1AD8F9C0)
#define OLDPMPNJNGK_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1AD8F6F0)
#define OLDPMPNJNGK_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1AD8EF90)
#define OLDPMPNJNGK_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1AD8F9A0)
#define OLDPMPNJNGK_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1AD8EF70)
#define OLDPMPNJNGK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1AD8F250)
#define OLDPMPNJNGK__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD8F6A0)

inline static constexpr unsigned int OLDPMPNJNGK_TypeDefinitionIndex = 16411;

class OLDPMPNJNGK : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::Il2CppArray<::BFEJEGADNAF*>* OJMBOGGMIKO; // 0x20
	::ACOFMGDEHBG DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLDPMPNJNGK__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OLDPMPNJNGK_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLDPMPNJNGK_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLDPMPNJNGK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLDPMPNJNGK_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OLDPMPNJNGK_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + OLDPMPNJNGK_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLDPMPNJNGK_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLDPMPNJNGK_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + OLDPMPNJNGK_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLDPMPNJNGK_NAMKJOJBAOA_OFFSET))(this);
	}

	::BFEJEGADNAF* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::BFEJEGADNAF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OLDPMPNJNGK_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
