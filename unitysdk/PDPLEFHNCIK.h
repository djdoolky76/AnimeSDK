#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MMPMOFLCIBE.h"
#include "unitysdk/System/Object.h"

class AMOKPBDDBLC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define PDPLEFHNCIK_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BF89CA0)
#define PDPLEFHNCIK_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BF89A20)
#define PDPLEFHNCIK_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BF89A30)
#define PDPLEFHNCIK_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x1BF8A0A0)
#define PDPLEFHNCIK_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BF89AF0)
#define PDPLEFHNCIK_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BF89C20)
#define PDPLEFHNCIK_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x1BF8A170)
#define PDPLEFHNCIK_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BF89DF0)
#define PDPLEFHNCIK_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BF89670)
#define PDPLEFHNCIK_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1BF89DD0)
#define PDPLEFHNCIK_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BF89650)
#define PDPLEFHNCIK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BF89930)
#define PDPLEFHNCIK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF89D80)

inline static constexpr unsigned int PDPLEFHNCIK_TypeDefinitionIndex = 12505;

class PDPLEFHNCIK : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::MMPMOFLCIBE DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::Il2CppArray<::AMOKPBDDBLC*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDPLEFHNCIK__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PDPLEFHNCIK_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDPLEFHNCIK_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDPLEFHNCIK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDPLEFHNCIK_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PDPLEFHNCIK_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + PDPLEFHNCIK_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDPLEFHNCIK_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDPLEFHNCIK_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + PDPLEFHNCIK_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDPLEFHNCIK_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::AMOKPBDDBLC*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::AMOKPBDDBLC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDPLEFHNCIK_EJABHIAHIAN_OFFSET))(this);
	}

	::AMOKPBDDBLC* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::AMOKPBDDBLC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PDPLEFHNCIK_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}
};
