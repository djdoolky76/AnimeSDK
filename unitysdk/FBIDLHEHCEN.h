#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGHMNEMDCDH.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class GEILONPPKON;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FBIDLHEHCEN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B85E750)
#define FBIDLHEHCEN_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B85E4D0)
#define FBIDLHEHCEN_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B85E4E0)
#define FBIDLHEHCEN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B85E5A0)
#define FBIDLHEHCEN_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B85E6D0)
#define FBIDLHEHCEN_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B85E880)
#define FBIDLHEHCEN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B85E130)
#define FBIDLHEHCEN_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B85E110)
#define FBIDLHEHCEN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B85E3F0)
#define FBIDLHEHCEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1B85E830)

inline static constexpr unsigned int FBIDLHEHCEN_TypeDefinitionIndex = 13467;

class FBIDLHEHCEN : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::Il2CppArray<::GEILONPPKON*>* OJMBOGGMIKO; // 0x20
	::System::Action* PLDOELOOFLL; // 0x28
	::JGHMNEMDCDH DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBIDLHEHCEN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBIDLHEHCEN_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBIDLHEHCEN_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBIDLHEHCEN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBIDLHEHCEN_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FBIDLHEHCEN_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + FBIDLHEHCEN_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBIDLHEHCEN_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBIDLHEHCEN_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FBIDLHEHCEN_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
