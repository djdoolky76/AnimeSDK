#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/OBAFLMKGIAC.h"
#include "unitysdk/System/Object.h"

class DOAELPEKCLL;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PACIBKHDMHC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19DD46F0)
#define PACIBKHDMHC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19DD44C0)
#define PACIBKHDMHC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19DD4630)
#define PACIBKHDMHC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19DD47D0)
#define PACIBKHDMHC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19DD44D0)
#define PACIBKHDMHC_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19DD4970)
#define PACIBKHDMHC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19DD4BA0)
#define PACIBKHDMHC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19DD4120)
#define PACIBKHDMHC_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19DD4950)
#define PACIBKHDMHC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19DD4100)
#define PACIBKHDMHC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19DD43E0)
#define PACIBKHDMHC__CTOR_OFFSET UNITYSDK_OFFSET(0x19DD4900)

inline static constexpr unsigned int PACIBKHDMHC_TypeDefinitionIndex = 13319;

class PACIBKHDMHC : public ::System::Object
{
public:
	::OBAFLMKGIAC DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::Il2CppArray<::DOAELPEKCLL*>* OJMBOGGMIKO; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PACIBKHDMHC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PACIBKHDMHC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PACIBKHDMHC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PACIBKHDMHC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + PACIBKHDMHC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PACIBKHDMHC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PACIBKHDMHC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PACIBKHDMHC_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PACIBKHDMHC_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PACIBKHDMHC_NAMKJOJBAOA_OFFSET))(this);
	}

	::DOAELPEKCLL* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::DOAELPEKCLL*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PACIBKHDMHC_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + PACIBKHDMHC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
