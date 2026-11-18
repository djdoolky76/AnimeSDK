#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/NFMHLBMIHHK.h"
#include "unitysdk/System/Object.h"

class HIFGEHCHKJM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HLCMNAHPDPL_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x18BB1DA0)
#define HLCMNAHPDPL_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x18BB1B70)
#define HLCMNAHPDPL_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x18BB1CE0)
#define HLCMNAHPDPL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18BB1E80)
#define HLCMNAHPDPL_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x18BB1B80)
#define HLCMNAHPDPL_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x18BB2020)
#define HLCMNAHPDPL_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x18BB2250)
#define HLCMNAHPDPL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x18BB17D0)
#define HLCMNAHPDPL_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x18BB2000)
#define HLCMNAHPDPL_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x18BB17B0)
#define HLCMNAHPDPL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x18BB1A90)
#define HLCMNAHPDPL__CTOR_OFFSET UNITYSDK_OFFSET(0x18BB1FB0)

inline static constexpr unsigned int HLCMNAHPDPL_TypeDefinitionIndex = 9364;

class HLCMNAHPDPL : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::Il2CppArray<::HIFGEHCHKJM*>* OJMBOGGMIKO; // 0x18
	::NFMHLBMIHHK DHDJDGFNBOA; // 0x20
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLCMNAHPDPL__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLCMNAHPDPL_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLCMNAHPDPL_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HLCMNAHPDPL_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HLCMNAHPDPL_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLCMNAHPDPL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLCMNAHPDPL_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLCMNAHPDPL_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLCMNAHPDPL_NAMKJOJBAOA_OFFSET))(this);
	}

	::HIFGEHCHKJM* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::HIFGEHCHKJM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HLCMNAHPDPL_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLCMNAHPDPL_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HLCMNAHPDPL_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
