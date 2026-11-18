#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MGJNALMDHCL.h"
#include "unitysdk/System/Object.h"

class FOFMGCNGFPJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HLHFABJIABI_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x160FBB10)
#define HLHFABJIABI_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x160FB8A0)
#define HLHFABJIABI_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x160FBA50)
#define HLHFABJIABI_FINALIZE_OFFSET UNITYSDK_OFFSET(0x160FBBF0)
#define HLHFABJIABI_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x160FB8B0)
#define HLHFABJIABI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x160FB4F0)
#define HLHFABJIABI_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x160FB4D0)
#define HLHFABJIABI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x160FB7B0)
#define HLHFABJIABI__CTOR_OFFSET UNITYSDK_OFFSET(0x160FBD20)

inline static constexpr unsigned int HLHFABJIABI_TypeDefinitionIndex = 15578;

class HLHFABJIABI : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::Il2CppArray<::FOFMGCNGFPJ*>* OJMBOGGMIKO; // 0x20
	::MGJNALMDHCL DHDJDGFNBOA; // 0x28
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLHFABJIABI__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLHFABJIABI_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLHFABJIABI_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HLHFABJIABI_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HLHFABJIABI_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLHFABJIABI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLHFABJIABI_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLHFABJIABI_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLHFABJIABI_CHLEALKAOJO_OFFSET))(this);
	}
};
