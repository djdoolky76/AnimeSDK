#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDPOPCMAMBH.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class NECHLIPELDB;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define OHOACCGOAGE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1CFFC510)
#define OHOACCGOAGE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1CFFC2E0)
#define OHOACCGOAGE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1CFFC450)
#define OHOACCGOAGE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1CFFC5F0)
#define OHOACCGOAGE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1CFFC2F0)
#define OHOACCGOAGE_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1CFFC790)
#define OHOACCGOAGE_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1CFFC9D0)
#define OHOACCGOAGE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1CFFBF40)
#define OHOACCGOAGE_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1CFFC770)
#define OHOACCGOAGE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1CFFBF20)
#define OHOACCGOAGE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1CFFC200)
#define OHOACCGOAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFFC720)

inline static constexpr unsigned int OHOACCGOAGE_TypeDefinitionIndex = 16602;

class OHOACCGOAGE : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::Il2CppArray<::NECHLIPELDB*>* OJMBOGGMIKO; // 0x28
	::EDPOPCMAMBH DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHOACCGOAGE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OHOACCGOAGE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHOACCGOAGE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OHOACCGOAGE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + OHOACCGOAGE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHOACCGOAGE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHOACCGOAGE_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHOACCGOAGE_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHOACCGOAGE_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHOACCGOAGE_NAMKJOJBAOA_OFFSET))(this);
	}

	::NECHLIPELDB* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::NECHLIPELDB*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OHOACCGOAGE_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + OHOACCGOAGE_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
