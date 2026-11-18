#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FHEGGOBEHNB.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class BEEDLKLOPMF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define EFKJBHKGBOH_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B9B5090)
#define EFKJBHKGBOH_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B9B4E50)
#define EFKJBHKGBOH_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B9B4FD0)
#define EFKJBHKGBOH_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B9B5170)
#define EFKJBHKGBOH_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B9B4E60)
#define EFKJBHKGBOH_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B9B52F0)
#define EFKJBHKGBOH_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B9B5540)
#define EFKJBHKGBOH_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B9B4AA0)
#define EFKJBHKGBOH_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B9B5520)
#define EFKJBHKGBOH_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B9B4A80)
#define EFKJBHKGBOH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B9B4D60)
#define EFKJBHKGBOH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9B52A0)

inline static constexpr unsigned int EFKJBHKGBOH_TypeDefinitionIndex = 12372;

class EFKJBHKGBOH : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::FHEGGOBEHNB DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::Il2CppArray<::BEEDLKLOPMF*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFKJBHKGBOH__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EFKJBHKGBOH_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFKJBHKGBOH_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EFKJBHKGBOH_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + EFKJBHKGBOH_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFKJBHKGBOH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFKJBHKGBOH_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFKJBHKGBOH_FINALIZE_OFFSET))(this);
	}

	::BEEDLKLOPMF* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::BEEDLKLOPMF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EFKJBHKGBOH_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFKJBHKGBOH_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFKJBHKGBOH_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EFKJBHKGBOH_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
