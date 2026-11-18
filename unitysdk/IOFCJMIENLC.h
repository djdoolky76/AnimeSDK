#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMHDCMECBIO.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class NOJCCAKHAPM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define IOFCJMIENLC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x152F02E0)
#define IOFCJMIENLC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x152F0060)
#define IOFCJMIENLC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x152F0070)
#define IOFCJMIENLC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x152F0130)
#define IOFCJMIENLC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x152F0260)
#define IOFCJMIENLC_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x152F0430)
#define IOFCJMIENLC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x152F0670)
#define IOFCJMIENLC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x152EFCB0)
#define IOFCJMIENLC_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x152F0410)
#define IOFCJMIENLC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x152EFC90)
#define IOFCJMIENLC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x152EFF70)
#define IOFCJMIENLC__CTOR_OFFSET UNITYSDK_OFFSET(0x152F03C0)

inline static constexpr unsigned int IOFCJMIENLC_TypeDefinitionIndex = 17494;

class IOFCJMIENLC : public ::System::Object
{
public:
	::AMHDCMECBIO DHDJDGFNBOA; // 0x10
	::Il2CppArray<::NOJCCAKHAPM*>* OJMBOGGMIKO; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOFCJMIENLC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IOFCJMIENLC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOFCJMIENLC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOFCJMIENLC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOFCJMIENLC_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IOFCJMIENLC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + IOFCJMIENLC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOFCJMIENLC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOFCJMIENLC_NAMKJOJBAOA_OFFSET))(this);
	}

	::NOJCCAKHAPM* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::NOJCCAKHAPM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IOFCJMIENLC_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IOFCJMIENLC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOFCJMIENLC_CHLEALKAOJO_OFFSET))(this);
	}
};
