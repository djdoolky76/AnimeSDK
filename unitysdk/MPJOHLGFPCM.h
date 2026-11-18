#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HJPFGMCPOMO.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class FHJDJLLPFEA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MPJOHLGFPCM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17FCD370)
#define MPJOHLGFPCM_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17FCD130)
#define MPJOHLGFPCM_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17FCD2B0)
#define MPJOHLGFPCM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17FCD450)
#define MPJOHLGFPCM_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17FCD140)
#define MPJOHLGFPCM_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17FCD7A0)
#define MPJOHLGFPCM_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17FCD5D0)
#define MPJOHLGFPCM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17FCCD80)
#define MPJOHLGFPCM_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17FCD9D0)
#define MPJOHLGFPCM_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17FCCD60)
#define MPJOHLGFPCM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17FCD040)
#define MPJOHLGFPCM__CTOR_OFFSET UNITYSDK_OFFSET(0x17FCD580)

inline static constexpr unsigned int MPJOHLGFPCM_TypeDefinitionIndex = 16763;

class MPJOHLGFPCM : public ::System::Object
{
public:
	::Il2CppArray<::FHJDJLLPFEA*>* OJMBOGGMIKO; // 0x10
	::HJPFGMCPOMO DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJOHLGFPCM__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJOHLGFPCM_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJOHLGFPCM_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MPJOHLGFPCM_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MPJOHLGFPCM_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJOHLGFPCM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJOHLGFPCM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJOHLGFPCM_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MPJOHLGFPCM_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJOHLGFPCM_CHLEALKAOJO_OFFSET))(this);
	}

	::FHJDJLLPFEA* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::FHJDJLLPFEA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MPJOHLGFPCM_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJOHLGFPCM_NAMKJOJBAOA_OFFSET))(this);
	}
};
