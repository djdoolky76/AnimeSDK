#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MNFNBOOKGND.h"
#include "unitysdk/System/Object.h"

class OKGGAEOJCBA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LDHLIOLFJFA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1958C130)
#define LDHLIOLFJFA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1958BF00)
#define LDHLIOLFJFA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1958C070)
#define LDHLIOLFJFA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1958C210)
#define LDHLIOLFJFA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1958BF10)
#define LDHLIOLFJFA_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1958C540)
#define LDHLIOLFJFA_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1958C350)
#define LDHLIOLFJFA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1958BB60)
#define LDHLIOLFJFA_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1958C520)
#define LDHLIOLFJFA_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1958BB40)
#define LDHLIOLFJFA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1958BE20)
#define LDHLIOLFJFA__CTOR_OFFSET UNITYSDK_OFFSET(0x1958C340)

inline static constexpr unsigned int LDHLIOLFJFA_TypeDefinitionIndex = 13656;

class LDHLIOLFJFA : public ::System::Object
{
public:
	::MNFNBOOKGND DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::Il2CppArray<::OKGGAEOJCBA*>* OJMBOGGMIKO; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDHLIOLFJFA__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LDHLIOLFJFA_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDHLIOLFJFA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LDHLIOLFJFA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + LDHLIOLFJFA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDHLIOLFJFA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDHLIOLFJFA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDHLIOLFJFA_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LDHLIOLFJFA_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDHLIOLFJFA_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDHLIOLFJFA_NAMKJOJBAOA_OFFSET))(this);
	}

	::OKGGAEOJCBA* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::OKGGAEOJCBA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LDHLIOLFJFA_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
