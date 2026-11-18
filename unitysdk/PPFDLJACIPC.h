#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/PMHFFFJCMAN.h"
#include "unitysdk/System/Object.h"

class HBPPLMGPGEH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PPFDLJACIPC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1C0B9870)
#define PPFDLJACIPC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1C0B9640)
#define PPFDLJACIPC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1C0B97B0)
#define PPFDLJACIPC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C0B9950)
#define PPFDLJACIPC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1C0B9650)
#define PPFDLJACIPC_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1C0B9CA0)
#define PPFDLJACIPC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1C0B9AD0)
#define PPFDLJACIPC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1C0B92A0)
#define PPFDLJACIPC_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1C0B9ED0)
#define PPFDLJACIPC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1C0B9280)
#define PPFDLJACIPC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C0B9560)
#define PPFDLJACIPC__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0B9A80)

inline static constexpr unsigned int PPFDLJACIPC_TypeDefinitionIndex = 10368;

class PPFDLJACIPC : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::PMHFFFJCMAN DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::Il2CppArray<::HBPPLMGPGEH*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPFDLJACIPC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PPFDLJACIPC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPFDLJACIPC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PPFDLJACIPC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + PPFDLJACIPC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPFDLJACIPC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPFDLJACIPC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPFDLJACIPC_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPFDLJACIPC_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + PPFDLJACIPC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::HBPPLMGPGEH* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::HBPPLMGPGEH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PPFDLJACIPC_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPFDLJACIPC_NAMKJOJBAOA_OFFSET))(this);
	}
};
