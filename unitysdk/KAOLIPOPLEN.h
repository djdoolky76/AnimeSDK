#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ECMDDJJMDAN.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class IPKJPDNKJON;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KAOLIPOPLEN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x15AAE610)
#define KAOLIPOPLEN_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x15AAE3D0)
#define KAOLIPOPLEN_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x15AAE550)
#define KAOLIPOPLEN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x15AAE6F0)
#define KAOLIPOPLEN_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x15AAE3E0)
#define KAOLIPOPLEN_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x15AAE830)
#define KAOLIPOPLEN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x15AAE020)
#define KAOLIPOPLEN_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x15AAE000)
#define KAOLIPOPLEN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x15AAE2E0)
#define KAOLIPOPLEN__CTOR_OFFSET UNITYSDK_OFFSET(0x15AAE820)

inline static constexpr unsigned int KAOLIPOPLEN_TypeDefinitionIndex = 16124;

class KAOLIPOPLEN : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::Il2CppArray<::IPKJPDNKJON*>* OJMBOGGMIKO; // 0x18
	::ECMDDJJMDAN DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOLIPOPLEN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOLIPOPLEN_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOLIPOPLEN_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KAOLIPOPLEN_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KAOLIPOPLEN_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOLIPOPLEN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOLIPOPLEN_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOLIPOPLEN_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KAOLIPOPLEN_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOLIPOPLEN_CHLEALKAOJO_OFFSET))(this);
	}
};
