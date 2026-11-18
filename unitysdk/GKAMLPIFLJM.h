#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFJOBJKDMBN.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class HBANAFAHMMD;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define GKAMLPIFLJM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x15A828B0)
#define GKAMLPIFLJM_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x15A82680)
#define GKAMLPIFLJM_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x15A827F0)
#define GKAMLPIFLJM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x15A82990)
#define GKAMLPIFLJM_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x15A82690)
#define GKAMLPIFLJM_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x15A82B10)
#define GKAMLPIFLJM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x15A822E0)
#define GKAMLPIFLJM_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x15A822C0)
#define GKAMLPIFLJM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x15A825A0)
#define GKAMLPIFLJM__CTOR_OFFSET UNITYSDK_OFFSET(0x15A82AC0)

inline static constexpr unsigned int GKAMLPIFLJM_TypeDefinitionIndex = 12586;

class GKAMLPIFLJM : public ::System::Object
{
public:
	::Il2CppArray<::HBANAFAHMMD*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::EFJOBJKDMBN DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKAMLPIFLJM__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKAMLPIFLJM_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKAMLPIFLJM_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GKAMLPIFLJM_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + GKAMLPIFLJM_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKAMLPIFLJM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKAMLPIFLJM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKAMLPIFLJM_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKAMLPIFLJM_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GKAMLPIFLJM_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
