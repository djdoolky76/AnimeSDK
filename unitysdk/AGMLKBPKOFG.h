#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJJPFKGFKFP.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class LCECBEOBIIN;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define AGMLKBPKOFG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1ADA6390)
#define AGMLKBPKOFG_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1ADA6110)
#define AGMLKBPKOFG_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1ADA6120)
#define AGMLKBPKOFG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1ADA61E0)
#define AGMLKBPKOFG_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1ADA6310)
#define AGMLKBPKOFG_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1ADA64C0)
#define AGMLKBPKOFG_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1ADA6930)
#define AGMLKBPKOFG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1ADA5D90)
#define AGMLKBPKOFG_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1ADA6910)
#define AGMLKBPKOFG_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1ADA5D70)
#define AGMLKBPKOFG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1ADA6020)
#define AGMLKBPKOFG__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADA6470)

inline static constexpr unsigned int AGMLKBPKOFG_TypeDefinitionIndex = 10446;

class AGMLKBPKOFG : public ::System::Object
{
public:
	::IJJPFKGFKFP DHDJDGFNBOA; // 0x10
	::Il2CppArray<::LCECBEOBIIN*>* OJMBOGGMIKO; // 0x28
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* FLBOKGKPECD; // 0x38
	::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGMLKBPKOFG__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGMLKBPKOFG_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGMLKBPKOFG_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGMLKBPKOFG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGMLKBPKOFG_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + AGMLKBPKOFG_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + AGMLKBPKOFG_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGMLKBPKOFG_BHLAEBMEOLO_OFFSET))(this);
	}

	::LCECBEOBIIN* IFDPKDOFOJD(::System::Int32 LEHABHCOMGH, ::System::Int32 HCKDKJHAOMF)
	{
		return ((::LCECBEOBIIN*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AGMLKBPKOFG_IFDPKDOFOJD_OFFSET))(this, LEHABHCOMGH, HCKDKJHAOMF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGMLKBPKOFG_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + AGMLKBPKOFG_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGMLKBPKOFG_CHLEALKAOJO_OFFSET))(this);
	}
};
