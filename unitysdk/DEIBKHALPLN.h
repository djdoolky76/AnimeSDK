#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/OLEIMFNFLFM.h"
#include "unitysdk/System/Object.h"

class BOKMKBBKDMP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DEIBKHALPLN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A550B30)
#define DEIBKHALPLN_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A5508F0)
#define DEIBKHALPLN_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A550A70)
#define DEIBKHALPLN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A550C10)
#define DEIBKHALPLN_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A550900)
#define DEIBKHALPLN_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A550D50)
#define DEIBKHALPLN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A550540)
#define DEIBKHALPLN_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A550520)
#define DEIBKHALPLN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A550800)
#define DEIBKHALPLN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A550D40)

inline static constexpr unsigned int DEIBKHALPLN_TypeDefinitionIndex = 17051;

class DEIBKHALPLN : public ::System::Object
{
public:
	::Il2CppArray<::BOKMKBBKDMP*>* OJMBOGGMIKO; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::OLEIMFNFLFM DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEIBKHALPLN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEIBKHALPLN_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEIBKHALPLN_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DEIBKHALPLN_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DEIBKHALPLN_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEIBKHALPLN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEIBKHALPLN_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEIBKHALPLN_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DEIBKHALPLN_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEIBKHALPLN_CHLEALKAOJO_OFFSET))(this);
	}
};
