#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/OCGMKCEMMFI.h"
#include "unitysdk/System/Object.h"

class BJCLKNPFPJH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LKPAFGPEEMF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17FB5820)
#define LKPAFGPEEMF_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17FB55F0)
#define LKPAFGPEEMF_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17FB5760)
#define LKPAFGPEEMF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17FB5900)
#define LKPAFGPEEMF_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17FB5600)
#define LKPAFGPEEMF_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17FB5A60)
#define LKPAFGPEEMF_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17FB5C50)
#define LKPAFGPEEMF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17FB5250)
#define LKPAFGPEEMF_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17FB5A40)
#define LKPAFGPEEMF_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17FB5230)
#define LKPAFGPEEMF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17FB5510)
#define LKPAFGPEEMF__CTOR_OFFSET UNITYSDK_OFFSET(0x17FB5A30)

inline static constexpr unsigned int LKPAFGPEEMF_TypeDefinitionIndex = 14055;

class LKPAFGPEEMF : public ::System::Object
{
public:
	::OCGMKCEMMFI DHDJDGFNBOA; // 0x10
	::Il2CppArray<::BJCLKNPFPJH*>* OJMBOGGMIKO; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPAFGPEEMF__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPAFGPEEMF_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPAFGPEEMF_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LKPAFGPEEMF_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + LKPAFGPEEMF_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPAFGPEEMF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPAFGPEEMF_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPAFGPEEMF_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPAFGPEEMF_NAMKJOJBAOA_OFFSET))(this);
	}

	::BJCLKNPFPJH* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::BJCLKNPFPJH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LKPAFGPEEMF_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPAFGPEEMF_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LKPAFGPEEMF_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
