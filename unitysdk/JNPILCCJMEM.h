#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HEOEIGFBEFE.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class HCGFJCLJBCN;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define JNPILCCJMEM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A5F4690)
#define JNPILCCJMEM_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A5F4460)
#define JNPILCCJMEM_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A5F45D0)
#define JNPILCCJMEM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A5F4770)
#define JNPILCCJMEM_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A5F4470)
#define JNPILCCJMEM_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A5F48F0)
#define JNPILCCJMEM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A5F40C0)
#define JNPILCCJMEM_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A5F40A0)
#define JNPILCCJMEM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A5F4380)
#define JNPILCCJMEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5F48A0)

inline static constexpr unsigned int JNPILCCJMEM_TypeDefinitionIndex = 14429;

class JNPILCCJMEM : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::Il2CppArray<::HCGFJCLJBCN*>* OJMBOGGMIKO; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::HEOEIGFBEFE DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPILCCJMEM__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPILCCJMEM_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPILCCJMEM_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JNPILCCJMEM_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + JNPILCCJMEM_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPILCCJMEM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPILCCJMEM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPILCCJMEM_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + JNPILCCJMEM_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPILCCJMEM_CHLEALKAOJO_OFFSET))(this);
	}
};
