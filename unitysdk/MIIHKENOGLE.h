#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EICNBHFIGAD.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class OBJNBEBEOPP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MIIHKENOGLE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19DB3770)
#define MIIHKENOGLE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19DB3540)
#define MIIHKENOGLE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19DB36B0)
#define MIIHKENOGLE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19DB3850)
#define MIIHKENOGLE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19DB3550)
#define MIIHKENOGLE_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19DB3BC0)
#define MIIHKENOGLE_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19DB39D0)
#define MIIHKENOGLE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19DB31A0)
#define MIIHKENOGLE_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19DB3BA0)
#define MIIHKENOGLE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19DB3180)
#define MIIHKENOGLE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19DB3460)
#define MIIHKENOGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x19DB3980)

inline static constexpr unsigned int MIIHKENOGLE_TypeDefinitionIndex = 17000;

class MIIHKENOGLE : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::Il2CppArray<::OBJNBEBEOPP*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::EICNBHFIGAD DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIIHKENOGLE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIIHKENOGLE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIIHKENOGLE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIIHKENOGLE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MIIHKENOGLE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIIHKENOGLE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIIHKENOGLE_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIIHKENOGLE_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIIHKENOGLE_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIIHKENOGLE_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIIHKENOGLE_NAMKJOJBAOA_OFFSET))(this);
	}

	::OBJNBEBEOPP* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::OBJNBEBEOPP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIIHKENOGLE_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
