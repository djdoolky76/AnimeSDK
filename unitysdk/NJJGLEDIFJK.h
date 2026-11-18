#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACAHKCDCCOI.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class CNPANPLLCCD;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NJJGLEDIFJK_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BF6F440)
#define NJJGLEDIFJK_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BF6F1C0)
#define NJJGLEDIFJK_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BF6F1D0)
#define NJJGLEDIFJK_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BF6F290)
#define NJJGLEDIFJK_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BF6F3C0)
#define NJJGLEDIFJK_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1BF6F570)
#define NJJGLEDIFJK_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BF6F7C0)
#define NJJGLEDIFJK_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BF6EE10)
#define NJJGLEDIFJK_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1BF6F7A0)
#define NJJGLEDIFJK_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BF6EDF0)
#define NJJGLEDIFJK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BF6F0D0)
#define NJJGLEDIFJK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF6F520)

inline static constexpr unsigned int NJJGLEDIFJK_TypeDefinitionIndex = 11340;

class NJJGLEDIFJK : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::Il2CppArray<::CNPANPLLCCD*>* OJMBOGGMIKO; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::ACAHKCDCCOI DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJJGLEDIFJK__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NJJGLEDIFJK_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJJGLEDIFJK_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJJGLEDIFJK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJJGLEDIFJK_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NJJGLEDIFJK_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NJJGLEDIFJK_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJJGLEDIFJK_BHLAEBMEOLO_OFFSET))(this);
	}

	::CNPANPLLCCD* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::CNPANPLLCCD*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NJJGLEDIFJK_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJJGLEDIFJK_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NJJGLEDIFJK_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJJGLEDIFJK_NAMKJOJBAOA_OFFSET))(this);
	}
};
