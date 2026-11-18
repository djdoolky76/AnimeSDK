#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGNMNDIIINB.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class MNEFHHKDHHA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PJOCEAIEMEM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19145820)
#define PJOCEAIEMEM_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x191455F0)
#define PJOCEAIEMEM_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19145760)
#define PJOCEAIEMEM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19145900)
#define PJOCEAIEMEM_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19145600)
#define PJOCEAIEMEM_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19145A80)
#define PJOCEAIEMEM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19145250)
#define PJOCEAIEMEM_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19145230)
#define PJOCEAIEMEM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19145510)
#define PJOCEAIEMEM__CTOR_OFFSET UNITYSDK_OFFSET(0x19145A30)

inline static constexpr unsigned int PJOCEAIEMEM_TypeDefinitionIndex = 16510;

class PJOCEAIEMEM : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::Il2CppArray<::MNEFHHKDHHA*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::HGNMNDIIINB DHDJDGFNBOA; // 0x28
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJOCEAIEMEM__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PJOCEAIEMEM_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJOCEAIEMEM_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PJOCEAIEMEM_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + PJOCEAIEMEM_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJOCEAIEMEM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJOCEAIEMEM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJOCEAIEMEM_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJOCEAIEMEM_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + PJOCEAIEMEM_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
