#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/COJIIBLIFLH.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class KDCLLCNFJED;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPDPBAKLIJL_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BAAF520)
#define NPDPBAKLIJL_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BAAF2F0)
#define NPDPBAKLIJL_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BAAF460)
#define NPDPBAKLIJL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BAAF600)
#define NPDPBAKLIJL_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BAAF300)
#define NPDPBAKLIJL_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BAAF740)
#define NPDPBAKLIJL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BAAEF50)
#define NPDPBAKLIJL_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BAAEF30)
#define NPDPBAKLIJL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BAAF210)
#define NPDPBAKLIJL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAAF730)

inline static constexpr unsigned int NPDPBAKLIJL_TypeDefinitionIndex = 14223;

class NPDPBAKLIJL : public ::System::Object
{
public:
	::Il2CppArray<::KDCLLCNFJED*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::COJIIBLIFLH DHDJDGFNBOA; // 0x20
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPDPBAKLIJL__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPDPBAKLIJL_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPDPBAKLIJL_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NPDPBAKLIJL_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NPDPBAKLIJL_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPDPBAKLIJL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPDPBAKLIJL_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPDPBAKLIJL_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPDPBAKLIJL_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NPDPBAKLIJL_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
