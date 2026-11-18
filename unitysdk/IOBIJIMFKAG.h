#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EOGIABENICP.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class HIHFLCENJHL;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define IOBIJIMFKAG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19544B30)
#define IOBIJIMFKAG_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x195448F0)
#define IOBIJIMFKAG_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19544A70)
#define IOBIJIMFKAG_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x19544D50)
#define IOBIJIMFKAG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19544C10)
#define IOBIJIMFKAG_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19544900)
#define IOBIJIMFKAG_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x19544E40)
#define IOBIJIMFKAG_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19545020)
#define IOBIJIMFKAG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19544540)
#define IOBIJIMFKAG_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19544E20)
#define IOBIJIMFKAG_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19544520)
#define IOBIJIMFKAG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19544800)
#define IOBIJIMFKAG__CTOR_OFFSET UNITYSDK_OFFSET(0x19544D40)

inline static constexpr unsigned int IOBIJIMFKAG_TypeDefinitionIndex = 11186;

class IOBIJIMFKAG : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::EOGIABENICP DHDJDGFNBOA; // 0x18
	::Il2CppArray<::HIHFLCENJHL*>* OJMBOGGMIKO; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOBIJIMFKAG__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IOBIJIMFKAG_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOBIJIMFKAG_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IOBIJIMFKAG_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + IOBIJIMFKAG_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOBIJIMFKAG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOBIJIMFKAG_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOBIJIMFKAG_FINALIZE_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::HIHFLCENJHL*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::HIHFLCENJHL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOBIJIMFKAG_EJABHIAHIAN_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IOBIJIMFKAG_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOBIJIMFKAG_NAMKJOJBAOA_OFFSET))(this);
	}

	::HIHFLCENJHL* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::HIHFLCENJHL*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IOBIJIMFKAG_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOBIJIMFKAG_CHLEALKAOJO_OFFSET))(this);
	}
};
