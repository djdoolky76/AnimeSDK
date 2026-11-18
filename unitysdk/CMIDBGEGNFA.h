#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/PDAKMNHJBDJ.h"
#include "unitysdk/System/Object.h"

class KNFJOHOBJPA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CMIDBGEGNFA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17773080)
#define CMIDBGEGNFA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17772E40)
#define CMIDBGEGNFA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17772FC0)
#define CMIDBGEGNFA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17773160)
#define CMIDBGEGNFA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17772E50)
#define CMIDBGEGNFA_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x177734D0)
#define CMIDBGEGNFA_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17773300)
#define CMIDBGEGNFA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17772A90)
#define CMIDBGEGNFA_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x177732E0)
#define CMIDBGEGNFA_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17772A70)
#define CMIDBGEGNFA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17772D50)
#define CMIDBGEGNFA__CTOR_OFFSET UNITYSDK_OFFSET(0x17773290)

inline static constexpr unsigned int CMIDBGEGNFA_TypeDefinitionIndex = 13894;

class CMIDBGEGNFA : public ::System::Object
{
public:
	::PDAKMNHJBDJ DHDJDGFNBOA; // 0x10
	::Il2CppArray<::KNFJOHOBJPA*>* OJMBOGGMIKO; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMIDBGEGNFA__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMIDBGEGNFA_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMIDBGEGNFA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CMIDBGEGNFA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + CMIDBGEGNFA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMIDBGEGNFA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMIDBGEGNFA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMIDBGEGNFA_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMIDBGEGNFA_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CMIDBGEGNFA_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::KNFJOHOBJPA* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::KNFJOHOBJPA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CMIDBGEGNFA_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMIDBGEGNFA_CHLEALKAOJO_OFFSET))(this);
	}
};
