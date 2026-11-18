#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOMLBEPJKFN.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class PKOGEOBCDDO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CFHEIJHEIJP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1573D5B0)
#define CFHEIJHEIJP_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1573D330)
#define CFHEIJHEIJP_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1573D340)
#define CFHEIJHEIJP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1573D400)
#define CFHEIJHEIJP_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1573D530)
#define CFHEIJHEIJP_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1573D980)
#define CFHEIJHEIJP_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1573D700)
#define CFHEIJHEIJP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1573CFB0)
#define CFHEIJHEIJP_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1573D6E0)
#define CFHEIJHEIJP_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1573CF90)
#define CFHEIJHEIJP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1573D240)
#define CFHEIJHEIJP__CTOR_OFFSET UNITYSDK_OFFSET(0x1573D690)

inline static constexpr unsigned int CFHEIJHEIJP_TypeDefinitionIndex = 9665;

class CFHEIJHEIJP : public ::System::Object
{
public:
	::Il2CppArray<::PKOGEOBCDDO*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* LHINHLCKHNE; // 0x18
	::DOMLBEPJKFN DHDJDGFNBOA; // 0x20
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFHEIJHEIJP__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFHEIJHEIJP_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFHEIJHEIJP_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFHEIJHEIJP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFHEIJHEIJP_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CFHEIJHEIJP_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + CFHEIJHEIJP_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFHEIJHEIJP_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFHEIJHEIJP_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFHEIJHEIJP_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CFHEIJHEIJP_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::PKOGEOBCDDO* IFDPKDOFOJD(::System::Int32 JHIGPMJNKGD, ::System::Int32 GJOKHCLJFML)
	{
		return ((::PKOGEOBCDDO*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CFHEIJHEIJP_IFDPKDOFOJD_OFFSET))(this, JHIGPMJNKGD, GJOKHCLJFML);
	}
};
