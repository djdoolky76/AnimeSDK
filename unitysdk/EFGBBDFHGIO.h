#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GNJOBELLNCO.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class AJNFBNFCFMN;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define EFGBBDFHGIO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1951C6C0)
#define EFGBBDFHGIO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1951C490)
#define EFGBBDFHGIO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1951C600)
#define EFGBBDFHGIO_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x1951CB20)
#define EFGBBDFHGIO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1951C7A0)
#define EFGBBDFHGIO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1951C4A0)
#define EFGBBDFHGIO_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x1951C920)
#define EFGBBDFHGIO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1951CBF0)
#define EFGBBDFHGIO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1951C0F0)
#define EFGBBDFHGIO_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1951CB00)
#define EFGBBDFHGIO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1951C0D0)
#define EFGBBDFHGIO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1951C3B0)
#define EFGBBDFHGIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1951C8D0)

inline static constexpr unsigned int EFGBBDFHGIO_TypeDefinitionIndex = 11358;

class EFGBBDFHGIO : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::GNJOBELLNCO DHDJDGFNBOA; // 0x20
	::Il2CppArray<::AJNFBNFCFMN*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFGBBDFHGIO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EFGBBDFHGIO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFGBBDFHGIO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EFGBBDFHGIO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + EFGBBDFHGIO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFGBBDFHGIO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFGBBDFHGIO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFGBBDFHGIO_FINALIZE_OFFSET))(this);
	}

	::AJNFBNFCFMN* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::AJNFBNFCFMN*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EFGBBDFHGIO_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFGBBDFHGIO_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::AJNFBNFCFMN*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::AJNFBNFCFMN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFGBBDFHGIO_EJABHIAHIAN_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFGBBDFHGIO_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EFGBBDFHGIO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
