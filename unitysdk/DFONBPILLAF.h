#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GADPCOCDCDL.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class EPEFHFCJIJN;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define DFONBPILLAF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1950AF50)
#define DFONBPILLAF_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1950AD10)
#define DFONBPILLAF_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1950AE90)
#define DFONBPILLAF_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x1950B3A0)
#define DFONBPILLAF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1950B030)
#define DFONBPILLAF_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1950AD20)
#define DFONBPILLAF_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x1950B470)
#define DFONBPILLAF_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1950B1D0)
#define DFONBPILLAF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1950A960)
#define DFONBPILLAF_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1950B1B0)
#define DFONBPILLAF_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1950A940)
#define DFONBPILLAF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1950AC20)
#define DFONBPILLAF__CTOR_OFFSET UNITYSDK_OFFSET(0x1950B160)

inline static constexpr unsigned int DFONBPILLAF_TypeDefinitionIndex = 10328;

class DFONBPILLAF : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::GADPCOCDCDL DHDJDGFNBOA; // 0x20
	::Il2CppArray<::EPEFHFCJIJN*>* OJMBOGGMIKO; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFONBPILLAF__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFONBPILLAF_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFONBPILLAF_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DFONBPILLAF_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DFONBPILLAF_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFONBPILLAF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFONBPILLAF_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFONBPILLAF_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFONBPILLAF_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFONBPILLAF_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DFONBPILLAF_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Collections::Generic::IReadOnlyList_1<::EPEFHFCJIJN*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::EPEFHFCJIJN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFONBPILLAF_EJABHIAHIAN_OFFSET))(this);
	}

	::EPEFHFCJIJN* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::EPEFHFCJIJN*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DFONBPILLAF_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}
};
