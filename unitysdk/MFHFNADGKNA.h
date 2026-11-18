#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/KELABCEJOKI.h"
#include "unitysdk/System/Object.h"

class PNAGAJPEOON;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MFHFNADGKNA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BF5DE40)
#define MFHFNADGKNA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BF5DC10)
#define MFHFNADGKNA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BF5DD80)
#define MFHFNADGKNA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BF5DF20)
#define MFHFNADGKNA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BF5DC20)
#define MFHFNADGKNA_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1BF5E290)
#define MFHFNADGKNA_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BF5E0A0)
#define MFHFNADGKNA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BF5D870)
#define MFHFNADGKNA_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1BF5E270)
#define MFHFNADGKNA_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BF5D850)
#define MFHFNADGKNA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BF5DB30)
#define MFHFNADGKNA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF5E050)

inline static constexpr unsigned int MFHFNADGKNA_TypeDefinitionIndex = 16994;

class MFHFNADGKNA : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::Il2CppArray<::PNAGAJPEOON*>* OJMBOGGMIKO; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::KELABCEJOKI DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFHFNADGKNA__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MFHFNADGKNA_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFHFNADGKNA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MFHFNADGKNA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MFHFNADGKNA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFHFNADGKNA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFHFNADGKNA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFHFNADGKNA_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFHFNADGKNA_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MFHFNADGKNA_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFHFNADGKNA_NAMKJOJBAOA_OFFSET))(this);
	}

	::PNAGAJPEOON* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::PNAGAJPEOON*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MFHFNADGKNA_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
