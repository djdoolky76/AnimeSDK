#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FABCCBNAOOO.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class EHNOJHEPCNA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ADBCJOINMIK_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1C5035E0)
#define ADBCJOINMIK_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1C503360)
#define ADBCJOINMIK_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1C503370)
#define ADBCJOINMIK_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C503430)
#define ADBCJOINMIK_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1C503560)
#define ADBCJOINMIK_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1C5039E0)
#define ADBCJOINMIK_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1C503730)
#define ADBCJOINMIK_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1C502FB0)
#define ADBCJOINMIK_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1C503710)
#define ADBCJOINMIK_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1C502F90)
#define ADBCJOINMIK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C503270)
#define ADBCJOINMIK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5036C0)

inline static constexpr unsigned int ADBCJOINMIK_TypeDefinitionIndex = 9625;

class ADBCJOINMIK : public ::System::Object
{
public:
	::FABCCBNAOOO DHDJDGFNBOA; // 0x10
	::Il2CppArray<::EHNOJHEPCNA*>* OJMBOGGMIKO; // 0x28
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADBCJOINMIK__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ADBCJOINMIK_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADBCJOINMIK_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADBCJOINMIK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADBCJOINMIK_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ADBCJOINMIK_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + ADBCJOINMIK_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADBCJOINMIK_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADBCJOINMIK_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ADBCJOINMIK_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADBCJOINMIK_CHLEALKAOJO_OFFSET))(this);
	}

	::EHNOJHEPCNA* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::EHNOJHEPCNA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ADBCJOINMIK_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
