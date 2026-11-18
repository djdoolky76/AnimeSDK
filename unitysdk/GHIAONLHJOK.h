#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/PJAKIMGPCAA.h"
#include "unitysdk/System/Object.h"

class DGGLFBCFPAF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define GHIAONLHJOK_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B116720)
#define GHIAONLHJOK_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B1164E0)
#define GHIAONLHJOK_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B116660)
#define GHIAONLHJOK_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B116800)
#define GHIAONLHJOK_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B1164F0)
#define GHIAONLHJOK_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B116980)
#define GHIAONLHJOK_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B116BD0)
#define GHIAONLHJOK_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B116130)
#define GHIAONLHJOK_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B116BB0)
#define GHIAONLHJOK_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B116110)
#define GHIAONLHJOK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B1163F0)
#define GHIAONLHJOK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B116930)

inline static constexpr unsigned int GHIAONLHJOK_TypeDefinitionIndex = 16387;

class GHIAONLHJOK : public ::System::Object
{
public:
	::PJAKIMGPCAA DHDJDGFNBOA; // 0x10
	::System::Action* PLDOELOOFLL; // 0x28
	::Il2CppArray<::DGGLFBCFPAF*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHIAONLHJOK__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHIAONLHJOK_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHIAONLHJOK_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GHIAONLHJOK_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + GHIAONLHJOK_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHIAONLHJOK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHIAONLHJOK_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHIAONLHJOK_FINALIZE_OFFSET))(this);
	}

	::DGGLFBCFPAF* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::DGGLFBCFPAF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GHIAONLHJOK_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GHIAONLHJOK_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHIAONLHJOK_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHIAONLHJOK_NAMKJOJBAOA_OFFSET))(this);
	}
};
