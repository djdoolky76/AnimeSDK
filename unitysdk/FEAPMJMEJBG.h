#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DIEHKKLDENP.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class JLBDBKBCHDF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FEAPMJMEJBG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x15A70460)
#define FEAPMJMEJBG_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x15A70230)
#define FEAPMJMEJBG_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x15A703A0)
#define FEAPMJMEJBG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x15A70540)
#define FEAPMJMEJBG_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x15A70240)
#define FEAPMJMEJBG_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x15A70890)
#define FEAPMJMEJBG_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x15A706C0)
#define FEAPMJMEJBG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x15A6FE90)
#define FEAPMJMEJBG_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x15A70AC0)
#define FEAPMJMEJBG_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x15A6FE70)
#define FEAPMJMEJBG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x15A70150)
#define FEAPMJMEJBG__CTOR_OFFSET UNITYSDK_OFFSET(0x15A70670)

inline static constexpr unsigned int FEAPMJMEJBG_TypeDefinitionIndex = 9703;

class FEAPMJMEJBG : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::Il2CppArray<::JLBDBKBCHDF*>* OJMBOGGMIKO; // 0x18
	::DIEHKKLDENP DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEAPMJMEJBG__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FEAPMJMEJBG_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEAPMJMEJBG_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FEAPMJMEJBG_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + FEAPMJMEJBG_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEAPMJMEJBG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEAPMJMEJBG_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEAPMJMEJBG_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FEAPMJMEJBG_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEAPMJMEJBG_CHLEALKAOJO_OFFSET))(this);
	}

	::JLBDBKBCHDF* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::JLBDBKBCHDF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FEAPMJMEJBG_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEAPMJMEJBG_NAMKJOJBAOA_OFFSET))(this);
	}
};
