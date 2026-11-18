#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOJBJFJLMBA.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class IACKLKCNANP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FCBIHOKPHPD_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1ADDF720)
#define FCBIHOKPHPD_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1ADDF4E0)
#define FCBIHOKPHPD_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1ADDF660)
#define FCBIHOKPHPD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1ADDF800)
#define FCBIHOKPHPD_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1ADDF4F0)
#define FCBIHOKPHPD_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1ADDFB50)
#define FCBIHOKPHPD_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1ADDF980)
#define FCBIHOKPHPD_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1ADDF130)
#define FCBIHOKPHPD_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1ADDFD80)
#define FCBIHOKPHPD_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1ADDF110)
#define FCBIHOKPHPD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1ADDF3F0)
#define FCBIHOKPHPD__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADDF930)

inline static constexpr unsigned int FCBIHOKPHPD_TypeDefinitionIndex = 13439;

class FCBIHOKPHPD : public ::System::Object
{
public:
	::DOJBJFJLMBA DHDJDGFNBOA; // 0x10
	::Il2CppArray<::IACKLKCNANP*>* OJMBOGGMIKO; // 0x28
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBIHOKPHPD__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBIHOKPHPD_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBIHOKPHPD_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FCBIHOKPHPD_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + FCBIHOKPHPD_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBIHOKPHPD_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBIHOKPHPD_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBIHOKPHPD_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FCBIHOKPHPD_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::IACKLKCNANP* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::IACKLKCNANP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FCBIHOKPHPD_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBIHOKPHPD_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBIHOKPHPD_CHLEALKAOJO_OFFSET))(this);
	}
};
