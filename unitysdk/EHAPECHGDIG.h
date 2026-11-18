#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACLFPNCFGKK.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class BAHELGNCOPI;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define EHAPECHGDIG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x187AA860)
#define EHAPECHGDIG_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x187AA620)
#define EHAPECHGDIG_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x187AA7A0)
#define EHAPECHGDIG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x187AA940)
#define EHAPECHGDIG_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x187AA630)
#define EHAPECHGDIG_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x187AACB0)
#define EHAPECHGDIG_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x187AAAC0)
#define EHAPECHGDIG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x187AA270)
#define EHAPECHGDIG_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x187AAC90)
#define EHAPECHGDIG_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x187AA250)
#define EHAPECHGDIG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x187AA530)
#define EHAPECHGDIG__CTOR_OFFSET UNITYSDK_OFFSET(0x187AAA70)

inline static constexpr unsigned int EHAPECHGDIG_TypeDefinitionIndex = 14788;

class EHAPECHGDIG : public ::System::Object
{
public:
	::ACLFPNCFGKK DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::System::Action* PLDOELOOFLL; // 0x30
	::Il2CppArray<::BAHELGNCOPI*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHAPECHGDIG__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHAPECHGDIG_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHAPECHGDIG_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EHAPECHGDIG_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + EHAPECHGDIG_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHAPECHGDIG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHAPECHGDIG_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHAPECHGDIG_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EHAPECHGDIG_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHAPECHGDIG_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHAPECHGDIG_NAMKJOJBAOA_OFFSET))(this);
	}

	::BAHELGNCOPI* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::BAHELGNCOPI*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EHAPECHGDIG_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
