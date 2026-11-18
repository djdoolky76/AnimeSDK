#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EADFNFLODCM.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class OBLGJKHFEPK;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define JPBJMGBOOJJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B7DF1E0)
#define JPBJMGBOOJJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B7DEFA0)
#define JPBJMGBOOJJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B7DF120)
#define JPBJMGBOOJJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B7DF2C0)
#define JPBJMGBOOJJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B7DEFB0)
#define JPBJMGBOOJJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B7DF440)
#define JPBJMGBOOJJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B7DEBF0)
#define JPBJMGBOOJJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B7DEBD0)
#define JPBJMGBOOJJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B7DEEB0)
#define JPBJMGBOOJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7DF3F0)

inline static constexpr unsigned int JPBJMGBOOJJ_TypeDefinitionIndex = 14704;

class JPBJMGBOOJJ : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::EADFNFLODCM DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::Il2CppArray<::OBLGJKHFEPK*>* OJMBOGGMIKO; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBJMGBOOJJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBJMGBOOJJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBJMGBOOJJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JPBJMGBOOJJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + JPBJMGBOOJJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBJMGBOOJJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBJMGBOOJJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBJMGBOOJJ_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBJMGBOOJJ_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + JPBJMGBOOJJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
