#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AFKODJALLAJ.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class LILAJJDLAMA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define JAIKMADHBPA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x18BC4FE0)
#define JAIKMADHBPA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x18BC4DA0)
#define JAIKMADHBPA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x18BC4F20)
#define JAIKMADHBPA_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x18BC5260)
#define JAIKMADHBPA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18BC50C0)
#define JAIKMADHBPA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x18BC4DB0)
#define JAIKMADHBPA_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x18BC5330)
#define JAIKMADHBPA_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x18BC5510)
#define JAIKMADHBPA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x18BC49F0)
#define JAIKMADHBPA_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x18BC5240)
#define JAIKMADHBPA_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x18BC49D0)
#define JAIKMADHBPA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x18BC4CB0)
#define JAIKMADHBPA__CTOR_OFFSET UNITYSDK_OFFSET(0x18BC51F0)

inline static constexpr unsigned int JAIKMADHBPA_TypeDefinitionIndex = 17562;

class JAIKMADHBPA : public ::System::Object
{
public:
	::Il2CppArray<::LILAJJDLAMA*>* OJMBOGGMIKO; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::AFKODJALLAJ DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIKMADHBPA__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIKMADHBPA_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIKMADHBPA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JAIKMADHBPA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + JAIKMADHBPA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIKMADHBPA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIKMADHBPA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIKMADHBPA_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIKMADHBPA_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::LILAJJDLAMA*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::LILAJJDLAMA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIKMADHBPA_EJABHIAHIAN_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIKMADHBPA_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + JAIKMADHBPA_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::LILAJJDLAMA* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::LILAJJDLAMA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JAIKMADHBPA_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}
};
