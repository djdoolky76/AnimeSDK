#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/KIFGJALMCIG.h"
#include "unitysdk/System/Object.h"

class KDNHFAFMKKE;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PHPLDBMDNNI_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1EE02CA0)
#define PHPLDBMDNNI_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1EE02A70)
#define PHPLDBMDNNI_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1EE02BE0)
#define PHPLDBMDNNI_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1EE02D80)
#define PHPLDBMDNNI_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1EE02A80)
#define PHPLDBMDNNI_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1EE02F00)
#define PHPLDBMDNNI_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1EE03150)
#define PHPLDBMDNNI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1EE026D0)
#define PHPLDBMDNNI_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1EE03130)
#define PHPLDBMDNNI_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1EE026B0)
#define PHPLDBMDNNI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1EE02990)
#define PHPLDBMDNNI__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE02EB0)

inline static constexpr unsigned int PHPLDBMDNNI_TypeDefinitionIndex = 9371;

class PHPLDBMDNNI : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::KIFGJALMCIG DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::Il2CppArray<::KDNHFAFMKKE*>* OJMBOGGMIKO; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPLDBMDNNI__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPLDBMDNNI_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPLDBMDNNI_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PHPLDBMDNNI_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + PHPLDBMDNNI_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPLDBMDNNI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPLDBMDNNI_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPLDBMDNNI_FINALIZE_OFFSET))(this);
	}

	::KDNHFAFMKKE* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::KDNHFAFMKKE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PHPLDBMDNNI_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPLDBMDNNI_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPLDBMDNNI_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + PHPLDBMDNNI_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
