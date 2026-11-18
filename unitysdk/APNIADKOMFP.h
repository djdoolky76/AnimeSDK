#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MNGCFAFOLKI.h"
#include "unitysdk/System/Object.h"

class FHKFHJFLFDC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define APNIADKOMFP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1C50ED80)
#define APNIADKOMFP_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1C50EB40)
#define APNIADKOMFP_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1C50ECC0)
#define APNIADKOMFP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C50EE60)
#define APNIADKOMFP_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1C50EB50)
#define APNIADKOMFP_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1C50F000)
#define APNIADKOMFP_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1C50F230)
#define APNIADKOMFP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1C50E790)
#define APNIADKOMFP_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1C50EFE0)
#define APNIADKOMFP_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1C50E770)
#define APNIADKOMFP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C50EA50)
#define APNIADKOMFP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C50EF90)

inline static constexpr unsigned int APNIADKOMFP_TypeDefinitionIndex = 10960;

class APNIADKOMFP : public ::System::Object
{
public:
	::MNGCFAFOLKI DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::Il2CppArray<::FHKFHJFLFDC*>* OJMBOGGMIKO; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APNIADKOMFP__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + APNIADKOMFP_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APNIADKOMFP_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + APNIADKOMFP_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + APNIADKOMFP_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APNIADKOMFP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APNIADKOMFP_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APNIADKOMFP_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APNIADKOMFP_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APNIADKOMFP_CHLEALKAOJO_OFFSET))(this);
	}

	::FHKFHJFLFDC* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::FHKFHJFLFDC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + APNIADKOMFP_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + APNIADKOMFP_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
