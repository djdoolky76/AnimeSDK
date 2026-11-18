#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/PAPHADMAGFE.h"
#include "unitysdk/System/Object.h"

class IADKEEHGALJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define IEJMMIGOJOP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x16105510)
#define IEJMMIGOJOP_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x161052D0)
#define IEJMMIGOJOP_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x16105450)
#define IEJMMIGOJOP_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x16105940)
#define IEJMMIGOJOP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x161055F0)
#define IEJMMIGOJOP_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x161052E0)
#define IEJMMIGOJOP_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x16105A30)
#define IEJMMIGOJOP_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x16105770)
#define IEJMMIGOJOP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x16104F20)
#define IEJMMIGOJOP_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x16105A10)
#define IEJMMIGOJOP_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x16104F00)
#define IEJMMIGOJOP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x161051E0)
#define IEJMMIGOJOP__CTOR_OFFSET UNITYSDK_OFFSET(0x16105720)

inline static constexpr unsigned int IEJMMIGOJOP_TypeDefinitionIndex = 12979;

class IEJMMIGOJOP : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::PAPHADMAGFE DHDJDGFNBOA; // 0x28
	::Il2CppArray<::IADKEEHGALJ*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJMMIGOJOP__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJMMIGOJOP_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJMMIGOJOP_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IEJMMIGOJOP_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + IEJMMIGOJOP_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJMMIGOJOP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJMMIGOJOP_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJMMIGOJOP_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IEJMMIGOJOP_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Collections::Generic::IReadOnlyList_1<::IADKEEHGALJ*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::IADKEEHGALJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJMMIGOJOP_EJABHIAHIAN_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJMMIGOJOP_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJMMIGOJOP_CHLEALKAOJO_OFFSET))(this);
	}

	::IADKEEHGALJ* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::IADKEEHGALJ*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IEJMMIGOJOP_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}
};
