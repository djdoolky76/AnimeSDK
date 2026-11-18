#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JKFFIKPCJIH.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class KEDHDJEFFAI;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MAJDBHMHNIK_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17FC0BE0)
#define MAJDBHMHNIK_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17FC09A0)
#define MAJDBHMHNIK_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17FC0B20)
#define MAJDBHMHNIK_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17FC0CC0)
#define MAJDBHMHNIK_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17FC09B0)
#define MAJDBHMHNIK_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17FC0E40)
#define MAJDBHMHNIK_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17FC05F0)
#define MAJDBHMHNIK_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17FC05D0)
#define MAJDBHMHNIK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17FC08B0)
#define MAJDBHMHNIK__CTOR_OFFSET UNITYSDK_OFFSET(0x17FC0DF0)

inline static constexpr unsigned int MAJDBHMHNIK_TypeDefinitionIndex = 13184;

class MAJDBHMHNIK : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::Il2CppArray<::KEDHDJEFFAI*>* OJMBOGGMIKO; // 0x18
	::JKFFIKPCJIH DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJDBHMHNIK__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJDBHMHNIK_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJDBHMHNIK_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MAJDBHMHNIK_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MAJDBHMHNIK_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJDBHMHNIK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJDBHMHNIK_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJDBHMHNIK_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MAJDBHMHNIK_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJDBHMHNIK_CHLEALKAOJO_OFFSET))(this);
	}
};
