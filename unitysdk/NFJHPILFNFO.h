#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AEFMEMAOMBN.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class NLKKBMBFDOA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NFJHPILFNFO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BF6BBD0)
#define NFJHPILFNFO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BF6B990)
#define NFJHPILFNFO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BF6BB10)
#define NFJHPILFNFO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BF6BCB0)
#define NFJHPILFNFO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BF6B9A0)
#define NFJHPILFNFO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BF6BDF0)
#define NFJHPILFNFO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BF6B5E0)
#define NFJHPILFNFO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BF6B5C0)
#define NFJHPILFNFO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BF6B8A0)
#define NFJHPILFNFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF6BDE0)

inline static constexpr unsigned int NFJHPILFNFO_TypeDefinitionIndex = 15533;

class NFJHPILFNFO : public ::System::Object
{
public:
	::AEFMEMAOMBN DHDJDGFNBOA; // 0x10
	::Il2CppArray<::NLKKBMBFDOA*>* OJMBOGGMIKO; // 0x28
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFJHPILFNFO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFJHPILFNFO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFJHPILFNFO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NFJHPILFNFO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NFJHPILFNFO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFJHPILFNFO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFJHPILFNFO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFJHPILFNFO_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NFJHPILFNFO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFJHPILFNFO_CHLEALKAOJO_OFFSET))(this);
	}
};
