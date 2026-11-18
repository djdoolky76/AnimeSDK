#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JDJBIHBEGBD.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class FGBLDGEOMMO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CEBPONJAMKC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17F07D50)
#define CEBPONJAMKC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17F07B10)
#define CEBPONJAMKC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17F07C90)
#define CEBPONJAMKC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17F07E30)
#define CEBPONJAMKC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17F07B20)
#define CEBPONJAMKC_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17F07FB0)
#define CEBPONJAMKC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17F08200)
#define CEBPONJAMKC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17F07760)
#define CEBPONJAMKC_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17F081E0)
#define CEBPONJAMKC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17F07740)
#define CEBPONJAMKC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17F07A20)
#define CEBPONJAMKC__CTOR_OFFSET UNITYSDK_OFFSET(0x17F07F60)

inline static constexpr unsigned int CEBPONJAMKC_TypeDefinitionIndex = 16588;

class CEBPONJAMKC : public ::System::Object
{
public:
	::JDJBIHBEGBD DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::Il2CppArray<::FGBLDGEOMMO*>* OJMBOGGMIKO; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEBPONJAMKC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CEBPONJAMKC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEBPONJAMKC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CEBPONJAMKC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + CEBPONJAMKC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEBPONJAMKC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEBPONJAMKC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEBPONJAMKC_FINALIZE_OFFSET))(this);
	}

	::FGBLDGEOMMO* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::FGBLDGEOMMO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CEBPONJAMKC_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CEBPONJAMKC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEBPONJAMKC_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEBPONJAMKC_NAMKJOJBAOA_OFFSET))(this);
	}
};
