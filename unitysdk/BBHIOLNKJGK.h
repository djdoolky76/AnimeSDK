#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/OLMGFEHOFCE.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class FDMCGHFGPGE;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BBHIOLNKJGK_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A577C30)
#define BBHIOLNKJGK_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A5779F0)
#define BBHIOLNKJGK_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A577B70)
#define BBHIOLNKJGK_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A577D10)
#define BBHIOLNKJGK_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A577A00)
#define BBHIOLNKJGK_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1A577E90)
#define BBHIOLNKJGK_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A5782C0)
#define BBHIOLNKJGK_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A577670)
#define BBHIOLNKJGK_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A5782A0)
#define BBHIOLNKJGK_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A577650)
#define BBHIOLNKJGK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A577900)
#define BBHIOLNKJGK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A577E40)

inline static constexpr unsigned int BBHIOLNKJGK_TypeDefinitionIndex = 16167;

class BBHIOLNKJGK : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* LHINHLCKHNE; // 0x10
	::Il2CppArray<::FDMCGHFGPGE*>* OJMBOGGMIKO; // 0x18
	::OLMGFEHOFCE DHDJDGFNBOA; // 0x20
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHIOLNKJGK__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHIOLNKJGK_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHIOLNKJGK_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BBHIOLNKJGK_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + BBHIOLNKJGK_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHIOLNKJGK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHIOLNKJGK_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHIOLNKJGK_FINALIZE_OFFSET))(this);
	}

	::FDMCGHFGPGE* IFDPKDOFOJD(::System::Int32 EBCCPPJHLND, ::System::Int32 HFKIDEMMMBN)
	{
		return ((::FDMCGHFGPGE*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BBHIOLNKJGK_IFDPKDOFOJD_OFFSET))(this, EBCCPPJHLND, HFKIDEMMMBN);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BBHIOLNKJGK_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHIOLNKJGK_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHIOLNKJGK_CHLEALKAOJO_OFFSET))(this);
	}
};
