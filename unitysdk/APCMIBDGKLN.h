#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DELCDJBLHMM.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class CGAHGMJICJI;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define APCMIBDGKLN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A573B50)
#define APCMIBDGKLN_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A5738D0)
#define APCMIBDGKLN_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A5738E0)
#define APCMIBDGKLN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A5739A0)
#define APCMIBDGKLN_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A573AD0)
#define APCMIBDGKLN_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1A573F50)
#define APCMIBDGKLN_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A573CA0)
#define APCMIBDGKLN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A573530)
#define APCMIBDGKLN_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A573C80)
#define APCMIBDGKLN_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A573510)
#define APCMIBDGKLN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A5737F0)
#define APCMIBDGKLN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A573C30)

inline static constexpr unsigned int APCMIBDGKLN_TypeDefinitionIndex = 11092;

class APCMIBDGKLN : public ::System::Object
{
public:
	::DELCDJBLHMM DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::Il2CppArray<::CGAHGMJICJI*>* OJMBOGGMIKO; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCMIBDGKLN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + APCMIBDGKLN_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCMIBDGKLN_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCMIBDGKLN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCMIBDGKLN_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + APCMIBDGKLN_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + APCMIBDGKLN_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCMIBDGKLN_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCMIBDGKLN_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCMIBDGKLN_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + APCMIBDGKLN_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::CGAHGMJICJI* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::CGAHGMJICJI*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + APCMIBDGKLN_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
