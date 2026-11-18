#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MOKIHPKNMGG.h"
#include "unitysdk/System/Object.h"

class NGGCHBDKIII;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NLAEMFHMHLL_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BAA92C0)
#define NLAEMFHMHLL_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BAA9090)
#define NLAEMFHMHLL_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BAA9200)
#define NLAEMFHMHLL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BAA93A0)
#define NLAEMFHMHLL_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BAA90A0)
#define NLAEMFHMHLL_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1BAA9710)
#define NLAEMFHMHLL_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BAA9540)
#define NLAEMFHMHLL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BAA8CF0)
#define NLAEMFHMHLL_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1BAA9520)
#define NLAEMFHMHLL_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BAA8CD0)
#define NLAEMFHMHLL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BAA8FB0)
#define NLAEMFHMHLL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAA94D0)

inline static constexpr unsigned int NLAEMFHMHLL_TypeDefinitionIndex = 9484;

class NLAEMFHMHLL : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::Il2CppArray<::NGGCHBDKIII*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::MOKIHPKNMGG DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAEMFHMHLL__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAEMFHMHLL_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAEMFHMHLL_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NLAEMFHMHLL_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NLAEMFHMHLL_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAEMFHMHLL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAEMFHMHLL_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAEMFHMHLL_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAEMFHMHLL_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NLAEMFHMHLL_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAEMFHMHLL_CHLEALKAOJO_OFFSET))(this);
	}

	::NGGCHBDKIII* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::NGGCHBDKIII*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NLAEMFHMHLL_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
