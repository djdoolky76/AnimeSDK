#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FGMDHBJGBPB.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class PIIIHLKCCCP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HNFOENIPLIJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B615900)
#define HNFOENIPLIJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B6156C0)
#define HNFOENIPLIJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B615840)
#define HNFOENIPLIJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B6159E0)
#define HNFOENIPLIJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B6156D0)
#define HNFOENIPLIJ_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B615D50)
#define HNFOENIPLIJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B615B60)
#define HNFOENIPLIJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B615310)
#define HNFOENIPLIJ_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B615D30)
#define HNFOENIPLIJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B6152F0)
#define HNFOENIPLIJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B6155D0)
#define HNFOENIPLIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1B615B10)

inline static constexpr unsigned int HNFOENIPLIJ_TypeDefinitionIndex = 13092;

class HNFOENIPLIJ : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::Il2CppArray<::PIIIHLKCCCP*>* OJMBOGGMIKO; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::FGMDHBJGBPB DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFOENIPLIJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFOENIPLIJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFOENIPLIJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HNFOENIPLIJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HNFOENIPLIJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFOENIPLIJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFOENIPLIJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFOENIPLIJ_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HNFOENIPLIJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFOENIPLIJ_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFOENIPLIJ_CHLEALKAOJO_OFFSET))(this);
	}

	::PIIIHLKCCCP* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::PIIIHLKCCCP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HNFOENIPLIJ_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
