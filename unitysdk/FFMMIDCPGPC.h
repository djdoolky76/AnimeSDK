#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EIJAKHFGHMA.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class LADMGKDFJGK;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FFMMIDCPGPC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B9C33C0)
#define FFMMIDCPGPC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B9C3190)
#define FFMMIDCPGPC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B9C3300)
#define FFMMIDCPGPC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B9C34A0)
#define FFMMIDCPGPC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B9C31A0)
#define FFMMIDCPGPC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B9C35E0)
#define FFMMIDCPGPC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B9C2DF0)
#define FFMMIDCPGPC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B9C2DD0)
#define FFMMIDCPGPC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B9C30B0)
#define FFMMIDCPGPC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9C35D0)

inline static constexpr unsigned int FFMMIDCPGPC_TypeDefinitionIndex = 12523;

class FFMMIDCPGPC : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::Il2CppArray<::LADMGKDFJGK*>* OJMBOGGMIKO; // 0x20
	::EIJAKHFGHMA DHDJDGFNBOA; // 0x28
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFMMIDCPGPC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FFMMIDCPGPC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFMMIDCPGPC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FFMMIDCPGPC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + FFMMIDCPGPC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFMMIDCPGPC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFMMIDCPGPC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFMMIDCPGPC_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFMMIDCPGPC_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FFMMIDCPGPC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
