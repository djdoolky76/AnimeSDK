#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICDEPHDPCHN.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class EJBNMBCHEIN;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DENDKCIKFMC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1579D950)
#define DENDKCIKFMC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1579D6D0)
#define DENDKCIKFMC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1579D6E0)
#define DENDKCIKFMC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1579D7A0)
#define DENDKCIKFMC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1579D8D0)
#define DENDKCIKFMC_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1579DA80)
#define DENDKCIKFMC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1579DCD0)
#define DENDKCIKFMC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1579D320)
#define DENDKCIKFMC_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1579DCB0)
#define DENDKCIKFMC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1579D300)
#define DENDKCIKFMC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1579D5E0)
#define DENDKCIKFMC__CTOR_OFFSET UNITYSDK_OFFSET(0x1579DA30)

inline static constexpr unsigned int DENDKCIKFMC_TypeDefinitionIndex = 10206;

class DENDKCIKFMC : public ::System::Object
{
public:
	::ICDEPHDPCHN DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::Il2CppArray<::EJBNMBCHEIN*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DENDKCIKFMC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DENDKCIKFMC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DENDKCIKFMC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DENDKCIKFMC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DENDKCIKFMC_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DENDKCIKFMC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DENDKCIKFMC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DENDKCIKFMC_BHLAEBMEOLO_OFFSET))(this);
	}

	::EJBNMBCHEIN* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::EJBNMBCHEIN*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DENDKCIKFMC_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DENDKCIKFMC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DENDKCIKFMC_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DENDKCIKFMC_CHLEALKAOJO_OFFSET))(this);
	}
};
