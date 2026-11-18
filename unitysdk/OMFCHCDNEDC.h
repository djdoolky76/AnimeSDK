#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/KPEONMLICIB.h"
#include "unitysdk/System/Object.h"

class ICJMAEDEHJB;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define OMFCHCDNEDC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1EDB5C50)
#define OMFCHCDNEDC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1EDB5A10)
#define OMFCHCDNEDC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1EDB5B90)
#define OMFCHCDNEDC_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x1EDB6280)
#define OMFCHCDNEDC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1EDB5D30)
#define OMFCHCDNEDC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1EDB5A20)
#define OMFCHCDNEDC_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x1EDB5ED0)
#define OMFCHCDNEDC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1EDB60B0)
#define OMFCHCDNEDC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1EDB5660)
#define OMFCHCDNEDC_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1EDB5EB0)
#define OMFCHCDNEDC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1EDB5640)
#define OMFCHCDNEDC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1EDB5920)
#define OMFCHCDNEDC__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDB5E60)

inline static constexpr unsigned int OMFCHCDNEDC_TypeDefinitionIndex = 17651;

class OMFCHCDNEDC : public ::System::Object
{
public:
	::KPEONMLICIB DHDJDGFNBOA; // 0x10
	::Il2CppArray<::ICJMAEDEHJB*>* OJMBOGGMIKO; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMFCHCDNEDC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMFCHCDNEDC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMFCHCDNEDC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OMFCHCDNEDC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + OMFCHCDNEDC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMFCHCDNEDC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMFCHCDNEDC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMFCHCDNEDC_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMFCHCDNEDC_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMFCHCDNEDC_CHLEALKAOJO_OFFSET))(this);
	}

	::ICJMAEDEHJB* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::ICJMAEDEHJB*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OMFCHCDNEDC_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + OMFCHCDNEDC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Collections::Generic::IReadOnlyList_1<::ICJMAEDEHJB*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::ICJMAEDEHJB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMFCHCDNEDC_EJABHIAHIAN_OFFSET))(this);
	}
};
