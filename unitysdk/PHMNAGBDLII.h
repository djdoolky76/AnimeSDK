#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DPMMBDFNKOG.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class BMCCHDKGAMI;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PHMNAGBDLII_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x191430E0)
#define PHMNAGBDLII_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19142EB0)
#define PHMNAGBDLII_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19143020)
#define PHMNAGBDLII_FINALIZE_OFFSET UNITYSDK_OFFSET(0x191431C0)
#define PHMNAGBDLII_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19142EC0)
#define PHMNAGBDLII_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x191434F0)
#define PHMNAGBDLII_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19143300)
#define PHMNAGBDLII_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19142B10)
#define PHMNAGBDLII_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x191434D0)
#define PHMNAGBDLII_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19142AF0)
#define PHMNAGBDLII_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19142DD0)
#define PHMNAGBDLII__CTOR_OFFSET UNITYSDK_OFFSET(0x191432F0)

inline static constexpr unsigned int PHMNAGBDLII_TypeDefinitionIndex = 14000;

class PHMNAGBDLII : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::Il2CppArray<::BMCCHDKGAMI*>* OJMBOGGMIKO; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::DPMMBDFNKOG DHDJDGFNBOA; // 0x28
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHMNAGBDLII__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PHMNAGBDLII_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHMNAGBDLII_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PHMNAGBDLII_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + PHMNAGBDLII_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHMNAGBDLII_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHMNAGBDLII_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHMNAGBDLII_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + PHMNAGBDLII_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHMNAGBDLII_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHMNAGBDLII_CHLEALKAOJO_OFFSET))(this);
	}

	::BMCCHDKGAMI* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::BMCCHDKGAMI*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PHMNAGBDLII_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
