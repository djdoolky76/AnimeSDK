#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MBDKFOIJGGJ.h"
#include "unitysdk/System/Object.h"

class GDLGKCBODID;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NAGGPJMOMIL_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1C090BA0)
#define NAGGPJMOMIL_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1C090970)
#define NAGGPJMOMIL_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1C090AE0)
#define NAGGPJMOMIL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C090C80)
#define NAGGPJMOMIL_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1C090980)
#define NAGGPJMOMIL_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1C090FF0)
#define NAGGPJMOMIL_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1C090E00)
#define NAGGPJMOMIL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1C0905D0)
#define NAGGPJMOMIL_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1C090FD0)
#define NAGGPJMOMIL_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1C0905B0)
#define NAGGPJMOMIL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C090890)
#define NAGGPJMOMIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C090DB0)

inline static constexpr unsigned int NAGGPJMOMIL_TypeDefinitionIndex = 10873;

class NAGGPJMOMIL : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::Il2CppArray<::GDLGKCBODID*>* OJMBOGGMIKO; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::MBDKFOIJGGJ DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGGPJMOMIL__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGGPJMOMIL_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGGPJMOMIL_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NAGGPJMOMIL_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NAGGPJMOMIL_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGGPJMOMIL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGGPJMOMIL_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGGPJMOMIL_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGGPJMOMIL_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NAGGPJMOMIL_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGGPJMOMIL_NAMKJOJBAOA_OFFSET))(this);
	}

	::GDLGKCBODID* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::GDLGKCBODID*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAGGPJMOMIL_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
