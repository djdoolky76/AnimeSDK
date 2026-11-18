#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JBCJOMPNJFJ.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class LIEONJKCPPI;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JPFHLBBELPP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B63C3A0)
#define JPFHLBBELPP_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B63C170)
#define JPFHLBBELPP_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B63C2E0)
#define JPFHLBBELPP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B63C480)
#define JPFHLBBELPP_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B63C180)
#define JPFHLBBELPP_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B63C5C0)
#define JPFHLBBELPP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B63BDD0)
#define JPFHLBBELPP_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B63BDB0)
#define JPFHLBBELPP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B63C090)
#define JPFHLBBELPP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B63C5B0)

inline static constexpr unsigned int JPFHLBBELPP_TypeDefinitionIndex = 15833;

class JPFHLBBELPP : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::Il2CppArray<::LIEONJKCPPI*>* OJMBOGGMIKO; // 0x20
	::JBCJOMPNJFJ DHDJDGFNBOA; // 0x28
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPFHLBBELPP__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JPFHLBBELPP_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPFHLBBELPP_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JPFHLBBELPP_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + JPFHLBBELPP_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPFHLBBELPP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPFHLBBELPP_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPFHLBBELPP_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + JPFHLBBELPP_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPFHLBBELPP_CHLEALKAOJO_OFFSET))(this);
	}
};
