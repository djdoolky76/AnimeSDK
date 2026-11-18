#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CDLFJIHGMCE.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class PPIFFLIOPDD;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ADDCDAJMICH_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19F088F0)
#define ADDCDAJMICH_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19F086B0)
#define ADDCDAJMICH_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19F08830)
#define ADDCDAJMICH_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19F089D0)
#define ADDCDAJMICH_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19F086C0)
#define ADDCDAJMICH_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19F08D20)
#define ADDCDAJMICH_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19F08B50)
#define ADDCDAJMICH_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19F08300)
#define ADDCDAJMICH_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19F08F50)
#define ADDCDAJMICH_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19F082E0)
#define ADDCDAJMICH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19F085C0)
#define ADDCDAJMICH__CTOR_OFFSET UNITYSDK_OFFSET(0x19F08B00)

inline static constexpr unsigned int ADDCDAJMICH_TypeDefinitionIndex = 14579;

class ADDCDAJMICH : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::CDLFJIHGMCE DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::Il2CppArray<::PPIFFLIOPDD*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDCDAJMICH__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDCDAJMICH_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDCDAJMICH_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ADDCDAJMICH_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + ADDCDAJMICH_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDCDAJMICH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDCDAJMICH_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDCDAJMICH_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ADDCDAJMICH_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDCDAJMICH_CHLEALKAOJO_OFFSET))(this);
	}

	::PPIFFLIOPDD* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::PPIFFLIOPDD*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ADDCDAJMICH_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDCDAJMICH_NAMKJOJBAOA_OFFSET))(this);
	}
};
