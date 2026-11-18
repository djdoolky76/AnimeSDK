#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/PHAAPDJIHHP.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class NMJJDGFIFLE;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PKILCFFOEPN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19DE1E20)
#define PKILCFFOEPN_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19DE1BF0)
#define PKILCFFOEPN_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19DE1D60)
#define PKILCFFOEPN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19DE1F00)
#define PKILCFFOEPN_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19DE1C00)
#define PKILCFFOEPN_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19DE20A0)
#define PKILCFFOEPN_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19DE24B0)
#define PKILCFFOEPN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19DE1890)
#define PKILCFFOEPN_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19DE2080)
#define PKILCFFOEPN_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19DE1870)
#define PKILCFFOEPN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19DE1B10)
#define PKILCFFOEPN__CTOR_OFFSET UNITYSDK_OFFSET(0x19DE2030)

inline static constexpr unsigned int PKILCFFOEPN_TypeDefinitionIndex = 9309;

class PKILCFFOEPN : public ::System::Object
{
public:
	::PHAAPDJIHHP DHDJDGFNBOA; // 0x10
	::Il2CppArray<::NMJJDGFIFLE*>* OJMBOGGMIKO; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* FLBOKGKPECD; // 0x30
	::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* LHINHLCKHNE; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKILCFFOEPN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PKILCFFOEPN_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKILCFFOEPN_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PKILCFFOEPN_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + PKILCFFOEPN_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKILCFFOEPN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKILCFFOEPN_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKILCFFOEPN_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKILCFFOEPN_NAMKJOJBAOA_OFFSET))(this);
	}

	::NMJJDGFIFLE* IFDPKDOFOJD(::System::Int32 EBCCPPJHLND, ::System::Int32 HFKIDEMMMBN)
	{
		return ((::NMJJDGFIFLE*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PKILCFFOEPN_IFDPKDOFOJD_OFFSET))(this, EBCCPPJHLND, HFKIDEMMMBN);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + PKILCFFOEPN_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKILCFFOEPN_CHLEALKAOJO_OFFSET))(this);
	}
};
