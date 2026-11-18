#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ECKIDBBOAOG.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class MKIOIEANJAC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HIGMCHKGHML_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B87EA60)
#define HIGMCHKGHML_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B87E820)
#define HIGMCHKGHML_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B87E9A0)
#define HIGMCHKGHML_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B87EB40)
#define HIGMCHKGHML_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B87E830)
#define HIGMCHKGHML_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B87EEB0)
#define HIGMCHKGHML_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B87ECC0)
#define HIGMCHKGHML_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B87E470)
#define HIGMCHKGHML_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B87EE90)
#define HIGMCHKGHML_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B87E450)
#define HIGMCHKGHML_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B87E730)
#define HIGMCHKGHML__CTOR_OFFSET UNITYSDK_OFFSET(0x1B87EC70)

inline static constexpr unsigned int HIGMCHKGHML_TypeDefinitionIndex = 13995;

class HIGMCHKGHML : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::Il2CppArray<::MKIOIEANJAC*>* OJMBOGGMIKO; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::ECKIDBBOAOG DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIGMCHKGHML__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIGMCHKGHML_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIGMCHKGHML_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HIGMCHKGHML_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HIGMCHKGHML_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIGMCHKGHML_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIGMCHKGHML_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIGMCHKGHML_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIGMCHKGHML_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HIGMCHKGHML_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIGMCHKGHML_NAMKJOJBAOA_OFFSET))(this);
	}

	::MKIOIEANJAC* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::MKIOIEANJAC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HIGMCHKGHML_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
