#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHEFIMJBBJD.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class JANLLDJCGNO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FFKAGPBNOPL_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17AB2F70)
#define FFKAGPBNOPL_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17AB2D30)
#define FFKAGPBNOPL_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17AB2EB0)
#define FFKAGPBNOPL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17AB3050)
#define FFKAGPBNOPL_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17AB2D40)
#define FFKAGPBNOPL_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17AB3380)
#define FFKAGPBNOPL_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17AB3190)
#define FFKAGPBNOPL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17AB2980)
#define FFKAGPBNOPL_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17AB3360)
#define FFKAGPBNOPL_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17AB2960)
#define FFKAGPBNOPL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17AB2C40)
#define FFKAGPBNOPL__CTOR_OFFSET UNITYSDK_OFFSET(0x17AB3180)

inline static constexpr unsigned int FFKAGPBNOPL_TypeDefinitionIndex = 13857;

class FFKAGPBNOPL : public ::System::Object
{
public:
	::Il2CppArray<::JANLLDJCGNO*>* OJMBOGGMIKO; // 0x10
	::BHEFIMJBBJD DHDJDGFNBOA; // 0x18
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFKAGPBNOPL__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FFKAGPBNOPL_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFKAGPBNOPL_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FFKAGPBNOPL_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + FFKAGPBNOPL_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFKAGPBNOPL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFKAGPBNOPL_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFKAGPBNOPL_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FFKAGPBNOPL_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFKAGPBNOPL_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFKAGPBNOPL_CHLEALKAOJO_OFFSET))(this);
	}

	::JANLLDJCGNO* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::JANLLDJCGNO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FFKAGPBNOPL_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
