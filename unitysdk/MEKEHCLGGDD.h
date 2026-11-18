#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GCMLINNJGIF.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class ODGCPPNOICF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MEKEHCLGGDD_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1C084D80)
#define MEKEHCLGGDD_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1C084B00)
#define MEKEHCLGGDD_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1C084B10)
#define MEKEHCLGGDD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C084BD0)
#define MEKEHCLGGDD_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1C084D00)
#define MEKEHCLGGDD_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1C085160)
#define MEKEHCLGGDD_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1C084EB0)
#define MEKEHCLGGDD_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1C084760)
#define MEKEHCLGGDD_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1C085390)
#define MEKEHCLGGDD_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1C084740)
#define MEKEHCLGGDD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C084A20)
#define MEKEHCLGGDD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C084E60)

inline static constexpr unsigned int MEKEHCLGGDD_TypeDefinitionIndex = 14585;

class MEKEHCLGGDD : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::GCMLINNJGIF DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::Il2CppArray<::ODGCPPNOICF*>* OJMBOGGMIKO; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKEHCLGGDD__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKEHCLGGDD_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKEHCLGGDD_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKEHCLGGDD_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKEHCLGGDD_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MEKEHCLGGDD_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MEKEHCLGGDD_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKEHCLGGDD_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKEHCLGGDD_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MEKEHCLGGDD_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::ODGCPPNOICF* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::ODGCPPNOICF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MEKEHCLGGDD_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKEHCLGGDD_NAMKJOJBAOA_OFFSET))(this);
	}
};
