#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ECOHMLKCMAP.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class LLOFBMPOOHC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KLCBBMEEMMH_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1936E3E0)
#define KLCBBMEEMMH_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1936E1A0)
#define KLCBBMEEMMH_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1936E320)
#define KLCBBMEEMMH_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1936E4C0)
#define KLCBBMEEMMH_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1936E1B0)
#define KLCBBMEEMMH_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1936E640)
#define KLCBBMEEMMH_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1936E890)
#define KLCBBMEEMMH_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1936DDF0)
#define KLCBBMEEMMH_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1936E870)
#define KLCBBMEEMMH_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1936DDD0)
#define KLCBBMEEMMH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1936E0B0)
#define KLCBBMEEMMH__CTOR_OFFSET UNITYSDK_OFFSET(0x1936E5F0)

inline static constexpr unsigned int KLCBBMEEMMH_TypeDefinitionIndex = 10265;

class KLCBBMEEMMH : public ::System::Object
{
public:
	::Il2CppArray<::LLOFBMPOOHC*>* OJMBOGGMIKO; // 0x10
	::ECOHMLKCMAP DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLCBBMEEMMH__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KLCBBMEEMMH_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLCBBMEEMMH_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KLCBBMEEMMH_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KLCBBMEEMMH_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLCBBMEEMMH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLCBBMEEMMH_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLCBBMEEMMH_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLCBBMEEMMH_CHLEALKAOJO_OFFSET))(this);
	}

	::LLOFBMPOOHC* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::LLOFBMPOOHC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KLCBBMEEMMH_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLCBBMEEMMH_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KLCBBMEEMMH_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
