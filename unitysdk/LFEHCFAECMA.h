#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JEDCGOIFCLN.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class CDHLCFMJONJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LFEHCFAECMA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17FB03A0)
#define LFEHCFAECMA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17FB0170)
#define LFEHCFAECMA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17FB02E0)
#define LFEHCFAECMA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17FB0480)
#define LFEHCFAECMA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17FB0180)
#define LFEHCFAECMA_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17FB05C0)
#define LFEHCFAECMA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17FAFDD0)
#define LFEHCFAECMA_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17FAFDB0)
#define LFEHCFAECMA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17FB0090)
#define LFEHCFAECMA__CTOR_OFFSET UNITYSDK_OFFSET(0x17FB05B0)

inline static constexpr unsigned int LFEHCFAECMA_TypeDefinitionIndex = 9930;

class LFEHCFAECMA : public ::System::Object
{
public:
	::Il2CppArray<::CDHLCFMJONJ*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::JEDCGOIFCLN DHDJDGFNBOA; // 0x20
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFEHCFAECMA__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LFEHCFAECMA_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFEHCFAECMA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LFEHCFAECMA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + LFEHCFAECMA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFEHCFAECMA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFEHCFAECMA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFEHCFAECMA_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LFEHCFAECMA_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFEHCFAECMA_CHLEALKAOJO_OFFSET))(this);
	}
};
