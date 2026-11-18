#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GHEEOBNIEMB.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class AAIJDKMDACF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define OHOFEBKPJAF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1AB2FC30)
#define OHOFEBKPJAF_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1AB2F9F0)
#define OHOFEBKPJAF_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1AB2FB70)
#define OHOFEBKPJAF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1AB2FD10)
#define OHOFEBKPJAF_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1AB2FA00)
#define OHOFEBKPJAF_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1AB2FEB0)
#define OHOFEBKPJAF_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1AB300E0)
#define OHOFEBKPJAF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1AB2F640)
#define OHOFEBKPJAF_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1AB2FE90)
#define OHOFEBKPJAF_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1AB2F620)
#define OHOFEBKPJAF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1AB2F900)
#define OHOFEBKPJAF__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB2FE40)

inline static constexpr unsigned int OHOFEBKPJAF_TypeDefinitionIndex = 15503;

class OHOFEBKPJAF : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::GHEEOBNIEMB DHDJDGFNBOA; // 0x18
	::Il2CppArray<::AAIJDKMDACF*>* OJMBOGGMIKO; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHOFEBKPJAF__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OHOFEBKPJAF_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHOFEBKPJAF_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OHOFEBKPJAF_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + OHOFEBKPJAF_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHOFEBKPJAF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHOFEBKPJAF_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHOFEBKPJAF_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHOFEBKPJAF_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHOFEBKPJAF_CHLEALKAOJO_OFFSET))(this);
	}

	::AAIJDKMDACF* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::AAIJDKMDACF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OHOFEBKPJAF_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + OHOFEBKPJAF_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
