#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/NEEFPHMMLHE.h"
#include "unitysdk/System/Object.h"

class CHALNAEKBPO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define LHMMGPBIIKN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x190FC310)
#define LHMMGPBIIKN_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x190FC0A0)
#define LHMMGPBIIKN_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x190FC250)
#define LHMMGPBIIKN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x190FC3F0)
#define LHMMGPBIIKN_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x190FC0B0)
#define LHMMGPBIIKN_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x190FC590)
#define LHMMGPBIIKN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x190FBCF0)
#define LHMMGPBIIKN_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x190FC570)
#define LHMMGPBIIKN_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x190FBCD0)
#define LHMMGPBIIKN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x190FBFB0)
#define LHMMGPBIIKN__CTOR_OFFSET UNITYSDK_OFFSET(0x190FC520)

inline static constexpr unsigned int LHMMGPBIIKN_TypeDefinitionIndex = 15025;

class LHMMGPBIIKN : public ::System::Object
{
public:
	::Il2CppArray<::CHALNAEKBPO*>* OJMBOGGMIKO; // 0x10
	::NEEFPHMMLHE DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHMMGPBIIKN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHMMGPBIIKN_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHMMGPBIIKN_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LHMMGPBIIKN_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + LHMMGPBIIKN_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHMMGPBIIKN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHMMGPBIIKN_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHMMGPBIIKN_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHMMGPBIIKN_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHMMGPBIIKN_NAMKJOJBAOA_OFFSET))(this);
	}

	::CHALNAEKBPO* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::CHALNAEKBPO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LHMMGPBIIKN_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
