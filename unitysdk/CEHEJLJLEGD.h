#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/LBCBDPHNEBF.h"
#include "unitysdk/System/Object.h"

class HAJBCMAGEFF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CEHEJLJLEGD_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x18784370)
#define CEHEJLJLEGD_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x18784140)
#define CEHEJLJLEGD_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x187842B0)
#define CEHEJLJLEGD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18784450)
#define CEHEJLJLEGD_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x18784150)
#define CEHEJLJLEGD_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x187847A0)
#define CEHEJLJLEGD_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x187845D0)
#define CEHEJLJLEGD_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x18783DA0)
#define CEHEJLJLEGD_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x187849D0)
#define CEHEJLJLEGD_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x18783D80)
#define CEHEJLJLEGD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x18784060)
#define CEHEJLJLEGD__CTOR_OFFSET UNITYSDK_OFFSET(0x18784580)

inline static constexpr unsigned int CEHEJLJLEGD_TypeDefinitionIndex = 12903;

class CEHEJLJLEGD : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::LBCBDPHNEBF DHDJDGFNBOA; // 0x18
	::Il2CppArray<::HAJBCMAGEFF*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHEJLJLEGD__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHEJLJLEGD_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHEJLJLEGD_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CEHEJLJLEGD_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + CEHEJLJLEGD_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHEJLJLEGD_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHEJLJLEGD_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHEJLJLEGD_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CEHEJLJLEGD_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::HAJBCMAGEFF* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::HAJBCMAGEFF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CEHEJLJLEGD_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHEJLJLEGD_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHEJLJLEGD_CHLEALKAOJO_OFFSET))(this);
	}
};
