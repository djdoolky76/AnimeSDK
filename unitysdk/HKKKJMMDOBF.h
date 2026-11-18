#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIMEFJGBJPG.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class FGPDHENPGGC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HKKKJMMDOBF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x18BB0DC0)
#define HKKKJMMDOBF_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x18BB0B60)
#define HKKKJMMDOBF_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x18BB0D00)
#define HKKKJMMDOBF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18BB0EA0)
#define HKKKJMMDOBF_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x18BB0B70)
#define HKKKJMMDOBF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x18BB07C0)
#define HKKKJMMDOBF_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x18BB07A0)
#define HKKKJMMDOBF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x18BB0A80)
#define HKKKJMMDOBF__CTOR_OFFSET UNITYSDK_OFFSET(0x18BB0FD0)

inline static constexpr unsigned int HKKKJMMDOBF_TypeDefinitionIndex = 15375;

class HKKKJMMDOBF : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::BIMEFJGBJPG DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::Il2CppArray<::FGPDHENPGGC*>* OJMBOGGMIKO; // 0x38
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKKKJMMDOBF__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HKKKJMMDOBF_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKKKJMMDOBF_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HKKKJMMDOBF_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HKKKJMMDOBF_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKKKJMMDOBF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKKKJMMDOBF_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKKKJMMDOBF_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKKKJMMDOBF_CHLEALKAOJO_OFFSET))(this);
	}
};
