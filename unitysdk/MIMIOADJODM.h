#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/OJIAEGLMBMA.h"
#include "unitysdk/System/Object.h"

class OLOOCNFMODP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define MIMIOADJODM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BF60B40)
#define MIMIOADJODM_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BF60910)
#define MIMIOADJODM_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BF60A80)
#define MIMIOADJODM_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x1BF60FA0)
#define MIMIOADJODM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BF60C20)
#define MIMIOADJODM_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BF60920)
#define MIMIOADJODM_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x1BF60DA0)
#define MIMIOADJODM_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BF61070)
#define MIMIOADJODM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BF60570)
#define MIMIOADJODM_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1BF60F80)
#define MIMIOADJODM_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BF60550)
#define MIMIOADJODM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BF60830)
#define MIMIOADJODM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF60D50)

inline static constexpr unsigned int MIMIOADJODM_TypeDefinitionIndex = 10791;

class MIMIOADJODM : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::OJIAEGLMBMA DHDJDGFNBOA; // 0x20
	::Il2CppArray<::OLOOCNFMODP*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIMIOADJODM__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIMIOADJODM_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIMIOADJODM_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIMIOADJODM_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MIMIOADJODM_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIMIOADJODM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIMIOADJODM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIMIOADJODM_FINALIZE_OFFSET))(this);
	}

	::OLOOCNFMODP* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::OLOOCNFMODP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIMIOADJODM_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIMIOADJODM_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::OLOOCNFMODP*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::OLOOCNFMODP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIMIOADJODM_EJABHIAHIAN_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIMIOADJODM_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIMIOADJODM_CHLEALKAOJO_OFFSET))(this);
	}
};
