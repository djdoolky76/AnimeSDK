#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPMKFNGEJHJ.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class LLFGHEHHPEA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DBAJLBOKIMN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B9A1000)
#define DBAJLBOKIMN_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B9A0DC0)
#define DBAJLBOKIMN_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B9A0F40)
#define DBAJLBOKIMN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B9A10E0)
#define DBAJLBOKIMN_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B9A0DD0)
#define DBAJLBOKIMN_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B9A1450)
#define DBAJLBOKIMN_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B9A1260)
#define DBAJLBOKIMN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B9A0A10)
#define DBAJLBOKIMN_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B9A1430)
#define DBAJLBOKIMN_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B9A09F0)
#define DBAJLBOKIMN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B9A0CD0)
#define DBAJLBOKIMN__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9A1210)

inline static constexpr unsigned int DBAJLBOKIMN_TypeDefinitionIndex = 14869;

class DBAJLBOKIMN : public ::System::Object
{
public:
	::Il2CppArray<::LLFGHEHHPEA*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::HPMKFNGEJHJ DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBAJLBOKIMN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DBAJLBOKIMN_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBAJLBOKIMN_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DBAJLBOKIMN_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DBAJLBOKIMN_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBAJLBOKIMN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBAJLBOKIMN_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBAJLBOKIMN_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DBAJLBOKIMN_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBAJLBOKIMN_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBAJLBOKIMN_NAMKJOJBAOA_OFFSET))(this);
	}

	::LLFGHEHHPEA* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::LLFGHEHHPEA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DBAJLBOKIMN_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
