#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/OEOCAHECLIB.h"
#include "unitysdk/System/Object.h"

class FDAHONLEAKI;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CPNEEOJODBB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17776700)
#define CPNEEOJODBB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17776480)
#define CPNEEOJODBB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17776490)
#define CPNEEOJODBB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17776550)
#define CPNEEOJODBB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17776680)
#define CPNEEOJODBB_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17776B00)
#define CPNEEOJODBB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17776830)
#define CPNEEOJODBB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x177760D0)
#define CPNEEOJODBB_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17776AE0)
#define CPNEEOJODBB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x177760B0)
#define CPNEEOJODBB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17776390)
#define CPNEEOJODBB__CTOR_OFFSET UNITYSDK_OFFSET(0x177767E0)

inline static constexpr unsigned int CPNEEOJODBB_TypeDefinitionIndex = 14126;

class CPNEEOJODBB : public ::System::Object
{
public:
	::OEOCAHECLIB DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::Il2CppArray<::FDAHONLEAKI*>* OJMBOGGMIKO; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNEEOJODBB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNEEOJODBB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNEEOJODBB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNEEOJODBB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNEEOJODBB_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CPNEEOJODBB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + CPNEEOJODBB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNEEOJODBB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNEEOJODBB_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CPNEEOJODBB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNEEOJODBB_NAMKJOJBAOA_OFFSET))(this);
	}

	::FDAHONLEAKI* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::FDAHONLEAKI*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CPNEEOJODBB_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
