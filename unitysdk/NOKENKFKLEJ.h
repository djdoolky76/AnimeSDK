#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MLHKHOFIIMD.h"
#include "unitysdk/System/Object.h"

class FJILNDLOFGN;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NOKENKFKLEJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x18E23D80)
#define NOKENKFKLEJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x18E23B00)
#define NOKENKFKLEJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x18E23B10)
#define NOKENKFKLEJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18E23BD0)
#define NOKENKFKLEJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x18E23D00)
#define NOKENKFKLEJ_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x18E23EB0)
#define NOKENKFKLEJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x18E24100)
#define NOKENKFKLEJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x18E23750)
#define NOKENKFKLEJ_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x18E240E0)
#define NOKENKFKLEJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x18E23730)
#define NOKENKFKLEJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x18E23A10)
#define NOKENKFKLEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x18E23E60)

inline static constexpr unsigned int NOKENKFKLEJ_TypeDefinitionIndex = 9801;

class NOKENKFKLEJ : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::Il2CppArray<::FJILNDLOFGN*>* OJMBOGGMIKO; // 0x18
	::MLHKHOFIIMD DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKENKFKLEJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKENKFKLEJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKENKFKLEJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKENKFKLEJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKENKFKLEJ_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NOKENKFKLEJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NOKENKFKLEJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKENKFKLEJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKENKFKLEJ_CHLEALKAOJO_OFFSET))(this);
	}

	::FJILNDLOFGN* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::FJILNDLOFGN*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NOKENKFKLEJ_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NOKENKFKLEJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKENKFKLEJ_NAMKJOJBAOA_OFFSET))(this);
	}
};
