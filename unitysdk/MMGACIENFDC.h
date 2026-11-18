#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPCCJNCPPDO.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class INCAMCBLBNJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define MMGACIENFDC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17FCAB50)
#define MMGACIENFDC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17FCA8D0)
#define MMGACIENFDC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17FCA8E0)
#define MMGACIENFDC_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x17FCB130)
#define MMGACIENFDC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17FCA9A0)
#define MMGACIENFDC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17FCAAD0)
#define MMGACIENFDC_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x17FCAF50)
#define MMGACIENFDC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17FCAC80)
#define MMGACIENFDC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17FCA530)
#define MMGACIENFDC_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17FCAF30)
#define MMGACIENFDC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17FCA510)
#define MMGACIENFDC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17FCA7F0)
#define MMGACIENFDC__CTOR_OFFSET UNITYSDK_OFFSET(0x17FCAC30)

inline static constexpr unsigned int MMGACIENFDC_TypeDefinitionIndex = 13297;

class MMGACIENFDC : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::CPCCJNCPPDO DHDJDGFNBOA; // 0x18
	::Il2CppArray<::INCAMCBLBNJ*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMGACIENFDC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MMGACIENFDC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMGACIENFDC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMGACIENFDC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMGACIENFDC_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MMGACIENFDC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MMGACIENFDC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMGACIENFDC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MMGACIENFDC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMGACIENFDC_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMGACIENFDC_CHLEALKAOJO_OFFSET))(this);
	}

	::INCAMCBLBNJ* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::INCAMCBLBNJ*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MMGACIENFDC_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Collections::Generic::IReadOnlyList_1<::INCAMCBLBNJ*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::INCAMCBLBNJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMGACIENFDC_EJABHIAHIAN_OFFSET))(this);
	}
};
