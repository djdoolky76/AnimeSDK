#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLIDIILPOBI.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class LGHBECONCGB;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define GMEELLCOCHL_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B7BD240)
#define GMEELLCOCHL_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B7BD000)
#define GMEELLCOCHL_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B7BD180)
#define GMEELLCOCHL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B7BD320)
#define GMEELLCOCHL_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B7BD010)
#define GMEELLCOCHL_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B7BD690)
#define GMEELLCOCHL_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B7BD4C0)
#define GMEELLCOCHL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B7BCC50)
#define GMEELLCOCHL_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B7BD4A0)
#define GMEELLCOCHL_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B7BCC30)
#define GMEELLCOCHL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B7BCF10)
#define GMEELLCOCHL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7BD450)

inline static constexpr unsigned int GMEELLCOCHL_TypeDefinitionIndex = 10113;

class GMEELLCOCHL : public ::System::Object
{
public:
	::HLIDIILPOBI DHDJDGFNBOA; // 0x10
	::Il2CppArray<::LGHBECONCGB*>* OJMBOGGMIKO; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMEELLCOCHL__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GMEELLCOCHL_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMEELLCOCHL_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GMEELLCOCHL_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + GMEELLCOCHL_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMEELLCOCHL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMEELLCOCHL_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMEELLCOCHL_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMEELLCOCHL_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMEELLCOCHL_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GMEELLCOCHL_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::LGHBECONCGB* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::LGHBECONCGB*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GMEELLCOCHL_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
