#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IACKAFJEJOC.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class DBAAJIKGCNG;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OMJPMMLFKJD_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1736A850)
#define OMJPMMLFKJD_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1736A620)
#define OMJPMMLFKJD_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1736A790)
#define OMJPMMLFKJD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1736A930)
#define OMJPMMLFKJD_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1736A630)
#define OMJPMMLFKJD_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1736AC60)
#define OMJPMMLFKJD_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1736AA70)
#define OMJPMMLFKJD_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1736A280)
#define OMJPMMLFKJD_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1736AC40)
#define OMJPMMLFKJD_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1736A260)
#define OMJPMMLFKJD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1736A540)
#define OMJPMMLFKJD__CTOR_OFFSET UNITYSDK_OFFSET(0x1736AA60)

inline static constexpr unsigned int OMJPMMLFKJD_TypeDefinitionIndex = 15275;

class OMJPMMLFKJD : public ::System::Object
{
public:
	::IACKAFJEJOC DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::Il2CppArray<::DBAAJIKGCNG*>* OJMBOGGMIKO; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMJPMMLFKJD__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMJPMMLFKJD_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMJPMMLFKJD_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OMJPMMLFKJD_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + OMJPMMLFKJD_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMJPMMLFKJD_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMJPMMLFKJD_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMJPMMLFKJD_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + OMJPMMLFKJD_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMJPMMLFKJD_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMJPMMLFKJD_CHLEALKAOJO_OFFSET))(this);
	}

	::DBAAJIKGCNG* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::DBAAJIKGCNG*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OMJPMMLFKJD_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
