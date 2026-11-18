#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/LFGCAEEJJHI.h"
#include "unitysdk/System/Object.h"

class PACAPDPIGMM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define EONOPCAODFJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1662F040)
#define EONOPCAODFJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1662EE00)
#define EONOPCAODFJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1662EF80)
#define EONOPCAODFJ_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x1662F630)
#define EONOPCAODFJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1662F120)
#define EONOPCAODFJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1662EE10)
#define EONOPCAODFJ_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x1662F450)
#define EONOPCAODFJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1662F260)
#define EONOPCAODFJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1662EA50)
#define EONOPCAODFJ_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1662F430)
#define EONOPCAODFJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1662EA30)
#define EONOPCAODFJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1662ED10)
#define EONOPCAODFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1662F250)

inline static constexpr unsigned int EONOPCAODFJ_TypeDefinitionIndex = 15245;

class EONOPCAODFJ : public ::System::Object
{
public:
	::LFGCAEEJJHI DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::System::Action* PLDOELOOFLL; // 0x30
	::Il2CppArray<::PACAPDPIGMM*>* OJMBOGGMIKO; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EONOPCAODFJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EONOPCAODFJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EONOPCAODFJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EONOPCAODFJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + EONOPCAODFJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EONOPCAODFJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EONOPCAODFJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EONOPCAODFJ_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EONOPCAODFJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EONOPCAODFJ_NAMKJOJBAOA_OFFSET))(this);
	}

	::PACAPDPIGMM* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::PACAPDPIGMM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EONOPCAODFJ_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EONOPCAODFJ_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::PACAPDPIGMM*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::PACAPDPIGMM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EONOPCAODFJ_EJABHIAHIAN_OFFSET))(this);
	}
};
