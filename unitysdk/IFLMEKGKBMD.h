#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/OKILAHOPBDF.h"
#include "unitysdk/System/Object.h"

class ACACBDGLAEB;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define IFLMEKGKBMD_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x152E34A0)
#define IFLMEKGKBMD_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x152E3240)
#define IFLMEKGKBMD_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x152E33E0)
#define IFLMEKGKBMD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x152E3580)
#define IFLMEKGKBMD_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x152E3250)
#define IFLMEKGKBMD_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x152E2EA0)
#define IFLMEKGKBMD_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x152E2E80)
#define IFLMEKGKBMD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x152E3160)
#define IFLMEKGKBMD__CTOR_OFFSET UNITYSDK_OFFSET(0x152E36B0)

inline static constexpr unsigned int IFLMEKGKBMD_TypeDefinitionIndex = 15521;

class IFLMEKGKBMD : public ::System::Object
{
public:
	::Il2CppArray<::ACACBDGLAEB*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::OKILAHOPBDF DHDJDGFNBOA; // 0x28
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFLMEKGKBMD__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFLMEKGKBMD_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFLMEKGKBMD_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IFLMEKGKBMD_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + IFLMEKGKBMD_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFLMEKGKBMD_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFLMEKGKBMD_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFLMEKGKBMD_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFLMEKGKBMD_CHLEALKAOJO_OFFSET))(this);
	}
};
