#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/LMIHKDLABLG.h"
#include "unitysdk/System/Object.h"

class JHCAGJFGCEJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KIOJFODHIBE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1936B9B0)
#define KIOJFODHIBE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1936B730)
#define KIOJFODHIBE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1936B740)
#define KIOJFODHIBE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1936B800)
#define KIOJFODHIBE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1936B930)
#define KIOJFODHIBE_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1936BAE0)
#define KIOJFODHIBE_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1936BD30)
#define KIOJFODHIBE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1936B380)
#define KIOJFODHIBE_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1936BD10)
#define KIOJFODHIBE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1936B360)
#define KIOJFODHIBE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1936B640)
#define KIOJFODHIBE__CTOR_OFFSET UNITYSDK_OFFSET(0x1936BA90)

inline static constexpr unsigned int KIOJFODHIBE_TypeDefinitionIndex = 16584;

class KIOJFODHIBE : public ::System::Object
{
public:
	::Il2CppArray<::JHCAGJFGCEJ*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::System::Action* PLDOELOOFLL; // 0x28
	::LMIHKDLABLG DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIOJFODHIBE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KIOJFODHIBE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIOJFODHIBE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIOJFODHIBE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIOJFODHIBE_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KIOJFODHIBE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KIOJFODHIBE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIOJFODHIBE_BHLAEBMEOLO_OFFSET))(this);
	}

	::JHCAGJFGCEJ* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::JHCAGJFGCEJ*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KIOJFODHIBE_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KIOJFODHIBE_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIOJFODHIBE_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIOJFODHIBE_CHLEALKAOJO_OFFSET))(this);
	}
};
