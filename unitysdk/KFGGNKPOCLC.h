#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/KMDDELBODKB.h"
#include "unitysdk/System/Object.h"

class FJEGJAAGKCI;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KFGGNKPOCLC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x193688C0)
#define KFGGNKPOCLC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19368690)
#define KFGGNKPOCLC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19368800)
#define KFGGNKPOCLC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x193689A0)
#define KFGGNKPOCLC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x193686A0)
#define KFGGNKPOCLC_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19368AE0)
#define KFGGNKPOCLC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19368CF0)
#define KFGGNKPOCLC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x193682F0)
#define KFGGNKPOCLC_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19368CD0)
#define KFGGNKPOCLC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x193682D0)
#define KFGGNKPOCLC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x193685B0)
#define KFGGNKPOCLC__CTOR_OFFSET UNITYSDK_OFFSET(0x19368AD0)

inline static constexpr unsigned int KFGGNKPOCLC_TypeDefinitionIndex = 10625;

class KFGGNKPOCLC : public ::System::Object
{
public:
	::Il2CppArray<::FJEGJAAGKCI*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::KMDDELBODKB DHDJDGFNBOA; // 0x28
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGGNKPOCLC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGGNKPOCLC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGGNKPOCLC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KFGGNKPOCLC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KFGGNKPOCLC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGGNKPOCLC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGGNKPOCLC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGGNKPOCLC_FINALIZE_OFFSET))(this);
	}

	::FJEGJAAGKCI* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::FJEGJAAGKCI*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KFGGNKPOCLC_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGGNKPOCLC_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KFGGNKPOCLC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGGNKPOCLC_NAMKJOJBAOA_OFFSET))(this);
	}
};
