#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/NGFFBCLCFJD.h"
#include "unitysdk/System/Object.h"

class HEENBFDHKGO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DNEJOIFAAMF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1ADCBBE0)
#define DNEJOIFAAMF_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1ADCB9B0)
#define DNEJOIFAAMF_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1ADCBB20)
#define DNEJOIFAAMF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1ADCBCC0)
#define DNEJOIFAAMF_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1ADCB9C0)
#define DNEJOIFAAMF_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1ADCC030)
#define DNEJOIFAAMF_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1ADCBE60)
#define DNEJOIFAAMF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1ADCB610)
#define DNEJOIFAAMF_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1ADCBE40)
#define DNEJOIFAAMF_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1ADCB5F0)
#define DNEJOIFAAMF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1ADCB8D0)
#define DNEJOIFAAMF__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADCBDF0)

inline static constexpr unsigned int DNEJOIFAAMF_TypeDefinitionIndex = 11546;

class DNEJOIFAAMF : public ::System::Object
{
public:
	::NGFFBCLCFJD DHDJDGFNBOA; // 0x10
	::System::Action* PLDOELOOFLL; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::Il2CppArray<::HEENBFDHKGO*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNEJOIFAAMF__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DNEJOIFAAMF_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNEJOIFAAMF_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DNEJOIFAAMF_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DNEJOIFAAMF_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNEJOIFAAMF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNEJOIFAAMF_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNEJOIFAAMF_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNEJOIFAAMF_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DNEJOIFAAMF_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNEJOIFAAMF_CHLEALKAOJO_OFFSET))(this);
	}

	::HEENBFDHKGO* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::HEENBFDHKGO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DNEJOIFAAMF_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
