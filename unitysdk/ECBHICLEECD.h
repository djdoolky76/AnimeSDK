#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/NPPBDOFEBHE.h"
#include "unitysdk/System/Object.h"

class HBPFIALGHOL;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define ECBHICLEECD_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x15763C90)
#define ECBHICLEECD_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x15763A10)
#define ECBHICLEECD_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x15763A20)
#define ECBHICLEECD_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x15764270)
#define ECBHICLEECD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x15763AE0)
#define ECBHICLEECD_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x15763C10)
#define ECBHICLEECD_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x15763DC0)
#define ECBHICLEECD_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x15763FC0)
#define ECBHICLEECD_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x15763670)
#define ECBHICLEECD_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x15763FA0)
#define ECBHICLEECD_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x15763650)
#define ECBHICLEECD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x15763930)
#define ECBHICLEECD__CTOR_OFFSET UNITYSDK_OFFSET(0x15763D70)

inline static constexpr unsigned int ECBHICLEECD_TypeDefinitionIndex = 13872;

class ECBHICLEECD : public ::System::Object
{
public:
	::NPPBDOFEBHE DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::Il2CppArray<::HBPFIALGHOL*>* OJMBOGGMIKO; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECBHICLEECD__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECBHICLEECD_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECBHICLEECD_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECBHICLEECD_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECBHICLEECD_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ECBHICLEECD_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + ECBHICLEECD_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECBHICLEECD_BHLAEBMEOLO_OFFSET))(this);
	}

	::HBPFIALGHOL* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::HBPFIALGHOL*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ECBHICLEECD_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECBHICLEECD_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ECBHICLEECD_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Collections::Generic::IReadOnlyList_1<::HBPFIALGHOL*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::HBPFIALGHOL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECBHICLEECD_EJABHIAHIAN_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECBHICLEECD_CHLEALKAOJO_OFFSET))(this);
	}
};
