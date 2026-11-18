#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/KFLOLNAFBJG.h"
#include "unitysdk/System/Object.h"

class ACOJGPPGFLO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define OFJMHOHMPDB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x18E2DCD0)
#define OFJMHOHMPDB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x18E2DAA0)
#define OFJMHOHMPDB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x18E2DC10)
#define OFJMHOHMPDB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18E2DDB0)
#define OFJMHOHMPDB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x18E2DAB0)
#define OFJMHOHMPDB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x18E2DF30)
#define OFJMHOHMPDB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x18E2D700)
#define OFJMHOHMPDB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x18E2D6E0)
#define OFJMHOHMPDB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x18E2D9C0)
#define OFJMHOHMPDB__CTOR_OFFSET UNITYSDK_OFFSET(0x18E2DEE0)

inline static constexpr unsigned int OFJMHOHMPDB_TypeDefinitionIndex = 15422;

class OFJMHOHMPDB : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::KFLOLNAFBJG DHDJDGFNBOA; // 0x18
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::Il2CppArray<::ACOJGPPGFLO*>* OJMBOGGMIKO; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFJMHOHMPDB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OFJMHOHMPDB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFJMHOHMPDB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OFJMHOHMPDB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + OFJMHOHMPDB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFJMHOHMPDB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFJMHOHMPDB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFJMHOHMPDB_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + OFJMHOHMPDB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFJMHOHMPDB_CHLEALKAOJO_OFFSET))(this);
	}
};
