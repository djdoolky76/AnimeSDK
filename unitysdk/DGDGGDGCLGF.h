#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KDJPCLCGHCJ.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class CPJIGMDPJDN;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DGDGGDGCLGF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A590B00)
#define DGDGGDGCLGF_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A5908C0)
#define DGDGGDGCLGF_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A590A40)
#define DGDGGDGCLGF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A590BE0)
#define DGDGGDGCLGF_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A5908D0)
#define DGDGGDGCLGF_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A590D60)
#define DGDGGDGCLGF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A590510)
#define DGDGGDGCLGF_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A5904F0)
#define DGDGGDGCLGF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A5907D0)
#define DGDGGDGCLGF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A590D10)

inline static constexpr unsigned int DGDGGDGCLGF_TypeDefinitionIndex = 16881;

class DGDGGDGCLGF : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::KDJPCLCGHCJ DHDJDGFNBOA; // 0x18
	::Il2CppArray<::CPJIGMDPJDN*>* OJMBOGGMIKO; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDGGDGCLGF__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDGGDGCLGF_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDGGDGCLGF_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DGDGGDGCLGF_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DGDGGDGCLGF_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDGGDGCLGF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDGGDGCLGF_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDGGDGCLGF_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DGDGGDGCLGF_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDGGDGCLGF_CHLEALKAOJO_OFFSET))(this);
	}
};
