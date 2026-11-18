#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPNCPGCHNEO.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class PKNBMDEEKLC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KFOEMNEAIBJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A50AFE0)
#define KFOEMNEAIBJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A50AD60)
#define KFOEMNEAIBJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A50AD70)
#define KFOEMNEAIBJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A50AE30)
#define KFOEMNEAIBJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A50AF60)
#define KFOEMNEAIBJ_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1A50B130)
#define KFOEMNEAIBJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A50B360)
#define KFOEMNEAIBJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A50A9B0)
#define KFOEMNEAIBJ_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A50B110)
#define KFOEMNEAIBJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A50A990)
#define KFOEMNEAIBJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A50AC70)
#define KFOEMNEAIBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1A50B0C0)

inline static constexpr unsigned int KFOEMNEAIBJ_TypeDefinitionIndex = 16299;

class KFOEMNEAIBJ : public ::System::Object
{
public:
	::Il2CppArray<::PKNBMDEEKLC*>* OJMBOGGMIKO; // 0x10
	::HPNCPGCHNEO DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOEMNEAIBJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOEMNEAIBJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOEMNEAIBJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOEMNEAIBJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOEMNEAIBJ_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KFOEMNEAIBJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KFOEMNEAIBJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOEMNEAIBJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOEMNEAIBJ_NAMKJOJBAOA_OFFSET))(this);
	}

	::PKNBMDEEKLC* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::PKNBMDEEKLC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KFOEMNEAIBJ_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KFOEMNEAIBJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOEMNEAIBJ_CHLEALKAOJO_OFFSET))(this);
	}
};
