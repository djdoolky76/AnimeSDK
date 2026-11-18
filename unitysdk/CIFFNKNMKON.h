#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CFIGBOLNIKE.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class BEOJGAHPMDJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CIFFNKNMKON_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19ACD8D0)
#define CIFFNKNMKON_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19ACD690)
#define CIFFNKNMKON_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19ACD810)
#define CIFFNKNMKON_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x19ACDF00)
#define CIFFNKNMKON_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19ACD9B0)
#define CIFFNKNMKON_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19ACD6A0)
#define CIFFNKNMKON_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x19ACDD00)
#define CIFFNKNMKON_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19ACDB30)
#define CIFFNKNMKON_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19ACD2E0)
#define CIFFNKNMKON_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19ACDEE0)
#define CIFFNKNMKON_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19ACD2C0)
#define CIFFNKNMKON_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19ACD5A0)
#define CIFFNKNMKON__CTOR_OFFSET UNITYSDK_OFFSET(0x19ACDAE0)

inline static constexpr unsigned int CIFFNKNMKON_TypeDefinitionIndex = 13722;

class CIFFNKNMKON : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::CFIGBOLNIKE DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::Il2CppArray<::BEOJGAHPMDJ*>* OJMBOGGMIKO; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFFNKNMKON__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFFNKNMKON_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFFNKNMKON_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CIFFNKNMKON_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + CIFFNKNMKON_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFFNKNMKON_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFFNKNMKON_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFFNKNMKON_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CIFFNKNMKON_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::BEOJGAHPMDJ* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::BEOJGAHPMDJ*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CIFFNKNMKON_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFFNKNMKON_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFFNKNMKON_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::BEOJGAHPMDJ*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::BEOJGAHPMDJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFFNKNMKON_EJABHIAHIAN_OFFSET))(this);
	}
};
