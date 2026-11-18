#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/NHIOLKDLDKJ.h"
#include "unitysdk/System/Object.h"

class BAPFJMFGBAC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KKHEFEEIPCA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x15303700)
#define KKHEFEEIPCA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x15303480)
#define KKHEFEEIPCA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x15303490)
#define KKHEFEEIPCA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x15303550)
#define KKHEFEEIPCA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x15303680)
#define KKHEFEEIPCA_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x15303830)
#define KKHEFEEIPCA_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x15303A80)
#define KKHEFEEIPCA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x153030D0)
#define KKHEFEEIPCA_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x15303A60)
#define KKHEFEEIPCA_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x153030B0)
#define KKHEFEEIPCA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x15303390)
#define KKHEFEEIPCA__CTOR_OFFSET UNITYSDK_OFFSET(0x153037E0)

inline static constexpr unsigned int KKHEFEEIPCA_TypeDefinitionIndex = 12796;

class KKHEFEEIPCA : public ::System::Object
{
public:
	::Il2CppArray<::BAPFJMFGBAC*>* OJMBOGGMIKO; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::NHIOLKDLDKJ DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHEFEEIPCA__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHEFEEIPCA_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHEFEEIPCA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHEFEEIPCA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHEFEEIPCA_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KKHEFEEIPCA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KKHEFEEIPCA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHEFEEIPCA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHEFEEIPCA_CHLEALKAOJO_OFFSET))(this);
	}

	::BAPFJMFGBAC* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::BAPFJMFGBAC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KKHEFEEIPCA_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KKHEFEEIPCA_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHEFEEIPCA_NAMKJOJBAOA_OFFSET))(this);
	}
};
