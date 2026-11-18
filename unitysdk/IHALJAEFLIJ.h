#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/PHBBAPICPKB.h"
#include "unitysdk/System/Object.h"

class FNMCMFHBMGC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define IHALJAEFLIJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1747EDC0)
#define IHALJAEFLIJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1747EB90)
#define IHALJAEFLIJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1747ED00)
#define IHALJAEFLIJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1747EEA0)
#define IHALJAEFLIJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1747EBA0)
#define IHALJAEFLIJ_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1747F210)
#define IHALJAEFLIJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1747F020)
#define IHALJAEFLIJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1747E7F0)
#define IHALJAEFLIJ_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1747F1F0)
#define IHALJAEFLIJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1747E7D0)
#define IHALJAEFLIJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1747EAB0)
#define IHALJAEFLIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1747EFD0)

inline static constexpr unsigned int IHALJAEFLIJ_TypeDefinitionIndex = 14376;

class IHALJAEFLIJ : public ::System::Object
{
public:
	::PHBBAPICPKB DHDJDGFNBOA; // 0x10
	::System::Action* PLDOELOOFLL; // 0x28
	::Il2CppArray<::FNMCMFHBMGC*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHALJAEFLIJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IHALJAEFLIJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHALJAEFLIJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IHALJAEFLIJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + IHALJAEFLIJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHALJAEFLIJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHALJAEFLIJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHALJAEFLIJ_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IHALJAEFLIJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHALJAEFLIJ_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHALJAEFLIJ_NAMKJOJBAOA_OFFSET))(this);
	}

	::FNMCMFHBMGC* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::FNMCMFHBMGC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IHALJAEFLIJ_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
