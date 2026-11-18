#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/PBFOIGAPJFM.h"
#include "unitysdk/System/Object.h"

class HIKKGHIEOCA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HKJMDIKHAKF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B124C80)
#define HKJMDIKHAKF_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B124A50)
#define HKJMDIKHAKF_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B124BC0)
#define HKJMDIKHAKF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B124D60)
#define HKJMDIKHAKF_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B124A60)
#define HKJMDIKHAKF_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B124EA0)
#define HKJMDIKHAKF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B1246B0)
#define HKJMDIKHAKF_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B124690)
#define HKJMDIKHAKF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B124970)
#define HKJMDIKHAKF__CTOR_OFFSET UNITYSDK_OFFSET(0x1B124E90)

inline static constexpr unsigned int HKJMDIKHAKF_TypeDefinitionIndex = 11633;

class HKJMDIKHAKF : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::PBFOIGAPJFM DHDJDGFNBOA; // 0x18
	::Il2CppArray<::HIKKGHIEOCA*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKJMDIKHAKF__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HKJMDIKHAKF_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKJMDIKHAKF_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HKJMDIKHAKF_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HKJMDIKHAKF_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKJMDIKHAKF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKJMDIKHAKF_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKJMDIKHAKF_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKJMDIKHAKF_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HKJMDIKHAKF_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
