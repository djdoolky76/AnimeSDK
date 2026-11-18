#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANMHEMGOLDC.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class NHBBCCPHFLG;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KPLLOHGDBCM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1955F460)
#define KPLLOHGDBCM_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1955F1E0)
#define KPLLOHGDBCM_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1955F1F0)
#define KPLLOHGDBCM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1955F2B0)
#define KPLLOHGDBCM_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1955F3E0)
#define KPLLOHGDBCM_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1955F610)
#define KPLLOHGDBCM_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1955F8B0)
#define KPLLOHGDBCM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1955EE90)
#define KPLLOHGDBCM_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1955F890)
#define KPLLOHGDBCM_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1955EE70)
#define KPLLOHGDBCM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1955F0F0)
#define KPLLOHGDBCM__CTOR_OFFSET UNITYSDK_OFFSET(0x1955F540)

inline static constexpr unsigned int KPLLOHGDBCM_TypeDefinitionIndex = 9567;

class KPLLOHGDBCM : public ::System::Object
{
public:
	::Il2CppArray<::NHBBCCPHFLG*>* OJMBOGGMIKO; // 0x10
	::ANMHEMGOLDC DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Collections::Generic::HashSet_1<::System::String*>* LHINHLCKHNE; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPLLOHGDBCM__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KPLLOHGDBCM_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPLLOHGDBCM_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPLLOHGDBCM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPLLOHGDBCM_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KPLLOHGDBCM_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KPLLOHGDBCM_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPLLOHGDBCM_BHLAEBMEOLO_OFFSET))(this);
	}

	::NHBBCCPHFLG* IFDPKDOFOJD(::System::String* MGMDLMBEDJF)
	{
		return ((::NHBBCCPHFLG*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KPLLOHGDBCM_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KPLLOHGDBCM_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPLLOHGDBCM_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPLLOHGDBCM_NAMKJOJBAOA_OFFSET))(this);
	}
};
